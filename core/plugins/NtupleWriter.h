#ifndef NtupleWriter_h
#define NtupleWriter_h

#include "FWCore/Framework/interface/ESHandle.h"
#include "FWCore/Utilities/interface/InputTag.h"
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDFilter.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

#include "DataFormats/Common/interface/TriggerResults.h"
#include "DataFormats/JetReco/interface/GenJet.h"

#include "UHH2/core/include/Event.h"
#include "UHH2/core/include/AnalysisModule.h"

#include "TTree.h"

#include <memory>

namespace uhh2 {
    class CMSSWContext;
    class NtupleWriterModule;
    class NtupleWriterTopJets;
}

class NtupleWriter : public edm::EDFilter {
   public:
      explicit NtupleWriter(const edm::ParameterSet&);
      ~NtupleWriter();

      static void fillDescriptions(edm::ConfigurationDescriptions& descriptions);

   private:
      //virtual void analyze(const edm::Event&, const edm::EventSetup&) override;
      virtual bool filter(edm::Event&, const edm::EventSetup&) override;
      virtual void endJob() override;

      virtual void beginRun(edm::Run const&, edm::EventSetup const&) override;
      
      // fill gen particles from a gen topjet
      void fill_genparticles_jet(const reco::GenJet& reco_genjet, GenJetWithParts& genjet);

      // ----------member data ---------------------------
      TFile *outfile;
      TTree *tr;
      std::string fileName;

      bool doGenJets;
      bool doGenJetsWithParts;
      bool doGenTopJets;
      bool doMET;
      bool doPhotons;
      bool doGenInfo;
      bool doAllGenParticles;
      bool doPV;
      bool doTrigger;
      bool doTagInfos;
      bool runOnMiniAOD;
      bool doRho;
      bool doPuppi;

      // in order of initialization:
      std::unique_ptr<uhh2::GenericEventStructure> ges;
      std::unique_ptr<uhh2::CMSSWContext> context;
      std::vector<std::unique_ptr<uhh2::NtupleWriterModule>> writer_modules;
      std::vector<std::unique_ptr<uhh2::NtupleWriterTopJets>> topjet_modules;
      std::unique_ptr<uhh2::Event> event;
      std::unique_ptr<uhh2::AnalysisModule> module;

      edm::EDGetToken rho_token;
      
      std::vector<PFParticle> pfparticles, puppiparticles;

      std::vector<edm::EDGetToken> genjet_tokens;
      std::vector<std::vector<Particle>> genjets;
      double genjet_ptmin;
      double genjet_etamax;

      std::vector<std::string> pf_constituents_sources;

      std::vector<edm::EDGetToken> gentopjet_tokens;
      std::vector<std::vector<GenTopJet>> gentopjets;
      double gentopjet_ptmin;
      double gentopjet_etamax;

      std::vector<edm::EDGetToken> genjetwithparts_tokens;
      std::vector<std::vector<GenJetWithParts>> genjetwithparts;
      double genjetwithparts_ptmin;
      double genjetwithparts_etamax;

      std::vector<edm::EDGetToken> photon_tokens;
      std::vector<std::vector<Photon>> phs;

      std::vector<edm::EDGetToken> met_tokens;
      std::vector<MET> met;

      std::vector<edm::EDGetToken> pv_tokens;
      std::vector<std::vector<PrimaryVertex>> pvs;

      edm::InputTag genparticle_source;
      edm::InputTag stablegenparticle_source;   
      
      edm::InputTag SVComputer_;
      std::vector<std::string> trigger_prefixes;
      std::vector<std::string> triggerNames_outbranch;

      bool newrun, setup_output_branches_done;

      edm::EDGetTokenT<edm::TriggerResults> triggerBits_;
};


#endif
