#pragma once

#include "UHH2/core/include/AnalysisModule.h"
#include "UHH2/common/include/ObjectIdUtils.h"
#include "UHH2/common/include/Utils.h"
#include "UHH2/JetMETObjects/interface/JetCorrectionUncertainty.h"

class FactorizedJetCorrector;

/// namespace to define some useful filename constants to be used for jet energy corrections
namespace JERFiles {
    extern const std::vector<std::string> Summer15_50ns_L123_AK4PFchs_MC;
    extern const std::vector<std::string> Summer15_50ns_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer15_50ns_L123_AK8PFchs_MC;
    extern const std::vector<std::string> Summer15_50ns_L123_AK8PFchs_DATA;
    extern const std::vector<std::string> Summer15_50ns_L123_AK4PFPuppi_MC;
    extern const std::vector<std::string> Summer15_50ns_L123_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Summer15_50ns_L123_AK8PFPuppi_MC;
    extern const std::vector<std::string> Summer15_50ns_L123_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Summer15_25nsV2_MC;
    extern const std::vector<std::string> Summer15_25ns_L123_AK4PFchs_MC;
    extern const std::vector<std::string> Summer15_25ns_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer15_25ns_L123_AK8PFchs_MC;
    extern const std::vector<std::string> Summer15_25ns_L123_AK8PFchs_DATA;
    extern const std::vector<std::string> Summer15_25ns_L23_AK8PFchs_MC;
    extern const std::vector<std::string> Summer15_25ns_L23_AK8PFchs_DATA;
    extern const std::vector<std::string> Summer15_25ns_L123_AK4PFPuppi_MC;
    extern const std::vector<std::string> Summer15_25ns_L123_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Summer15_25ns_L123_AK8PFPuppi_MC;
    extern const std::vector<std::string> Summer15_25ns_L123_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Fall15_25ns_L123_AK4PFchs_MC;
    extern const std::vector<std::string> Fall15_25ns_L123_AK8PFchs_MC;
    extern const std::vector<std::string> Fall15_25ns_L23_AK8PFchs_MC;
    extern const std::vector<std::string> Fall15_25ns_L123_AK4PFPuppi_MC;
    extern const std::vector<std::string> Fall15_25ns_L123_AK8PFPuppi_MC;
    extern const std::vector<std::string> Fall15_25ns_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Fall15_25ns_L123_AK8PFchs_DATA;
    extern const std::vector<std::string> Fall15_25ns_L23_AK8PFchs_DATA;
    extern const std::vector<std::string> Fall15_25ns_L123_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Fall15_25ns_L123_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_L123_AK4PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_L23_AK4PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_L123_AK8PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_L23_AK8PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_L123_AK4PFPuppi_MC;
    extern const std::vector<std::string> Spring16_25ns_L23_AK4PFPuppi_MC;
    extern const std::vector<std::string> Spring16_25ns_L123_AK8PFPuppi_MC;
    extern const std::vector<std::string> Spring16_25ns_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_L23_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_L123_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_L123_noRes_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_L23_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_L123_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_L23_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_L123_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_L123_noRes_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_L23_noRes_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_L23_noRes_AK4PFchs_DATA;

    //for V8 closure test
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L123_AK4PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L123_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L123_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L123_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L123_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L123_AK8PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L23_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L23_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L23_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L23_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L23_AK4PFPuppi_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L23_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L23_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L23_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L23_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L23_AK8PFPuppi_MC;
                                          

    //for new L2 res based on v8
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L23_noRes_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L23_noRes_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L23_noRes_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L23_noRes_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L123_noRes_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L123_noRes_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L123_noRes_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L123_noRes_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L23_noRes_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L23_noRes_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L23_noRes_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L23_noRes_AK8PFPuppi_DATA;

    //V8 L1RC correction on DATA and MC
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L1RC_AK4PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L1RC_AK4PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L1RC_AK4PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L1RC_AK4PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L1RC_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L1RC_AK8PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L1RC_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L1RC_AK8PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L1RC_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L1RC_AK8PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L1RC_AK8PFchs_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L1RC_AK8PFchs_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L1RC_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L1RC_AK4PFPuppi_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L1RC_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L1RC_AK4PFPuppi_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L1RC_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L1RC_AK4PFPuppi_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L1RC_AK4PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L1RC_AK4PFPuppi_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L1RC_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_BCD_L1RC_AK8PFPuppi_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L1RC_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_E_L1RC_AK8PFPuppi_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L1RC_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_F_L1RC_AK8PFPuppi_MC;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L1RC_AK8PFPuppi_DATA;
    extern const std::vector<std::string> Spring16_25ns_V8_G_L1RC_AK8PFPuppi_MC;

