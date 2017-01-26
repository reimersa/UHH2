#include "UHH2/common/include/JetCorrections.h"
#include "UHH2/common/include/Utils.h"
#include "UHH2/core/include/Utils.h"

#include "UHH2/JetMETObjects/interface/FactorizedJetCorrector.h"
#include "UHH2/JetMETObjects/interface/JetCorrectorParameters.h"

#include <string>

using namespace std;
using namespace uhh2;

//see https://twiki.cern.ch/twiki/bin/view/CMSPublic/WorkBookJetEnergyCorrections#GetTxtFiles how to get the txt files with jet energy corrections from the database

// Summer15_50ns
const std::vector<std::string> JERFiles::Summer15_50ns_L123_AK4PFchs_MC = {
  "JetMETObjects/data/Summer15_50nsV5_MC_L1FastJet_AK4PFchs.txt",
  "JetMETObjects/data/Summer15_50nsV5_MC_L2Relative_AK4PFchs.txt",
  "JetMETObjects/data/Summer15_50nsV5_MC_L3Absolute_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer15_50ns_L123_AK4PFchs_DATA = {
  "JetMETObjects/data/Summer15_50nsV5_DATA_L1FastJet_AK4PFchs.txt",
  "JetMETObjects/data/Summer15_50nsV5_DATA_L2Relative_AK4PFchs.txt",
  "JetMETObjects/data/Summer15_50nsV5_DATA_L3Absolute_AK4PFchs.txt",
  "JetMETObjects/data/Summer15_50nsV5_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer15_50ns_L123_AK8PFchs_MC = {
  "JetMETObjects/data/Summer15_50nsV5_MC_L1FastJet_AK8PFchs.txt",
  "JetMETObjects/data/Summer15_50nsV5_MC_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Summer15_50nsV5_MC_L3Absolute_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer15_50ns_L123_AK8PFchs_DATA = {
  "JetMETObjects/data/Summer15_50nsV5_DATA_L1FastJet_AK8PFchs.txt",
  "JetMETObjects/data/Summer15_50nsV5_DATA_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Summer15_50nsV5_DATA_L3Absolute_AK8PFchs.txt",
  "JetMETObjects/data/Summer15_50nsV5_DATA_L2L3Residual_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer15_50ns_L123_AK4PFPuppi_MC = {
  "JetMETObjects/data/Summer15_50nsV5_MC_L1FastJet_AK4PFPuppi.txt",
  "JetMETObjects/data/Summer15_50nsV5_MC_L2Relative_AK4PFPuppi.txt",
  "JetMETObjects/data/Summer15_50nsV5_MC_L3Absolute_AK4PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Summer15_50ns_L123_AK4PFPuppi_DATA = {
  "JetMETObjects/data/Summer15_50nsV5_DATA_L1FastJet_AK4PFPuppi.txt",
  "JetMETObjects/data/Summer15_50nsV5_DATA_L2Relative_AK4PFPuppi.txt",
  "JetMETObjects/data/Summer15_50nsV5_DATA_L3Absolute_AK4PFPuppi.txt",
  "JetMETObjects/data/Summer15_50nsV5_DATA_L2L3Residual_AK4PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Summer15_50ns_L123_AK8PFPuppi_MC = {
  "JetMETObjects/data/Summer15_50nsV5_MC_L1FastJet_AK8PFPuppi.txt",
  "JetMETObjects/data/Summer15_50nsV5_MC_L2Relative_AK8PFPuppi.txt",
  "JetMETObjects/data/Summer15_50nsV5_MC_L3Absolute_AK8PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Summer15_50ns_L123_AK8PFPuppi_DATA = {
  "JetMETObjects/data/Summer15_50nsV5_DATA_L1FastJet_AK8PFPuppi.txt",
  "JetMETObjects/data/Summer15_50nsV5_DATA_L2Relative_AK8PFPuppi.txt",
  "JetMETObjects/data/Summer15_50nsV5_DATA_L3Absolute_AK8PFPuppi.txt",
  "JetMETObjects/data/Summer15_50nsV5_DATA_L2L3Residual_AK8PFPuppi.txt",
};

// Summer15_25ns
const std::vector<std::string> JERFiles::Summer15_25ns_L123_AK4PFchs_MC = {
  "JetMETObjects/data/Summer15_25nsV6_MC_L1FastJet_AK4PFchs.txt",
  "JetMETObjects/data/Summer15_25nsV6_MC_L2Relative_AK4PFchs.txt",
  "JetMETObjects/data/Summer15_25nsV6_MC_L3Absolute_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer15_25ns_L123_AK4PFchs_DATA = {
  "JetMETObjects/data/Summer15_25nsV6_DATA_L1FastJet_AK4PFchs.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L2Relative_AK4PFchs.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L3Absolute_AK4PFchs.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer15_25ns_L123_AK8PFchs_MC = {
  "JetMETObjects/data/Summer15_25nsV6_MC_L1FastJet_AK8PFchs.txt",
  "JetMETObjects/data/Summer15_25nsV6_MC_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Summer15_25nsV6_MC_L3Absolute_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer15_25ns_L123_AK8PFchs_DATA = {
  "JetMETObjects/data/Summer15_25nsV6_DATA_L1FastJet_AK8PFchs.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L3Absolute_AK8PFchs.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L2L3Residual_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer15_25ns_L23_AK8PFchs_MC = {
  "JetMETObjects/data/Summer15_25nsV6_MC_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Summer15_25nsV6_MC_L3Absolute_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer15_25ns_L23_AK8PFchs_DATA = {
  "JetMETObjects/data/Summer15_25nsV6_DATA_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L3Absolute_AK8PFchs.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L2L3Residual_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer15_25ns_L123_AK4PFPuppi_MC = {
  "JetMETObjects/data/Summer15_25nsV6_MC_L1FastJet_AK4PFPuppi.txt",
  "JetMETObjects/data/Summer15_25nsV6_MC_L2Relative_AK4PFPuppi.txt",
  "JetMETObjects/data/Summer15_25nsV6_MC_L3Absolute_AK4PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Summer15_25ns_L123_AK4PFPuppi_DATA = {
  "JetMETObjects/data/Summer15_25nsV6_DATA_L1FastJet_AK4PFPuppi.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L2Relative_AK4PFPuppi.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L3Absolute_AK4PFPuppi.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L2L3Residual_AK4PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Summer15_25ns_L123_AK8PFPuppi_MC = {
  "JetMETObjects/data/Summer15_25nsV6_MC_L1FastJet_AK8PFPuppi.txt",
  "JetMETObjects/data/Summer15_25nsV6_MC_L2Relative_AK8PFPuppi.txt",
  "JetMETObjects/data/Summer15_25nsV6_MC_L3Absolute_AK8PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Summer15_25ns_L123_AK8PFPuppi_DATA = {
  "JetMETObjects/data/Summer15_25nsV6_DATA_L1FastJet_AK8PFPuppi.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L2Relative_AK8PFPuppi.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L3Absolute_AK8PFPuppi.txt",
  "JetMETObjects/data/Summer15_25nsV6_DATA_L2L3Residual_AK8PFPuppi.txt",
};

