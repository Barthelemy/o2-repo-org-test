# o2-repo-org-test

Principles : 

* Dependencies are defined as "buckets" at the top level in a centralized way.
* Each "module" generates a single library linked against the dependencies defined in a single bucket. 
* Common and GlobalTracking are typical modules (subprojects) with a standard directory structure (src, include, ...). 
* Detectors contain detector specific code. Several modules can be defined for each detector (grouped in directories
  if needed). Modules follow once more the same typical directory structure. 
* DataFormats is a special case as we have mostly headers and/or possibly protobuf files. 
  As a consequence it does not follow the typical directory structure. 
* Modules can live within the AliceO2 repository or as their own repository in the AliceO2 group. (not shown here)

Dependencies proposal (totally imaginary + directory based until we have some deliverables) : 

* Common -> boost
* DataFormats -> Common + protobuf + boost
* Detectors/ITS/Reconstruction -> boost + Common
* Detectors/ITS/Simulation -> Geant4 + Common + boost
* Detectors/TPC/Reconstruction -> boost + Common
* Detectors/TPC/Simulation -> Geant4 + Common + boost
* GlobalTracking -> Common + DataFormats + boost + Detectors/*/Reconstruction + ROOT

Problems/Questions:

* DataFormats : do we create libraries there or do we use the headers directly in the detectors modules ? 
  If we create data formats libraries, do we create one per detector or one global ? 
* GlobalTracking depends on Common. It uses o2_target_link_bucket but it still has to
  use include_directories(../../Common/include). Maybe it is ok, but I am not sure.
* is it ok that we do not prefix it with "Common/" or is it confusing because the public headers are prefixed ?
  
To do:

- [x] add a non public header that is in src
- [ ] DataFormats cmake
- [ ] doxygen example (top level and modules)
- [ ] test example
- [ ] enforce that "executables should always belong to the same bucket + the sub-package library" ?
- [ ] script to create new module (in AliceO2 or independent)
- [ ] get rid of as much boiler plate code as possible in the modules (typically the install function)
- [ ] add the o2_setup macro that modules should call (related to previous point?)
- [ ] standalone module example
- [ ] global definitions in O2Utils.cmake
- [ ] enforce that an exe depends on the same bucket as the library + the library