    //For Moriond17
    extern const std::vector<std::string> Summer16_23Sep2016_V0_BCD_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V0_E_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V0_F_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V0_GH_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V0_L123_AK4PFchs_MC;
    extern const std::vector<std::string> Summer16_23Sep2016_V0_BCD_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V0_E_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V0_F_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V0_GH_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V0_L1RC_AK4PFchs_MC;   

    //Summer16_23Sep2016_V2 --> For derivation of V3
    extern const std::vector<std::string> Summer16_23Sep2016_V2_BCD_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V2_EF_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V2_G_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V2_H_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V2_L123_AK4PFchs_MC;
    extern const std::vector<std::string> Summer16_23Sep2016_V2_BCD_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V2_EF_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V2_G_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V2_H_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V2_L1RC_AK4PFchs_MC;   

    //Derivation of ReReco Data + Spring16 MC
    extern const std::vector<std::string> Spring16_23Sep2016_V1_BCD_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V1_E_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V1_F_L123_noRes_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V1_GH_L123_noRes_AK4PFchs_DATA;     

    //Closure test ReReco Data + Spring16 MC V1
    extern const std::vector<std::string> Spring16_23Sep2016_V1_BCD_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V1_E_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V1_F_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V1_GH_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V1_L123_AK4PFchs_MC;
    extern const std::vector<std::string> Spring16_23Sep2016_V1_BCD_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V1_E_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V1_F_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V1_GH_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V1_L1RC_AK4PFchs_MC;  

    //Closure test Spring16_23Sep2016_V2
    extern const std::vector<std::string> Spring16_23Sep2016_V2_BCD_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V2_EF_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V2_G_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V2_H_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V2_L123_AK4PFchs_MC;
    extern const std::vector<std::string> Spring16_23Sep2016_V2_BCD_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V2_EF_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V2_G_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V2_H_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Spring16_23Sep2016_V2_L1RC_AK4PFchs_MC;           

    //Closure test Summer16_23Sep2016_V2
    extern const std::vector<std::string> Summer16_23Sep2016_V2_BCD_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V2_EF_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V2_G_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V2_H_L123_AK4PFchs_DATA;

    //Closure test Summer16_23Sep2016_V3
    extern const std::vector<std::string> Summer16_23Sep2016_V3_BCD_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V3_EF_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V3_G_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V3_H_L123_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V3_L123_AK4PFchs_MC;
    extern const std::vector<std::string> Summer16_23Sep2016_V3_BCD_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V3_EF_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V3_G_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V3_H_L1RC_AK4PFchs_DATA;
    extern const std::vector<std::string> Summer16_23Sep2016_V3_L1RC_AK4PFchs_MC; 


}

/** \brief (Re-)Correct jets according to the corrections in the passed txt files
 * 
 * txt files are available in JetMETObjects/data/; see README there for instructions how to produce
 * updated files.
 * 
 * For some standard jet energy corrections, you can use filenames defined in the JERFiles namespace.
 *
 * Options parsed from the given Context:
 *  - "jecsmear_direction": either "nominal", "up", or "down" to apply nominal, +1sigma, -1sigma smearing resp.
 * 
 * Please note that the JetCorrector does not sort the (re-)corrected jets by pt;
 * you might want to do that before running algorithms / plotting which assume that.
 */
class JetCorrector: public uhh2::AnalysisModule {
public:
  explicit JetCorrector(uhh2::Context & ctx, const std::vector<std::string> & filenames, const std::vector<std::string> & filenames_L1RC = {});
    
    virtual bool process(uhh2::Event & event) override;
    virtual bool correct_met(uhh2::Event & event);
    
    virtual ~JetCorrector();
    
private:
    std::unique_ptr<FactorizedJetCorrector> corrector;
    std::unique_ptr<FactorizedJetCorrector> corrector_L1RC;
    
