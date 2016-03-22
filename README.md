# o2-repo-org-test

Some notes :
* DataFormats: TPC has subdirectories in order to produce several libs

Dependencies proposal (totally imaginary + directory based until we have some deliverables) : 
* Common -> boost
* DataFormats -> Common + protobuf + boost
* Detectors/ITS/Reconstruction -> boost + Common
* Detectors/ITS/Simulation -> Geant4 + Common + boost
* Detectors/TPC/Reconstruction -> boost + Common
* Detectors/TPC/Simulation -> Geant4 + Common + boost
* GlobalTracking -> Common + DataFormats + boost + Detectors/*/Reconstruction