//Fall15_25nsV2
const std::vector<std::string> JERFiles::Fall15_25ns_L123_AK4PFchs_MC = {
  "JetMETObjects/data/Fall15_25nsV2_MC_L1FastJet_AK4PFchs.txt",
  "JetMETObjects/data/Fall15_25nsV2_MC_L2Relative_AK4PFchs.txt",
  "JetMETObjects/data/Fall15_25nsV2_MC_L3Absolute_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Fall15_25ns_L123_AK8PFchs_MC = {
  "JetMETObjects/data/Fall15_25nsV2_MC_L1FastJet_AK8PFchs.txt",
  "JetMETObjects/data/Fall15_25nsV2_MC_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Fall15_25nsV2_MC_L3Absolute_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Fall15_25ns_L23_AK8PFchs_MC = {
  "JetMETObjects/data/Fall15_25nsV2_MC_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Fall15_25nsV2_MC_L3Absolute_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Fall15_25ns_L123_AK4PFPuppi_MC = {
  "JetMETObjects/data/Fall15_25nsV2_MC_L1FastJet_AK4PFPuppi.txt",
  "JetMETObjects/data/Fall15_25nsV2_MC_L2Relative_AK4PFPuppi.txt",
  "JetMETObjects/data/Fall15_25nsV2_MC_L3Absolute_AK4PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Fall15_25ns_L123_AK8PFPuppi_MC = {
  "JetMETObjects/data/Fall15_25nsV2_MC_L1FastJet_AK8PFPuppi.txt",
  "JetMETObjects/data/Fall15_25nsV2_MC_L2Relative_AK8PFPuppi.txt",
  "JetMETObjects/data/Fall15_25nsV2_MC_L3Absolute_AK8PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Fall15_25ns_L123_AK4PFchs_DATA = {
  "JetMETObjects/data/Fall15_25nsV2_DATA_L1FastJet_AK4PFchs.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L2Relative_AK4PFchs.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L3Absolute_AK4PFchs.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Fall15_25ns_L123_AK8PFchs_DATA = {
  "JetMETObjects/data/Fall15_25nsV2_DATA_L1FastJet_AK8PFchs.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L3Absolute_AK8PFchs.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L2L3Residual_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Fall15_25ns_L23_AK8PFchs_DATA = {
  "JetMETObjects/data/Fall15_25nsV2_DATA_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L3Absolute_AK8PFchs.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L2L3Residual_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Fall15_25ns_L123_AK4PFPuppi_DATA = {
  "JetMETObjects/data/Fall15_25nsV2_DATA_L1FastJet_AK4PFPuppi.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L2Relative_AK4PFPuppi.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L3Absolute_AK4PFPuppi.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L2L3Residual_AK4PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Fall15_25ns_L123_AK8PFPuppi_DATA = {
  "JetMETObjects/data/Fall15_25nsV2_DATA_L1FastJet_AK8PFPuppi.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L2Relative_AK8PFPuppi.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L3Absolute_AK8PFPuppi.txt",
  "JetMETObjects/data/Fall15_25nsV2_DATA_L2L3Residual_AK8PFPuppi.txt",
};


//Spring16_25nsV6
const std::vector<std::string> JERFiles::Spring16_25ns_L123_AK4PFchs_MC = {
  "JetMETObjects/data/Spring16_25nsV6_MC_L1FastJet_AK4PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_MC_L2Relative_AK4PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_MC_L3Absolute_AK4PFchs.txt"
  };

const std::vector<std::string> JERFiles::Spring16_25ns_L23_AK4PFchs_MC = {                                                                       
  "JetMETObjects/data/Spring16_25nsV6_MC_L2Relative_AK4PFchs.txt",                                                                               
  "JetMETObjects/data/Spring16_25nsV6_MC_L3Absolute_AK4PFchs.txt"
};  


/* //TEST MET collections
const std::vector<std::string> JERFiles::Spring16_25ns_L123_AK4PFchs_MC = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2L3Residual_AK4PF_MISCORR.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2L3Residual_AK4PF_MISCORR2.txt"
  };
*/



const std::vector<std::string> JERFiles::Spring16_25ns_L123_AK8PFchs_MC = {
  "JetMETObjects/data/Spring16_25nsV6_MC_L1FastJet_AK8PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_MC_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_MC_L3Absolute_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_L23_AK8PFchs_MC = {
  "JetMETObjects/data/Spring16_25nsV6_MC_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_MC_L3Absolute_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_L123_AK4PFPuppi_MC = {
  "JetMETObjects/data/Spring16_25nsV6_MC_L1FastJet_AK4PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_MC_L2Relative_AK4PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_MC_L3Absolute_AK4PFPuppi.txt"
};
const std::vector<std::string> JERFiles::Spring16_25ns_L23_AK4PFPuppi_MC = {
  "JetMETObjects/data/Spring16_25nsV6_MC_L2Relative_AK4PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_MC_L3Absolute_AK4PFPuppi.txt"
};

//TEST MET Collections
/*const std::vector<std::string> JERFiles::Spring16_25ns_L123_AK4PFPuppi_MC = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2L3Residual_AK4PF_MISCORR.txt"
  };*/

/* const std::vector<std::string> JERFiles::Spring16_25ns_L123_AK4PFPuppi_MC = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2L3Residual_AK4PF_MISCORR.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2L3Residual_AK4PF_MISCORR2.txt"
  }; */

const std::vector<std::string> JERFiles::Spring16_25ns_L123_AK8PFPuppi_MC = {
  "JetMETObjects/data/Spring16_25nsV6_MC_L1FastJet_AK8PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_MC_L2Relative_AK8PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_MC_L3Absolute_AK8PFPuppi.txt"
};


const std::vector<std::string> JERFiles::Spring16_25ns_L123_noRes_AK4PFchs_DATA = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L1FastJet_AK4PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2Relative_AK4PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L3Absolute_AK4PFchs.txt"
};


const std::vector<std::string> JERFiles::Spring16_25ns_L123_AK4PFchs_DATA = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L1FastJet_AK4PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2Relative_AK4PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L3Absolute_AK4PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_L23_AK4PFchs_DATA = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2Relative_AK4PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L3Absolute_AK4PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2L3Residual_AK4PFchs.txt"                                                                            
};     

const std::vector<std::string> JERFiles::Spring16_25ns_L123_AK8PFchs_DATA = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L1FastJet_AK8PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L3Absolute_AK8PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2L3Residual_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_L123_noRes_AK8PFchs_DATA = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L1FastJet_AK8PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L3Absolute_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_L23_AK8PFchs_DATA = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2Relative_AK8PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L3Absolute_AK8PFchs.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2L3Residual_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_L123_AK4PFPuppi_DATA = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L1FastJet_AK4PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2Relative_AK4PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L3Absolute_AK4PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2L3Residual_AK4PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_L23_AK4PFPuppi_DATA = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2Relative_AK4PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L3Absolute_AK4PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2L3Residual_AK4PFPuppi.txt",
};


const std::vector<std::string> JERFiles::Spring16_25ns_L23_noRes_AK4PFPuppi_DATA = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2Relative_AK4PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L3Absolute_AK4PFPuppi.txt"
};      

const std::vector<std::string> JERFiles::Spring16_25ns_L123_noRes_AK4PFPuppi_DATA = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L1FastJet_AK4PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2Relative_AK4PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L3Absolute_AK4PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_L23_noRes_AK4PFchs_DATA = {                                                             
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2Relative_AK4PFchs.txt", 
  "JetMETObjects/data/Spring16_25nsV6_DATA_L3Absolute_AK4PFchs.txt"
};    

const std::vector<std::string> JERFiles::Spring16_25ns_L123_AK8PFPuppi_DATA = {
  "JetMETObjects/data/Spring16_25nsV6_DATA_L1FastJet_AK8PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2Relative_AK8PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L3Absolute_AK8PFPuppi.txt",
  "JetMETObjects/data/Spring16_25nsV6_DATA_L2L3Residual_AK8PFPuppi.txt",
};


/* ++++++++++ For Closure test of V8 JEC +++++++++++ */
const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L123_AK4PFchs_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L3Absolute_AK4PFchs.txt",
};


const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L123_AK8PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L1FastJet_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L2Relative_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L3Absolute_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L2L3Residual_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L123_AK8PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L1FastJet_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L2Relative_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L3Absolute_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L2L3Residual_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L123_AK8PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L1FastJet_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L2Relative_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L3Absolute_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L2L3Residual_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L123_AK8PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L1FastJet_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L2Relative_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L3Absolute_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L2L3Residual_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L123_AK8PFchs_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L1FastJet_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L2Relative_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L3Absolute_AK8PFchs.txt",
};


const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L23_AK4PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L2Relative_AK4PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L3Absolute_AK4PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L2L3Residual_AK4PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L23_AK4PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L2Relative_AK4PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L3Absolute_AK4PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L2L3Residual_AK4PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L23_AK4PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L2Relative_AK4PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L3Absolute_AK4PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L2L3Residual_AK4PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L23_AK4PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L2Relative_AK4PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L3Absolute_AK4PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L2L3Residual_AK4PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L23_AK4PFPuppi_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L2Relative_AK4PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L3Absolute_AK4PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L23_AK8PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L2Relative_AK8PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L3Absolute_AK8PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L2L3Residual_AK8PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L23_AK8PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L2Relative_AK8PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L3Absolute_AK8PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L2L3Residual_AK8PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L23_AK8PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L2Relative_AK8PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L3Absolute_AK8PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L2L3Residual_AK8PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L23_AK8PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L2Relative_AK8PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L3Absolute_AK8PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L2L3Residual_AK8PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L23_AK8PFPuppi_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L2Relative_AK8PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L3Absolute_AK8PFPuppi.txt",
};