    JetCorrectionUncertainty* jec_uncertainty;
    int direction = 0; // -1 = down, +1 = up, 0 = nominal
    bool propagate_to_met = false;
    bool used_ak4puppi = false;
    bool used_ak4chs = false;
    bool metprop_possible_ak8chs = false;
    bool metprop_possible_ak8puppi = false;
    bool used_slimmedmet = false;
    bool used_puppimet = false;
    bool used_chsmet = false;
    bool do_metL1RC = false;
};

class TopJetCorrector: public uhh2::AnalysisModule {
public:
    explicit TopJetCorrector(uhh2::Context & ctx, const std::vector<std::string> & filenames);
    
    virtual bool process(uhh2::Event & event) override;
    
    virtual ~TopJetCorrector();
    
private:
    std::unique_ptr<FactorizedJetCorrector> corrector;

    JetCorrectionUncertainty* jec_uncertainty;
    int direction = 0; // -1 = down, +1 = up, 0 = nominal
};

class SubJetCorrector: public uhh2::AnalysisModule {
public:
    explicit SubJetCorrector(uhh2::Context & ctx, const std::vector<std::string> & filenames);
    
    virtual bool process(uhh2::Event & event) override;
    
    virtual ~SubJetCorrector();
    
private:
    std::unique_ptr<FactorizedJetCorrector> corrector;
    JetCorrectionUncertainty* jec_uncertainty;
    int direction = 0; // -1 = down, +1 = up, 0 = nominal
};

class GenericJetCorrector: public uhh2::AnalysisModule {
public:
    explicit GenericJetCorrector(uhh2::Context & ctx, const std::vector<std::string> & filenames, const std::string & collectionname);
    
    virtual bool process(uhh2::Event & event) override;
    
    virtual ~GenericJetCorrector();
    
private:
    std::unique_ptr<FactorizedJetCorrector> corrector;
    uhh2::Event::Handle<std::vector<Jet> > h_jets;
    JetCorrectionUncertainty* jec_uncertainty;
    int direction = 0; // -1 = down, +1 = up, 0 = nominal
};

class GenericTopJetCorrector: public uhh2::AnalysisModule {
public:
    explicit GenericTopJetCorrector(uhh2::Context & ctx, const std::vector<std::string> & filenames, const std::string & collectionname);
    
    virtual bool process(uhh2::Event & event) override;
    
    virtual ~GenericTopJetCorrector();
    
private:
    std::unique_ptr<FactorizedJetCorrector> corrector;
    uhh2::Event::Handle<std::vector<TopJet> > h_jets;
    JetCorrectionUncertainty* jec_uncertainty;
    int direction = 0; // -1 = down, +1 = up, 0 = nominal
};

class GenericSubJetCorrector: public uhh2::AnalysisModule {
public:
    explicit GenericSubJetCorrector(uhh2::Context & ctx, const std::vector<std::string> & filenames, const std::string & collectionname);
    
    virtual bool process(uhh2::Event & event) override;
    
    virtual ~GenericSubJetCorrector();
    
private:
    std::unique_ptr<FactorizedJetCorrector> corrector;
    uhh2::Event::Handle<std::vector<TopJet> > h_jets;
    JetCorrectionUncertainty* jec_uncertainty;
    int direction = 0; // -1 = down, +1 = up, 0 = nominal
};

/** \brief Cross-clean lepton and jets by subtracting lepton four momenta from nearby jets
 * 
 * Leptons are subtracted from the jets' raw four-momentum if:
 *  - DR(jet, lepton) < drmax (default: 0.4) and
 *  - electron/muon multiplicity is greater than 0 and
 *  - electron energy / muon energy of jet is compatible with lepton to subtract
 * 
 * Only implemented for muons and electrons, not for taus. As default, all muons
 * and electrons are used. To not consider all electrons/muons either:
 *   - run an appropriate cleaning module before this one or
 *   - set an explicit id via the set_electron_id / set_muon_id.
 * 
 * Note that the cleaning works well if using a muon or electron id which is stricly a subset of the
 * particle-flow id, because only particle-flow muons/electrons are considered in the muon/electron
 * energy fraction stored in the jet which is used to decide whether or not to subtract it.
 * So if you use non-PF muons or non-PF electrons, you might need to re-write the
 * JetLeptonCleaner for that case.
 * 
 * Please note that the JetLeptonCleaner does not sort the (re-)corrected jets by pt;
 * you might want to do that before running algorithms / plotting which assume that.
 * 
 */
