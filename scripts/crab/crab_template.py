# This is a small example how the crab api can easily be used to create something like multi crab.
# It has some additional features like also creating the xml files for you. 
# For it to work you need inputDatasets & requestNames apart from the classical part 
#
# Make sure to have a unique directory where your joboutput is saved, otherwise the script gets confused and you too!!
#
# Usage ./CrabConfig ConfigFile [options]
#
# Take care here to make the request names *nice*
# 
# autocomplete_Datasets(ListOfDatasets) works also for several entries with *
#
from DasQuery import autocomplete_Datasets

inputDatasets = ['/QCD_Pt-15to7000_TuneCUETP8M1_FlatP6_13TeV_pythia8/schoef-mAOD8021_2-f9991f4be980f03aaf2f039ec5927fd5/USER']
#'/QCD_HT100to200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv2-PUSpring16_80X_mcRun2_asymptotic_2016_miniAODv2_v0*/MINIAODSIM',
#'/QCD_HT200to300_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv2-PUSpring16_80X_mcRun2_asymptotic_2016_miniAODv2_v0*/MINIAODSIM',
#,'/QCD_HT300to500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISpring16MiniAODv2-PUSpring16_80X_mcRun2_asymptotic_2016_miniAODv2_v0*/MINIAODSIM'
#/QCD_Pt-15to7000_TuneCUETP8M1_FlatP6_13TeV_pythia8/RunIISummer16DR80Premix-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/AODSIM
#/eos/cms/store/group/phys_jetmet/schoef/QCD_8021_mAOD/
#/QCD_Pt-15to7000_TuneCUETP8M1_FlatP6_13TeV_pythia8/schoef-mAOD8021_2-f9991f4be980f03aaf2f039ec5927fd5/USER

inputDatasets = autocomplete_Datasets(inputDatasets)
requestNames = []
for x in inputDatasets:
    name = x.split('/')[1]
    modified_name = name.replace('TuneCUETP8M1_FlatP6_13TeV_pythia8','25ns')
    if "ext" in x:
        modified_name += '_ext'
    requestNames.append(modified_name)

# ===============================================================================
# Classical part of crab, after resolving the * it uses in the example below just the first entry
#

from CRABClient.UserUtilities import config, getUsernameFromSiteDB


config = config()
config.General.workArea = 'crab_MoriondQCD_T2Vienna'
config.General.transferOutputs = True
config.General.transferLogs = True
        
config.JobType.pluginName = 'Analysis'
config.JobType.psetName = '/nfs/dust/cms/user/reimersa/CMSSW_8_0_20/src/UHH2/core/python/ntuplewriter.py'
config.JobType.outputFiles = ["Ntuple.root"]
config.JobType.inputFiles = ['/nfs/dust/cms/user/reimersa/CMSSW_8_0_20/src/UHH2/core/python/Summer15_25nsV2_MC.db']
config.JobType.maxMemoryMB = 2500
        
#config.Data.inputDBS = 'global'
config.Data.inputDBS = 'phys03'
#config.Data.splitting = 'FileBased'
#config.Data.unitsPerJob = 1
config.Data.splitting = 'EventAwareLumiBased'
config.Data.unitsPerJob = 10000
config.Data.outLFNDirBase = '/store/user/%s/NTuplesRun2/CMSSW8020/MC/Moriond17/QCD_T2Vienna/' % (getUsernameFromSiteDB())
config.Data.publication = False
config.Data.allowNonValidInputDataset = True
#config.Data.publishDataName = 'CRAB3_tutorial_May2015_MC_analysis'



#config.Site.storageSite = 'T2_DE_DESY'
config.Site.storageSite = 'T2_AT_Vienna'
config.Site.whitelist = ['T2_AT_Vienna']


config.General.requestName = requestNames[0]
config.Data.inputDataset = inputDatasets[0]