/* ++++++++++++++++++++++++++++ For derivation of new Residuals based on V8, MC taken from above  +++++++++++++++++++++++++++++++++++++++++++ */
const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L23_noRes_AK4PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8BCD_DATA_L2Relative_AK4PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8BCD_DATA_L3Absolute_AK4PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L23_noRes_AK4PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8E_DATA_L2Relative_AK4PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8E_DATA_L3Absolute_AK4PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L23_noRes_AK4PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8F_DATA_L2Relative_AK4PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8F_DATA_L3Absolute_AK4PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L23_noRes_AK4PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L2Relative_AK4PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L3Absolute_AK4PFPuppi.txt",
};


const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L123_noRes_AK8PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L1FastJet_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L2Relative_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L3Absolute_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L123_noRes_AK8PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L1FastJet_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L2Relative_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L3Absolute_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L123_noRes_AK8PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L1FastJet_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L2Relative_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L3Absolute_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L123_noRes_AK8PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L1FastJet_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L2Relative_AK8PFchs.txt",
  "JECDatabase/textFiles/Spring16_25nsV8_DATA/Spring16_25nsV8_DATA_L3Absolute_AK8PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L23_noRes_AK8PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8BCD_DATA_L2Relative_AK8PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8BCD_DATA_L3Absolute_AK8PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L23_noRes_AK8PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8E_DATA_L2Relative_AK8PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8E_DATA_L3Absolute_AK8PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L23_noRes_AK8PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8F_DATA_L2Relative_AK8PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8F_DATA_L3Absolute_AK8PFPuppi.txt",
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L23_noRes_AK8PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L2Relative_AK8PFPuppi.txt",
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L3Absolute_AK8PFPuppi.txt",
};


/* +++++++++++++++++++++++ L1RC correction on DATA and MC RunG ++++++++++++++++++++++++++++++ */

const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L1RC_AK4PFchs_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_MC/Spring16_25nsV8BCD_MC_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L1RC_AK4PFchs_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8E_MC/Spring16_25nsV8E_MC_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L1RC_AK4PFchs_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8F_MC/Spring16_25nsV8F_MC_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L1RC_AK4PFchs_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L1RC_AK8PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L1RC_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L1RC_AK8PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L1RC_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L1RC_AK8PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L1RC_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L1RC_AK8PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L1RC_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L1RC_AK8PFchs_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_MC/Spring16_25nsV8BCD_MC_L1RC_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L1RC_AK8PFchs_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8E_MC/Spring16_25nsV8E_MC_L1RC_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L1RC_AK8PFchs_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8F_MC/Spring16_25nsV8F_MC_L1RC_AK8PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L1RC_AK8PFchs_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L1RC_AK8PFchs.txt"
};


const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L1RC_AK4PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L1RC_AK4PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L1RC_AK4PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L1RC_AK4PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L1RC_AK4PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L1RC_AK4PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L1RC_AK4PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L1RC_AK4PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L1RC_AK4PFPuppi_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_MC/Spring16_25nsV8BCD_MC_L1RC_AK4PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L1RC_AK4PFPuppi_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8E_MC/Spring16_25nsV8E_MC_L1RC_AK4PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L1RC_AK4PFPuppi_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8F_MC/Spring16_25nsV8F_MC_L1RC_AK4PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L1RC_AK4PFPuppi_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L1RC_AK4PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L1RC_AK8PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_DATA/Spring16_25nsV8BCD_DATA_L1RC_AK8PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L1RC_AK8PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8E_DATA/Spring16_25nsV8E_DATA_L1RC_AK8PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L1RC_AK8PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8F_DATA/Spring16_25nsV8F_DATA_L1RC_AK8PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L1RC_AK8PFPuppi_DATA = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_DATA/Spring16_25nsV8p2_DATA_L1RC_AK8PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_BCD_L1RC_AK8PFPuppi_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8BCD_MC/Spring16_25nsV8BCD_MC_L1RC_AK8PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_E_L1RC_AK8PFPuppi_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8E_MC/Spring16_25nsV8E_MC_L1RC_AK8PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_F_L1RC_AK8PFPuppi_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8F_MC/Spring16_25nsV8F_MC_L1RC_AK8PFPuppi.txt"
};

const std::vector<std::string> JERFiles::Spring16_25ns_V8_G_L1RC_AK8PFPuppi_MC = {
  "JECDatabase/textFiles/Spring16_25nsV8p2_MC/Spring16_25nsV8p2_MC_L1RC_AK8PFPuppi.txt"
};

/* ++++++++++++++ Summer16_23Sep2016_V2_noRes +++++++++++++++ */

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_BCD_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV2_DATA/Summer16_23Sep2016BCDV2_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV2_DATA/Summer16_23Sep2016BCDV2_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV2_DATA/Summer16_23Sep2016BCDV2_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_EF_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016EFV2_DATA/Summer16_23Sep2016EFV2_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016EFV2_DATA/Summer16_23Sep2016EFV2_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016EFV2_DATA/Summer16_23Sep2016EFV2_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_G_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016GV2_DATA/Summer16_23Sep2016GV2_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016GV2_DATA/Summer16_23Sep2016GV2_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016GV2_DATA/Summer16_23Sep2016GV2_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_H_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016HV2_DATA/Summer16_23Sep2016HV2_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016HV2_DATA/Summer16_23Sep2016HV2_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016HV2_DATA/Summer16_23Sep2016HV2_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_L123_AK4PFchs_MC = {
  "JECDatabase/textFiles/Summer16_23Sep2016V2_MC/Summer16_23Sep2016V2_MC_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016V2_MC/Summer16_23Sep2016V2_MC_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016V2_MC/Summer16_23Sep2016V2_MC_L3Absolute_AK4PFchs.txt",
};



const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_BCD_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV2_DATA/Summer16_23Sep2016BCDV2_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_EF_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016EFV2_DATA/Summer16_23Sep2016EFV2_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_G_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016GV2_DATA/Summer16_23Sep2016GV2_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_H_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016HV2_DATA/Summer16_23Sep2016HV2_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_L1RC_AK4PFchs_MC = {
  "JECDatabase/textFiles/Summer16_23Sep2016V2_MC/Summer16_23Sep2016V2_MC_L1RC_AK4PFchs.txt"
};


/* ++++++++++++++ JEC for Moriond17 +++++++++++++++ */

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V0_BCD_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV0_DATA/Summer16_23Sep2016BCDV0_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV0_DATA/Summer16_23Sep2016BCDV0_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV0_DATA/Summer16_23Sep2016BCDV0_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V0_E_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016EV0_DATA/Summer16_23Sep2016EV0_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016EV0_DATA/Summer16_23Sep2016EV0_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016EV0_DATA/Summer16_23Sep2016EV0_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V0_F_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016FV0_DATA/Summer16_23Sep2016FV0_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016FV0_DATA/Summer16_23Sep2016FV0_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016FV0_DATA/Summer16_23Sep2016FV0_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V0_GH_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016GHV0_DATA/Summer16_23Sep2016GHV0_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016GHV0_DATA/Summer16_23Sep2016GHV0_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016GHV0_DATA/Summer16_23Sep2016GHV0_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V0_L123_AK4PFchs_MC = {
  "JECDatabase/textFiles/Summer16_23Sep2016V0_MC/Summer16_23Sep2016V0_MC_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016V0_MC/Summer16_23Sep2016V0_MC_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016V0_MC/Summer16_23Sep2016V0_MC_L3Absolute_AK4PFchs.txt",
};




const std::vector<std::string> JERFiles::Summer16_23Sep2016_V0_BCD_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV0_DATA/Summer16_23Sep2016BCDV0_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V0_E_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016EV0_DATA/Summer16_23Sep2016EV0_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V0_F_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016FV0_DATA/Summer16_23Sep2016FV0_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V0_GH_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016GHV0_DATA/Summer16_23Sep2016GHV0_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V0_L1RC_AK4PFchs_MC = {
  "JECDatabase/textFiles/Summer16_23Sep2016V0_MC/Summer16_23Sep2016V0_MC_L1RC_AK4PFchs.txt"
};