class JetLeptonCleaner: public uhh2::AnalysisModule {
public:
    // jec_filenames is teh same as for the JetCorrector.
    explicit JetLeptonCleaner(uhh2::Context & ctx, const std::vector<std::string> & jec_filenames);
    
    void set_muon_id(const MuonId & mu_id_){
        mu_id = mu_id_;
    }
    
    void set_electron_id(const ElectronId & ele_id_){
        ele_id = ele_id_;
    }
    
    void set_drmax(double drmax_){
        drmax = drmax_;
    }
    
    virtual bool process(uhh2::Event & event) override;
    
    virtual ~JetLeptonCleaner();
    
private:
    std::unique_ptr<FactorizedJetCorrector> corrector;
    MuonId mu_id;
    ElectronId ele_id;
    double drmax = 0.4;
    JetCorrectionUncertainty* jec_uncertainty;
    int direction = 0; // -1 = down, +1 = up, 0 = nominal
};



/** \brief JetLeptonCleaner using the matching of candidates' keys
 *
 * Can now run on TopJet Collection as well; the class will first check whether a Jet collection with
 * the given label name exists, if not, it will look for a TopJet collection with this name.
 *
 * Default is 'jets' so it will run over the standard Ak4 jet collection.
 *
 * DISCLAIMER: In case of Ak8 jets, this JetLeptonCleaner only runs over the fat jet itself, not
 * the subjets of the Ak8 jets! Whether this is necessary and has any effects on subjet-related
 * quantities might need to be tested in the future.
 */
class JetLeptonCleaner_by_KEYmatching: public uhh2::AnalysisModule {

 public:
  explicit JetLeptonCleaner_by_KEYmatching(uhh2::Context&, const std::vector<std::string>&, const std::string& jet_label="jets");
  virtual ~JetLeptonCleaner_by_KEYmatching();

  virtual bool process(uhh2::Event & event) override;
  bool do_cleaning(Jet & jet, uhh2::Event & event);

  void set_muon_id(const MuonId& muo_id_){ muo_id = muo_id_; }

  void set_electron_id(const ElectronId& ele_id_){ ele_id = ele_id_; }

 private:
  uhh2::Event::Handle<std::vector<Jet> > h_jets_;
  uhh2::Event::Handle<std::vector<TopJet> > h_topjets_;
  std::unique_ptr<FactorizedJetCorrector> corrector;
  MuonId     muo_id;
  ElectronId ele_id;
  JetCorrectionUncertainty* jec_uncertainty;
  int direction = 0; // -1 = down, +1 = up, 0 = nominal
};


//// ----- modules for Jet Energy Resolution data/MC corrections -----

namespace JERSmearing {

  typedef std::vector<std::array<float, 4> > SFtype1;

  extern const SFtype1 SF_13TeV_2015;
  extern const SFtype1 SF_13TeV_2016;
  extern const SFtype1 SF_13TeV_2016_full;

}

/** \brief Smear the jet four-momenta in MC to match the resolution in data
 *
 * The corrections applied correspond to the values listed here:
 * https://twiki.cern.ch/twiki/bin/viewauth/CMS/JetResolution
 * for 8TeV data (r36 from 2014-08-28) using the method to scale
 * the genjet pt - reco pt difference.
 *
 * Run this *after* the jet energy corrections.
 *
 * IMPORTANT: do NOT run the module twice, as then, the jets will be smeared twice, which
 * is too much.
 *
 * Options parsed from the given Context:
 *  - "jersmear_smear_met": if "true", propagate the jet resolution smearing to MET. Default is false.
 *  - "jersmear_direction": either "nominal", "up", or "down" to apply nominal, +1sigma, -1sigma smearing resp.
 * 
 * Please note that the JetResolutionSmearer does not sort the (re-)corrected jets by pt;
 * you might want to do that before running algorithms / plotting which assume that.
 */
class JetResolutionSmearer: public uhh2::AnalysisModule {
public:
    explicit JetResolutionSmearer(uhh2::Context & ctx, const JERSmearing::SFtype1& JER_sf=JERSmearing::SF_13TeV_2016);

    virtual bool process(uhh2::Event & event) override;

    virtual ~JetResolutionSmearer();
private:
    
    bool smear_met;
    int direction = 0; // -1 = down, +1 = up, 0 = nominal
    JERSmearing::SFtype1 JER_SFs_;
};

////

/** \brief generalization of JetResolutionSmearer (see the latter for additional info)
 *         to apply jet-energy-resolution smearing on non-default jet collections
 *
 *  options parsed from Context:
 *   - "jersmear_smear_met": if "true", propagate the jet resolution smearing to MET. Default is false.
 *   - "jersmear_direction": either "nominal", "up", or "down" to apply nominal, +1sigma, -1sigma smearing correction
 *
 */
class GenericJetResolutionSmearer : public uhh2::AnalysisModule {

 public:
  explicit GenericJetResolutionSmearer(uhh2::Context&, const std::string& recj="jets", const std::string& genj="genjets", const bool allow_met_smear=true,
                                       const JERSmearing::SFtype1& JER_sf=JERSmearing::SF_13TeV_2016);
  virtual ~GenericJetResolutionSmearer() {}

  virtual bool process(uhh2::Event&) override;

  template<typename RJ, typename GJ> void apply_JER_smearing(std::vector<RJ>&, const std::vector<GJ>&, LorentzVector&);

 private:
  uhh2::Event::Handle<std::vector<Jet> >       h_recjets_;
  uhh2::Event::Handle<std::vector<Particle> >  h_genjets_;
  uhh2::Event::Handle<std::vector<TopJet> >    h_rectopjets_;
  uhh2::Event::Handle<std::vector<GenTopJet> > h_gentopjets_;
  bool smear_met;
  int direction = 0; // -1 = down, +1 = up, 0 = nominal
  JERSmearing::SFtype1 JER_SFs_;
};

template<typename RJ, typename GJ>
void GenericJetResolutionSmearer::apply_JER_smearing(std::vector<RJ>& rec_jets, const std::vector<GJ>& gen_jets, LorentzVector& met){

  for(unsigned int i=0; i<rec_jets.size(); ++i){

    auto& jet = rec_jets.at(i);

    // find next genjet:
    auto closest_genjet = closestParticle(jet, gen_jets);
    // ignore unmatched jets (=no genjets at all or large DeltaR), or jets with very low genjet pt:
    if(closest_genjet == nullptr || uhh2::deltaR(*closest_genjet, jet) > 0.3) continue;
    const float genpt = closest_genjet->pt();
    if(genpt < 15.) continue;

    LorentzVector jet_v4 = jet.v4();
    LorentzVector jet_v4_raw = jet_v4 * jet.JEC_factor_raw();

    const float recopt = jet_v4.pt();
    const float abseta = fabs(jet_v4.eta());

    int ieta(-1);
    for(unsigned int idx=0; idx<JER_SFs_.size(); ++idx){

      const float min_eta = idx ? JER_SFs_.at(idx-1).at(0) : 0.;
      const float max_eta =       JER_SFs_.at(idx)  .at(0);

      if(min_eta <= abseta && abseta < max_eta){ ieta = idx; break;}
    }
    if(ieta < 0) {
      std::cout << "WARNING: JetResolutionSmearer: index for JER-smearing SF not found for jet with |eta| = " << abseta << std::endl;
      std::cout << "         no JER smearing is applied." << std::endl;
      continue;
    }

    float c;
    if     (direction ==  0) c = JER_SFs_.at(ieta).at(1);
    else if(direction ==  1) c = JER_SFs_.at(ieta).at(2);
    else if(direction == -1) c = JER_SFs_.at(ieta).at(3);
    else throw std::runtime_error("GenericJetResolutionSmearer::process -- invalid value for JER 'direction' (must be 0, +1 or -1): "+std::to_string(direction));

    const float new_pt = std::max(0.0f, genpt + c * (recopt - genpt));
    jet_v4 *= new_pt / recopt;

    float factor_raw = jet.JEC_factor_raw();
    factor_raw *= recopt/new_pt;

    jet.set_JEC_factor_raw(factor_raw);
    jet.set_v4(jet_v4);

    // propagate JER shifts to MET by using same factor, but for raw jet p4:
    if(smear_met){

      met += jet_v4_raw;
      jet_v4_raw *= new_pt / recopt;
      met -= jet_v4_raw;
    }
  }

  return;
}

//// -----------------------------------------------------------------