/***************** Closure test of Summer16_23Sep2016_V2 *******************************************/

                                         
const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_BCD_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV2_DATA/Summer16_23Sep2016BCDV2_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV2_DATA/Summer16_23Sep2016BCDV2_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV2_DATA/Summer16_23Sep2016BCDV2_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV2_DATA/Summer16_23Sep2016BCDV2_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_EF_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016EFV2_DATA/Summer16_23Sep2016EFV2_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016EFV2_DATA/Summer16_23Sep2016EFV2_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016EFV2_DATA/Summer16_23Sep2016EFV2_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016EFV2_DATA/Summer16_23Sep2016EFV2_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_G_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016GV2_DATA/Summer16_23Sep2016GV2_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016GV2_DATA/Summer16_23Sep2016GV2_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016GV2_DATA/Summer16_23Sep2016GV2_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016GV2_DATA/Summer16_23Sep2016GV2_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V2_H_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016HV2_DATA/Summer16_23Sep2016HV2_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016HV2_DATA/Summer16_23Sep2016HV2_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016HV2_DATA/Summer16_23Sep2016HV2_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016HV2_DATA/Summer16_23Sep2016HV2_DATA_L2L3Residual_AK4PFchs.txt",
};
     
// For MC already defined in 'derivation of Summer16_23Sep2016_V2'                                     



// For L1RC already defined in 'derivation of Summer16_23Sep2016_V2'



/***************** Closure test of Summer16_23Sep2016_V3 *******************************************/

                                         
const std::vector<std::string> JERFiles::Summer16_23Sep2016_V3_BCD_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV3_DATA/Summer16_23Sep2016BCDV3_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV3_DATA/Summer16_23Sep2016BCDV3_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV3_DATA/Summer16_23Sep2016BCDV3_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV3_DATA/Summer16_23Sep2016BCDV3_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V3_EF_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016EFV3_DATA/Summer16_23Sep2016EFV3_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016EFV3_DATA/Summer16_23Sep2016EFV3_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016EFV3_DATA/Summer16_23Sep2016EFV3_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016EFV3_DATA/Summer16_23Sep2016EFV3_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V3_G_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016GV3_DATA/Summer16_23Sep2016GV3_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016GV3_DATA/Summer16_23Sep2016GV3_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016GV3_DATA/Summer16_23Sep2016GV3_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016GV3_DATA/Summer16_23Sep2016GV3_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V3_H_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016HV3_DATA/Summer16_23Sep2016HV3_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016HV3_DATA/Summer16_23Sep2016HV3_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016HV3_DATA/Summer16_23Sep2016HV3_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016HV3_DATA/Summer16_23Sep2016HV3_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V3_L123_AK4PFchs_MC = {
  "JECDatabase/textFiles/Summer16_23Sep2016V3_MC/Summer16_23Sep2016V3_MC_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016V3_MC/Summer16_23Sep2016V3_MC_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Summer16_23Sep2016V3_MC/Summer16_23Sep2016V3_MC_L3Absolute_AK4PFchs.txt",
};



const std::vector<std::string> JERFiles::Summer16_23Sep2016_V3_BCD_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016BCDV3_DATA/Summer16_23Sep2016BCDV3_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V3_EF_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016EFV3_DATA/Summer16_23Sep2016EFV3_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V3_G_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016GV3_DATA/Summer16_23Sep2016GV3_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V3_H_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Summer16_23Sep2016HV3_DATA/Summer16_23Sep2016HV3_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Summer16_23Sep2016_V3_L1RC_AK4PFchs_MC = {
  "JECDatabase/textFiles/Summer16_23Sep2016V3_MC/Summer16_23Sep2016V3_MC_L1RC_AK4PFchs.txt"
};


/* ++++++++++++++ Derivation of ReReco Data + Spring16 MC +++++++++++++++ */

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_BCD_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_23Sep2016BCDV1_DATA/Spring16_23Sep2016BCDV1_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016BCDV1_DATA/Spring16_23Sep2016BCDV1_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016BCDV1_DATA/Spring16_23Sep2016BCDV1_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_E_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_23Sep2016EV1_DATA/Spring16_23Sep2016EV1_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016EV1_DATA/Spring16_23Sep2016EV1_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016EV1_DATA/Spring16_23Sep2016EV1_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_F_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_23Sep2016FV1_DATA/Spring16_23Sep2016FV1_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016FV1_DATA/Spring16_23Sep2016FV1_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016FV1_DATA/Spring16_23Sep2016FV1_DATA_L3Absolute_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_GH_L123_noRes_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_23Sep2016GHV1_DATA/Spring16_23Sep2016GHV1_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016GHV1_DATA/Spring16_23Sep2016GHV1_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016GHV1_DATA/Spring16_23Sep2016GHV1_DATA_L3Absolute_AK4PFchs.txt",
};



/* ++++++++++++++ Closure test of ReReco Data + Spring16 MC V1 +++++++++++++++ */

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_BCD_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_23Sep2016BCDV1_DATA/Spring16_23Sep2016BCDV1_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016BCDV1_DATA/Spring16_23Sep2016BCDV1_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016BCDV1_DATA/Spring16_23Sep2016BCDV1_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016BCDV1_DATA/Spring16_23Sep2016BCDV1_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_E_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_23Sep2016EV1_DATA/Spring16_23Sep2016EV1_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016EV1_DATA/Spring16_23Sep2016EV1_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016EV1_DATA/Spring16_23Sep2016EV1_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016EV1_DATA/Spring16_23Sep2016EV1_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_F_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_23Sep2016FV1_DATA/Spring16_23Sep2016FV1_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016FV1_DATA/Spring16_23Sep2016FV1_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016FV1_DATA/Spring16_23Sep2016FV1_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016FV1_DATA/Spring16_23Sep2016FV1_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_GH_L123_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_23Sep2016GHV1_DATA/Spring16_23Sep2016GHV1_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016GHV1_DATA/Spring16_23Sep2016GHV1_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016GHV1_DATA/Spring16_23Sep2016GHV1_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016GHV1_DATA/Spring16_23Sep2016GHV1_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_L123_AK4PFchs_MC = {
  "JECDatabase/textFiles/Spring16_23Sep2016V1_MC/Spring16_23Sep2016V1_MC_L1FastJet_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016V1_MC/Spring16_23Sep2016V1_MC_L2Relative_AK4PFchs.txt",
  "JECDatabase/textFiles/Spring16_23Sep2016V1_MC/Spring16_23Sep2016V1_MC_L3Absolute_AK4PFchs.txt",
};



 
const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_BCD_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_23Sep2016BCDV1_DATA/Spring16_23Sep2016BCDV1_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_E_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_23Sep2016EV1_DATA/Spring16_23Sep2016EV1_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_F_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_23Sep2016FV1_DATA/Spring16_23Sep2016FV1_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_GH_L1RC_AK4PFchs_DATA = {
  "JECDatabase/textFiles/Spring16_23Sep2016GHV1_DATA/Spring16_23Sep2016GHV1_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V1_L1RC_AK4PFchs_MC = {
  "JECDatabase/textFiles/Spring16_23Sep2016V1_MC/Spring16_23Sep2016V1_MC_L1RC_AK4PFchs.txt"
};



/* ++++++++++++++ Closure test of Spring16_23Sep2016_V2 +++++++++++++++ */

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V2_BCD_L123_AK4PFchs_DATA = {
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016BCDV2_DATA/Spring16_23Sep2016BCDV2_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016BCDV2_DATA/Spring16_23Sep2016BCDV2_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016BCDV2_DATA/Spring16_23Sep2016BCDV2_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016BCDV2_DATA/Spring16_23Sep2016BCDV2_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V2_EF_L123_AK4PFchs_DATA = {
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016EFV2_DATA/Spring16_23Sep2016EFV2_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016EFV2_DATA/Spring16_23Sep2016EFV2_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016EFV2_DATA/Spring16_23Sep2016EFV2_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016EFV2_DATA/Spring16_23Sep2016EFV2_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V2_G_L123_AK4PFchs_DATA = {
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016GV2_DATA/Spring16_23Sep2016GV2_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016GV2_DATA/Spring16_23Sep2016GV2_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016GV2_DATA/Spring16_23Sep2016GV2_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016GV2_DATA/Spring16_23Sep2016GV2_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V2_H_L123_AK4PFchs_DATA = {
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016HV2_DATA/Spring16_23Sep2016HV2_DATA_L1FastJet_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016HV2_DATA/Spring16_23Sep2016HV2_DATA_L2Relative_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016HV2_DATA/Spring16_23Sep2016HV2_DATA_L3Absolute_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016HV2_DATA/Spring16_23Sep2016HV2_DATA_L2L3Residual_AK4PFchs.txt",
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V2_L123_AK4PFchs_MC = {
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016V2_MC/Spring16_23Sep2016V2_MC_L1FastJet_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016V2_MC/Spring16_23Sep2016V2_MC_L2Relative_AK4PFchs.txt",
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016V2_MC/Spring16_23Sep2016V2_MC_L3Absolute_AK4PFchs.txt",
};



 
const std::vector<std::string> JERFiles::Spring16_23Sep2016_V2_BCD_L1RC_AK4PFchs_DATA = {
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016BCDV2_DATA/Spring16_23Sep2016BCDV2_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V2_EF_L1RC_AK4PFchs_DATA = {
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016EFV2_DATA/Spring16_23Sep2016EFV2_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V2_G_L1RC_AK4PFchs_DATA = {
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016GV2_DATA/Spring16_23Sep2016GV2_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V2_H_L1RC_AK4PFchs_DATA = {
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016HV2_DATA/Spring16_23Sep2016HV2_DATA_L1RC_AK4PFchs.txt"
};

const std::vector<std::string> JERFiles::Spring16_23Sep2016_V2_L1RC_AK4PFchs_MC = {
  "JECDatabase_Anastasia/textFiles/Spring16_23Sep2016V2_MC/Spring16_23Sep2016V2_MC_L1RC_AK4PFchs.txt"
};



namespace {
    
// to share some code between JetCorrector and JetLeptonCleaner, provide some methods
// dealing with jet energy corrections here:
std::unique_ptr<FactorizedJetCorrector> build_corrector(const std::vector<std::string> & filenames){
    std::vector<JetCorrectorParameters> pars;
    for(const auto & filename : filenames){
        pars.emplace_back(locate_file(filename));
    }
    return uhh2::make_unique<FactorizedJetCorrector>(pars);
}

  void correct_jet(FactorizedJetCorrector & corrector, Jet & jet, const Event & event, JetCorrectionUncertainty* jec_unc = NULL, int jec_unc_direction=0){
    auto factor_raw = jet.JEC_factor_raw();
    corrector.setJetPt(jet.pt() * factor_raw);
    corrector.setJetEta(jet.eta());
    corrector.setJetE(jet.energy() * factor_raw);
    corrector.setJetA(jet.jetArea());
    corrector.setRho(event.rho);
    auto correctionfactors = corrector.getSubCorrections();
    auto correctionfactor_L1  = correctionfactors.front();
    auto correctionfactor = correctionfactors.back();

    LorentzVector jet_v4_corrected = jet.v4() * (factor_raw *correctionfactor);
   
    if(jec_unc_direction!=0){
      if (jec_unc==NULL){
	std::cerr << "JEC variation should be applied, but JEC uncertainty object is NULL! Abort." << std::endl;
	exit(EXIT_FAILURE);
      }
      // ignore jets with very low pt or high eta, avoiding a crash from the JESUncertainty tool
      double pt = jet_v4_corrected.Pt();
      double eta = jet_v4_corrected.Eta();
      if (!(pt<5. || fabs(eta)>5.)) {
      
	jec_unc->setJetEta(eta);
	jec_unc->setJetPt(pt);
	
	double unc = 0.;	  
	if (jec_unc_direction == 1){
	  unc = jec_unc->getUncertainty(1);
	  correctionfactor *= (1 + fabs(unc));
	} else if (jec_unc_direction == -1){
	  unc = jec_unc->getUncertainty(-1);
	  correctionfactor *= (1 - fabs(unc));
	}
	jet_v4_corrected = jet.v4() * (factor_raw *correctionfactor);
      }
    }

  
    jet.set_v4(jet_v4_corrected);
    jet.set_JEC_factor_raw(1. / correctionfactor);
    jet.set_JEC_L1factor_raw(correctionfactor_L1);

  }

  
  //propagate to MET
  //apply type1 MET correction to RAW MET
  //NB: jet with substracted muon Pt should be used

  void correct_MET(const Event & event, const bool & do_L1corr, const bool do_L1RCcorr, FactorizedJetCorrector & corrector_L1RC){

    //we start from raw MET
    LorentzVector metv4= event.met->uncorr_v4();

    for(auto & jet : *event.jets){
      //thresholds on the corrected jets: pt > 15, EM fraction < 0.9
      if(jet.v4().Pt() > 15 && (jet.neutralEmEnergyFraction()+jet.chargedEmEnergyFraction())<0.9){
	auto factor_raw = jet.JEC_factor_raw();
	auto L1factor_raw = jet.JEC_L1factor_raw();

	corrector_L1RC.setJetPt(jet.pt() * factor_raw);
	corrector_L1RC.setJetEta(jet.eta());
	corrector_L1RC.setJetE(jet.energy() * factor_raw);
	corrector_L1RC.setJetA(jet.jetArea());
	corrector_L1RC.setRho(event.rho);
	auto correctionfactors_L1RC = corrector_L1RC.getSubCorrections();
	auto correctionfactor_L1RC  = correctionfactors_L1RC.back();


	LorentzVector L1corr =   (L1factor_raw*factor_raw)*jet.v4();            //L1 corrected jets
	LorentzVector L1RCcorr = (correctionfactor_L1RC*factor_raw)*jet.v4();   //L1RC corrected jets
	LorentzVector L123corr = jet.v4();                                      //L123 corrected jets (L23 in case of puppi)

	metv4 -=  L123corr;

	//For Puppi jets, no L1 correction is needed
	if(do_L1corr){
	  //slimmed MET is corrected by L1FastJet, CHS MET is corrected by L1RC
	  if(!do_L1RCcorr) metv4 += L1corr;
	  else             metv4 += L1RCcorr;
	}
      }
    }

    event.met->set_pt(metv4.Pt());
    event.met->set_phi(metv4.Phi());
  }

  

JetCorrectionUncertainty* corrector_uncertainty(uhh2::Context & ctx, const std::vector<std::string> & filenames, int &direction){
    
    auto dir = ctx.get("jecsmear_direction", "nominal");
    if(dir == "up"){
        direction = 1;
    }
    else if(dir == "down"){
        direction = -1;
    }
    else if(dir != "nominal"){
        // direction = 0 is default
        throw runtime_error("JetCorrector: invalid value jecsmear_direction='" + dir + "' (valid: 'nominal', 'up', 'down')");
    }

    //initialize JetCorrectionUncertainty if shift direction is not "nominal", else return NULL pointer
    if(direction!=0){
      //take name from the L1FastJet correction (0th element of filenames) and replace "L1FastJet" by "Uncertainty" to get the proper name of the uncertainty file
      TString unc_file = locate_file(filenames[0]);
      if (unc_file.Contains("L1FastJet")) {
        unc_file.ReplaceAll("L1FastJet","Uncertainty");
      }
      else if (unc_file.Contains("L2Relative")) {
        unc_file.ReplaceAll("L2Relative","Uncertainty");
      }
      else {
        throw runtime_error("WARNING No JEC Uncertainty File found!");
      }
      JetCorrectionUncertainty* jec_uncertainty = new JetCorrectionUncertainty(unc_file.Data());
      return jec_uncertainty;
    }
    return NULL;
    
}

}

JetCorrector::JetCorrector(uhh2::Context & ctx, const std::vector<std::string> & filenames, const std::vector<std::string> & filenames_L1RC){
    corrector = build_corrector(filenames);
    direction = 0;

    //MET should only be corrected using AK8 jets, iff there is no AK4 collection that could be used for this because the calculation of our raw MET is based on AK4 jets
    used_ak4chs = ctx.get("JetCollection")=="slimmedJets";
    used_ak4puppi = ctx.get("JetCollection")=="slimmedJetsPuppi";
    metprop_possible_ak8chs = ctx.get("JetCollection")=="patJetsAK8PFCHS";
    metprop_possible_ak8puppi = ctx.get("JetCollection")=="patJetsAK8PFPUPPI";

    //MET is always corrected using the jet collection stated in the "JetCollection" Item in the context and only in case one of the stated jet collections is used. 
    //Particularly, only one of these two AK8 collections should be used.
    propagate_to_met = used_ak4chs || used_ak4puppi || metprop_possible_ak8chs || metprop_possible_ak8puppi;
    if(!propagate_to_met) cout << "WARNING in JetCorrections.cxx: You specified a jet collection in the 'JetCollection' item in the config file that is not suited to correct MET. You should change that if zou are using MET." << endl;

    //The first two collections are standard MET collections. The third one is only used for derivation of JECs
    used_slimmedmet = ctx.get("METName")=="slimmedMETs";
    used_puppimet = ctx.get("METName")=="slimmedMETsPuppi";
    used_chsmet = ctx.get("METName")=="slMETsCHS";
    if((used_slimmedmet || used_chsmet) && !(used_ak4chs || metprop_possible_ak8chs)) throw runtime_error("In JetCorrections.cxx: You are using slimmedMET or slMETchs but neither AK4CHS nor AK8CHS jets. You need to correct MET using one of those two.");
    else if(used_puppimet && !(used_ak4puppi || metprop_possible_ak8puppi)) throw runtime_error("In JetCorrections.cxx: You are using slimmedMETpuppi but neither AK4Puppi nor AK8Puppi jets. You need to correct MET using one of those two.");

    //if CHS MET is used, the correction is based on the (L123 - L1RC) scheme, else it is based on the standard (L123-L1).
    //See also: https://twiki.cern.ch/twiki/bin/viewauth/CMS/METType1Type2Formulae
    do_metL1RC = propagate_to_met && used_chsmet;
    
    //If using CHS MET and therefore going for (L123 - L1RC), the L1RC corrections have to be provided in a separate const std::vector<std::string>. This must only contain the L1RC correction.
    if(do_metL1RC && (filenames_L1RC.size() == 1)) corrector_L1RC = build_corrector(filenames_L1RC);
    else if(do_metL1RC && (filenames_L1RC.size() != 1)) throw runtime_error("In JetCorrections.cxx: CHS MET should be corrected via (L123 - L1RC) but the JERFile for L1RC is empty or too large (should have one entry).");
    //create dummy if L1RC is not needed. It is not applied anyway
    else corrector_L1RC = build_corrector(filenames);

    jec_uncertainty = corrector_uncertainty(ctx, filenames, direction) ;
}
    
bool JetCorrector::process(uhh2::Event & event){
    assert(event.jets);

    //apply jet corrections
    for(auto & jet : *event.jets){
      correct_jet(*corrector, jet, event, jec_uncertainty, direction);
    }
 
    /*
    //propagate jet corrections to MET
    bool correct_with_chs = used_ak4chs || metprop_possible_ak8chs;
    correct_MET(event, correct_with_chs, do_metL1RC, *corrector_L1RC); 
    */	

    return true;
}

bool JetCorrector::correct_met(uhh2::Event & event){
  assert(event.jets);

  //propagate jet corrections to MET
  bool correct_with_chs = used_ak4chs || metprop_possible_ak8chs;
  correct_MET(event, correct_with_chs, do_metL1RC, *corrector_L1RC); 
  
  return true;
}

// note: implement here because only here (and not in the header file), the destructor of FactorizedJetCorrector is known
JetCorrector::~JetCorrector(){}


TopJetCorrector::TopJetCorrector(uhh2::Context & ctx, const std::vector<std::string> & filenames){
    corrector = build_corrector(filenames);
    direction = 0;
    jec_uncertainty = corrector_uncertainty(ctx, filenames, direction) ;
}
    
bool TopJetCorrector::process(uhh2::Event & event){
    assert(event.topjets);
    for(auto & jet : *event.topjets){
        correct_jet(*corrector, jet, event, jec_uncertainty, direction);
    }
    return true;
}

// note: implement here because only here (and not in the header file), the destructor of FactorizedJetCorrector is known
TopJetCorrector::~TopJetCorrector(){}

SubJetCorrector::SubJetCorrector(uhh2::Context & ctx, const std::vector<std::string> & filenames){
    corrector = build_corrector(filenames);
    direction = 0;
    jec_uncertainty = corrector_uncertainty(ctx, filenames, direction) ;
}
    
bool SubJetCorrector::process(uhh2::Event & event){
    assert(event.topjets);
    for(auto & topjet : *event.topjets){
        auto subjets = topjet.subjets();
        for (auto & subjet : subjets) { 
            correct_jet(*corrector, subjet, event, jec_uncertainty, direction);
        }
        topjet.set_subjets(move(subjets));
    }
    return true;
}

// note: implement here because only here (and not in the header file), the destructor of FactorizedJetCorrector is known
SubJetCorrector::~SubJetCorrector(){}

GenericJetCorrector::GenericJetCorrector(uhh2::Context & ctx, const std::vector<std::string> & filenames, const std::string & collectionname){
    corrector = build_corrector(filenames);
    direction = 0;
    jec_uncertainty = corrector_uncertainty(ctx, filenames, direction) ;
    h_jets = ctx.get_handle<std::vector<Jet> >(collectionname);
}
    
bool GenericJetCorrector::process(uhh2::Event & event){

    const auto jets = &event.get(h_jets);
    assert(jets);
    for(auto & jet : *jets){
        correct_jet(*corrector, jet, event, jec_uncertainty, direction);
    }
    return true;
}

// note: implement here because only here (and not in the header file), the destructor of FactorizedJetCorrector is known
GenericJetCorrector::~GenericJetCorrector(){}

GenericTopJetCorrector::GenericTopJetCorrector(uhh2::Context & ctx, const std::vector<std::string> & filenames, const std::string & collectionname){
    corrector = build_corrector(filenames);
    direction = 0;
    jec_uncertainty = corrector_uncertainty(ctx, filenames, direction) ;
    h_jets = ctx.get_handle<std::vector<TopJet> >(collectionname);
}
    
bool GenericTopJetCorrector::process(uhh2::Event & event){

    const auto jets = &event.get(h_jets);
    assert(jets);
    for(auto & jet : *jets){
        correct_jet(*corrector, jet, event, jec_uncertainty, direction);
    }
    return true;
}

// note: implement here because only here (and not in the header file), the destructor of FactorizedJetCorrector is known
GenericTopJetCorrector::~GenericTopJetCorrector(){}

GenericSubJetCorrector::GenericSubJetCorrector(uhh2::Context & ctx, const std::vector<std::string> & filenames, const std::string & collectionname){
    corrector = build_corrector(filenames);
    direction = 0;
    jec_uncertainty = corrector_uncertainty(ctx, filenames, direction) ;
    h_jets = ctx.get_handle<std::vector<TopJet> >(collectionname);
}
    
bool GenericSubJetCorrector::process(uhh2::Event & event){

    const auto topjets = &event.get(h_jets);
    assert(topjets);
    for(auto & topjet : *topjets){
        auto subjets = topjet.subjets();
        for (auto & subjet : subjets) { 
            correct_jet(*corrector, subjet, event, jec_uncertainty, direction);
        }
        topjet.set_subjets(move(subjets));
    }
    return true;
}

// note: implement here because only here (and not in the header file), the destructor of FactorizedJetCorrector is known
GenericSubJetCorrector::~GenericSubJetCorrector(){}

// ** JetLeptonCleaner

JetLeptonCleaner::JetLeptonCleaner(uhh2::Context & ctx, const std::vector<std::string> & filenames){
    corrector = build_corrector(filenames);
    direction = 0;
    jec_uncertainty = corrector_uncertainty(ctx, filenames, direction) ;
}

bool JetLeptonCleaner::process(uhh2::Event & event){
    assert(event.jets);
    if(event.muons){
        for(const auto & mu : *event.muons){
            if(mu_id && !(mu_id(mu, event))) continue;
            for(auto & jet : *event.jets){
                if(deltaR(jet, mu) < drmax && jet.muonMultiplicity() > 0){
                    auto jet_p4_raw = jet.v4() * jet.JEC_factor_raw();
                    // note that muon energy fraction as stored in the jet refers to the raw jet energy.
                    double muon_energy_in_jet = jet_p4_raw.E() * jet.muonEnergyFraction();
                    double new_muon_energy_in_jet = muon_energy_in_jet - mu.energy();
                    
                    // test compatibility of the hypothesis that the muon has been clustered to the jet with
                    // the jet information. The hypothesis is rejected if the muon energy in the jet is too small
                    // (but allow 10% off). Note that in general (for muon multiplicity > 1), the muon energy in
                    // the jet might be larger than from the single muon; make sure to consider that in the test
                    // by requiring one direction in the comparison only in case the muon multiplicity is 1.
                    if(new_muon_energy_in_jet < -0.1 * mu.energy() || (jet.muonMultiplicity() == 1 && new_muon_energy_in_jet > 0.1 * mu.energy())){
                        continue;
                    }
                    jet_p4_raw -= mu.v4();
                    // if that subtraction flipped the jet direction (angle between new and old > 90 degrees or pi/2), emit a warning and set its momentum to 0.
                    // Only warn if pt > 5GeV (otherwise, the jet is 0 anyway for all practical purposes).
                    if(jet_p4_raw.pt() > 5 && deltaR(jet_p4_raw, jet) > M_PI/2){
                        cout << "Warning: subtracting lepton flipped jet direction" << endl;
                        jet.set_v4(LorentzVector());
                        continue;
                    }
                    // re-correct jet. First, set p4_raw = p4_corrected such that
                    // the 'correct_jet' method does what it should do if using JEC_factor_raw ...
                    jet.set_JEC_factor_raw(1.0);
                    jet.set_v4(jet_p4_raw);
                    // set new muon multiplicity and muon energy fraction:
                    jet.set_muonMultiplicity(jet.muonMultiplicity() - 1);
                    jet.set_muonEnergyFraction(max(new_muon_energy_in_jet / jet_p4_raw.E(), 0.0));
		    //                    correct_jet(*corrector, jet, event, jec_uncertainty, direction, false);
                    correct_jet(*corrector, jet, event, jec_uncertainty, direction);
                }
            }
        }
    }
    if(event.electrons){
        for(const auto & ele : *event.electrons){
            if(ele_id && !(ele_id(ele, event))) continue;
            for(auto & jet : *event.jets){
                if(deltaR(jet, ele) < drmax && jet.electronMultiplicity() > 0){
                    auto jet_p4_raw = jet.v4() * jet.JEC_factor_raw();
                    double electron_energy_in_jet = jet_p4_raw.E() * jet.chargedEmEnergyFraction();
                    double new_electron_energy_in_jet = electron_energy_in_jet - ele.energy();
                    
                    if(new_electron_energy_in_jet < -0.1 * ele.energy() || (jet.chargedEmEnergyFraction() == 1 && new_electron_energy_in_jet > 0.1 * ele.energy())){
                        continue;
                    }
                    jet_p4_raw -= ele.v4();
                    if(jet_p4_raw.pt() > 5 && deltaR(jet_p4_raw, jet) > M_PI/2){
                        cout << "Warning: subtracting lepton flipped jet direction" << endl;
                        jet.set_v4(LorentzVector());
                        continue;
                    }
                    // re-correct jet:
                    jet.set_JEC_factor_raw(1.0);
                    jet.set_v4(jet_p4_raw);
                    jet.set_electronMultiplicity(jet.electronMultiplicity() - 1);
                    jet.set_chargedEmEnergyFraction(max(new_electron_energy_in_jet / jet_p4_raw.E(), 0.0));
                    correct_jet(*corrector, jet, event, jec_uncertainty, direction);
                }
            }
        }
    }
    return true;
}

// see ~JetCorrector
JetLeptonCleaner::~JetLeptonCleaner(){}


//// jet-lepton cleaning module using the matching of the candidates' keys

JetLeptonCleaner_by_KEYmatching::JetLeptonCleaner_by_KEYmatching(uhh2::Context& ctx, const std::vector<std::string> & filenames, const std::string& jet_label){

    h_jets_ = ctx.get_handle<std::vector<Jet>>(jet_label);
    h_topjets_ = ctx.get_handle<std::vector<TopJet>>(jet_label);
    corrector = build_corrector(filenames);
    direction = 0;
    jec_uncertainty = corrector_uncertainty(ctx, filenames, direction) ;
}

JetLeptonCleaner_by_KEYmatching::~JetLeptonCleaner_by_KEYmatching(){}

bool JetLeptonCleaner_by_KEYmatching::do_cleaning(Jet & jet, uhh2::Event& event) {
  bool correct_p4(false);
  auto jet_p4_raw = jet.v4() * jet.JEC_factor_raw();

  const auto& jet_lepton_keys = jet.lepton_keys();

    // muon-cleaning
  if(event.muons){

    for(const auto& muo : *event.muons){

      if(muo_id && !(muo_id(muo, event))) continue;

      for(const auto& muo_cand : muo.source_candidates()){

        if(std::find(jet_lepton_keys.begin(), jet_lepton_keys.end(), muo_cand.key) != jet_lepton_keys.end()){

          correct_p4 = true;

          LorentzVectorXYZE muo_cand_p4;
          muo_cand_p4.SetPx(muo_cand.px);
          muo_cand_p4.SetPy(muo_cand.py);
          muo_cand_p4.SetPz(muo_cand.pz);
          muo_cand_p4.SetE (muo_cand.E);

          jet_p4_raw -= muo_cand_p4;
        }
      }
    }
  }

    // electron-cleaning
  if(event.electrons){

    for(const auto& ele : *event.electrons){

      if(ele_id && !(ele_id(ele, event))) continue;

      for(const auto& ele_cand : ele.source_candidates()){

        if(std::find(jet_lepton_keys.begin(), jet_lepton_keys.end(), ele_cand.key) != jet_lepton_keys.end()){

          correct_p4 = true;

          LorentzVectorXYZE ele_cand_p4;
          ele_cand_p4.SetPx(ele_cand.px);
          ele_cand_p4.SetPy(ele_cand.py);
          ele_cand_p4.SetPz(ele_cand.pz);
          ele_cand_p4.SetE (ele_cand.E);

          jet_p4_raw -= ele_cand_p4;
        }
      }
    }
  }

    // jet-p4 correction
  if(correct_p4){

    jet.set_JEC_factor_raw(1.);
    jet.set_v4(jet_p4_raw);

    correct_jet(*corrector, jet, event, jec_uncertainty, direction);
    return true;
  }
  return false;
}

bool JetLeptonCleaner_by_KEYmatching::process(uhh2::Event& event){

  std::vector<Jet> * jets = NULL;
  std::vector<TopJet> * topjets = NULL;
  if (event.is_valid(h_jets_)) {
    jets = &event.get(h_jets_);
  } else {
    assert(event.is_valid(h_topjets_));
    topjets = &event.get(h_topjets_);
  }

  if (jets) {
    for(auto& jet : *jets ){
      do_cleaning(jet, event);
    }
  }
  else if (topjets) {
    for(auto& jet : *topjets ){
      do_cleaning(jet, event);
    }
  }
  else {
    std::cerr << "Neither jet nor topjet collection found for this name!\n";
    assert(false);
  }

  return true;
    
}


//// ----- modules for Jet Energy Resolution data/MC corrections -----

// https://twiki.cern.ch/twiki/bin/view/CMS/JetResolution [13TeV JER measurement]
const JERSmearing::SFtype1 JERSmearing::SF_13TeV_2016 = {
  // 0 = upper jet-eta limit
  // 1 = JER SF
  // 2 = JER SF + 1sigma
  // 3 = JER SF - 1sigma
  {{0.5, 1.122, 1.148, 1.096}},
  {{0.8, 1.167, 1.215, 1.119}},
  {{1.1, 1.168, 1.214, 1.122}},
  {{1.3, 1.029, 1.095, 0.963}},
  {{1.7, 1.115, 1.145, 1.085}},
  {{1.9, 1.041, 1.103, 0.979}},
  {{2.1, 1.167, 1.253, 1.081}},
  {{2.3, 1.094, 1.187, 1.001}},
  {{2.5, 1.168, 1.288, 1.048}},
  {{2.8, 1.266, 1.398, 1.134}},
  {{3.0, 1.595, 1.770, 1.420}},
  {{3.2, 0.998, 1.064, 0.932}},
  {{5.0, 1.226, 1.371, 1.081}},
};

const JERSmearing::SFtype1 JERSmearing::SF_13TeV_2015 = {
  // 0 = upper jet-eta limit
  // 1 = JER SF
  // 2 = JER SF + 1sigma
  // 3 = JER SF - 1sigma
  {{0.5, 1.095, -1, -1}},
  {{0.8, 1.120, -1, -1}},
  {{1.1, 1.097, -1, -1}},
  {{1.3, 1.103, -1, -1}},
  {{1.7, 1.118, -1, -1}},
  {{1.9, 1.100, -1, -1}},
  {{2.1, 1.162, -1, -1}},
  {{2.3, 1.160, -1, -1}},
  {{2.5, 1.161, -1, -1}},
  {{2.8, 1.209, -1, -1}},
  {{3.0, 1.564, -1, -1}},
  {{3.2, 1.384, -1, -1}},
  {{5.0, 1.216, -1, -1}},
};

const JERSmearing::SFtype1 JERSmearing::SF_13TeV_2016_full = {
  // 0 = upper jet-eta limit
  // 1 = JER SF
  // 2 = JER SF + 1sigma
  // 3 = JER SF - 1sigma
  {{0.5, 1.109, 1.117, 1.101}},
  {{0.8, 1.138, 1.151, 1.125}},
  {{1.1, 1.114, 1.127, 1.101}},
  {{1.3, 1.123, 1.147, 1.099}},
  {{1.7, 1.081, 1.092, 1.070}},
  {{1.9, 1.082, 1.117, 1.047}},
  {{2.1, 1.140, 1.187, 1.093}},
  {{2.3, 1.067, 1.120, 1.014}},
  {{2.5, 1.177, 1.218, 1.136}},
  {{2.8, 1.364, 1.403, 1.325}},
  {{3.0, 1.857, 1.928, 1.786}},
  {{3.2, 1.328, 1.350, 1.306}},
  {{5.0, 1.160, 1.189, 1.131}},
};

////

JetResolutionSmearer::JetResolutionSmearer(uhh2::Context & ctx, const JERSmearing::SFtype1& JER_sf){
    smear_met = string2bool(ctx.get("jersmear_smear_met", "false"));
    auto dir = ctx.get("jersmear_direction", "nominal");
    if(dir == "up"){
        direction = 1;
    }
    else if(dir == "down"){
        direction = -1;
    }
    else if(dir != "nominal"){
        // direction = 0 is default
        throw runtime_error("JetResolutionSmearer: invalid value jersmear_direction='" + dir + "' (valid: 'nominal', 'up', 'down')");
    }
    if(ctx.get("meta_jer_applied", "") == "true"){
        throw runtime_error("JetResolutionSmearer: tried to apply jet resolution smearing, although metadata indicates that it already has been applied!");
    }
    ctx.set_metadata("jer_applied", "true");

    JER_SFs_ = JER_sf;
}

bool JetResolutionSmearer::process(uhh2::Event & event) {

    if(!event.jets || !event.genjets){
        throw runtime_error("JetResolutionSmearer: need jets and genjets to operate, but at least one of these is missing.");
    }
    
    LorentzVector met;
    if(event.met) {
        met = event.met->v4();
    }
    for(unsigned int i=0; i<event.jets->size(); ++i) {
        auto & jet = event.jets->at(i);
        // find next genjet:
        auto closest_genjet = closestParticle(jet, *event.genjets);
        // ignore unmatched jets (=no genjets at all or large DeltaR), or jets with very low genjet pt:
        if(closest_genjet == nullptr || deltaR(*closest_genjet, jet) > 0.3) continue;
        auto genpt = closest_genjet->pt();
        if(genpt < 15.0f) {
            continue;
        }
        LorentzVector jet_v4 = jet.v4();
        LorentzVector jet_v4_raw = jet_v4 * jet.JEC_factor_raw();
        float recopt = jet_v4.pt();
        float abseta = fabs(jet_v4.eta());

        int ieta(-1);

        for(unsigned int idx=0; idx<JER_SFs_.size(); ++idx){

          const float min_eta = idx ? JER_SFs_.at(idx-1).at(0) : 0.;
          const float max_eta =       JER_SFs_.at(idx)  .at(0);

          if(min_eta <= abseta && abseta < max_eta){ ieta = idx; break; }
        }
        if(ieta < 0) {
	  cout << "WARNING: JetResolutionSmearer: index for JER-smearing SF not found for jet with |eta| = " << abseta << endl;
	  cout << "         no JER smearing is applied." << endl;
	  continue;
	}

        float c;
        if(direction == 0){
            c = JER_SFs_.at(ieta).at(1);
        }
        else if(direction == 1){
            c = JER_SFs_.at(ieta).at(2);
        }
        else{
            c = JER_SFs_.at(ieta).at(3);
        }
        float new_pt = std::max(0.0f, genpt + c * (recopt - genpt));
        jet_v4 *= new_pt / recopt;	
        jet.set_v4(jet_v4);
    
        //propagate JER shifts to MET by using same factor, but for raw jet p4:
        if(smear_met){
            met += jet_v4_raw;
            jet_v4_raw *= new_pt / recopt;
            met -= jet_v4_raw;
        }
    }
    //store changed MET
    if(event.met) {
        event.met->set_pt(met.Pt());
        event.met->set_phi(met.Phi());
    }
    return true;
}

JetResolutionSmearer::~JetResolutionSmearer(){}

////

GenericJetResolutionSmearer::GenericJetResolutionSmearer(uhh2::Context& ctx, const std::string& recjet_label, const std::string& genjet_label, const bool allow_met_smearing, const JERSmearing::SFtype1& JER_sf){

  if(ctx.get("meta_jer_applied__"+recjet_label, "") != "true") ctx.set_metadata("jer_applied__"+recjet_label, "true");
  else throw std::runtime_error("GenericJetResolutionSmearer::GenericJetResolutionSmearer -- JER smearing already applied to this RECO-jets collection: "+recjet_label);

  const std::string& dir = ctx.get("jersmear_direction", "nominal");
  if     (dir == "nominal") direction =  0;
  else if(dir == "up")      direction =  1;
  else if(dir == "down")    direction = -1;
  else throw std::runtime_error("GenericJetResolutionSmearer::GenericJetResolutionSmearer -- invalid value jersmear_direction='"+dir+"' (valid: 'nominal', 'up', 'down')");

  h_recjets_    = ctx.get_handle<std::vector<Jet> >      (recjet_label);
  h_rectopjets_ = ctx.get_handle<std::vector<TopJet> >   (recjet_label);

  h_genjets_    = ctx.get_handle<std::vector<Particle> > (genjet_label);
  h_gentopjets_ = ctx.get_handle<std::vector<GenTopJet> >(genjet_label);

  smear_met = allow_met_smearing ? string2bool(ctx.get("jersmear_smear_met", "false")) : false;

  if(smear_met){

    if(ctx.get("meta_jer_applied_on_met", "") != "true") ctx.set_metadata("jer_applied_on_met", "true");
    else throw std::runtime_error("GenericJetResolutionSmearer::GenericJetResolutionSmearer -- JER smearing already propagated to MET measurement: jet_label="+recjet_label);
  }

  JER_SFs_ = JER_sf;
}

bool GenericJetResolutionSmearer::process(uhh2::Event& evt){

  if(evt.isRealData) return true;

  std::vector<Jet>*    rec_jets(0);
  std::vector<TopJet>* rec_topjets(0);

  if     (evt.is_valid(h_recjets_))    rec_jets    = &evt.get(h_recjets_);
  else if(evt.is_valid(h_rectopjets_)) rec_topjets = &evt.get(h_rectopjets_);
  else throw std::runtime_error("GenericJetResolutionSmearer::process -- invalid handle to RECO-jets");

  std::vector<Particle>*  gen_jets(0);
  std::vector<GenTopJet>* gen_topjets(0);

  if     (evt.is_valid(h_genjets_))    gen_jets    = &evt.get(h_genjets_);
  else if(evt.is_valid(h_gentopjets_)) gen_topjets = &evt.get(h_gentopjets_);
  else throw std::runtime_error("GenericJetResolutionSmearer::process -- invalid handle to GEN-jets");

  LorentzVector met;
  if(evt.met) met = evt.met->v4();

  if     (rec_jets    && gen_jets)    apply_JER_smearing(*rec_jets   , *gen_jets   , met);
  else if(rec_topjets && gen_jets)    apply_JER_smearing(*rec_topjets, *gen_jets   , met);
  else if(rec_topjets && gen_topjets) apply_JER_smearing(*rec_topjets, *gen_topjets, met);
  else throw std::runtime_error("GenericJetResolutionSmearer::process -- invalid combination of RECO-GEN jet collections");

  // update MET
  if(evt.met && smear_met){

    evt.met->set_pt (met.Pt());
    evt.met->set_phi(met.Phi());
  }

  return true;
}

//// -----------------------------------------------------------------
