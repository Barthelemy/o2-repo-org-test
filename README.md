# o2-repo-org-test

Some notes :

* DataFormats: TPC has subdirectories in order to produce several libs
* One library per module

Dependencies proposal (totally imaginary + directory based until we have some deliverables) : 

* Common -> boost
* DataFormats -> Common + protobuf + boost
* Detectors/ITS/Reconstruction -> boost + Common
* Detectors/ITS/Simulation -> Geant4 + Common + boost
* Detectors/TPC/Reconstruction -> boost + Common
* Detectors/TPC/Simulation -> Geant4 + Common + boost
* GlobalTracking -> Common + DataFormats + boost + Detectors/*/Reconstruction + ROOT

Open questions: 

* Include prefixed with module name ? ie. "include Common/Bar.h" instead of "include Bar.h" ?

    I think that it is necessary as we use namespaces (it could clash on the name of headers).
    Should we event go further and prefix with AliceO2/Common/ ?
* Is the "include" directory only for public headers or all headers ?
* Using the o2_target_link_bucket is ok for libraries. For executables the problem is that we might want to also \
     link against
* Where do we call "find_package" ? along with the bucket definitions ? which one optionals ? who decides ?

Problems:

* GlobalTracking depends on Common. It uses o2_target_link_bucket but it still has to
use include_directories(../../Common/include). Maybe it is ok, but I am not sure.

To do:

- [ ] add a non public header that is in src
- [ ] DataFormats cmake
- [ ] doxygen example
- [ ] test example
- [ ] enforce that "executables should always belong to the same bucket + the sub-package library" ?
- [ ] script to create new module (in AliceO2 or independent)
- [ ] get rid of as much boiler plate code as possible in the modules (typically the install function)
- [ ] add the o2_setup macro that modules should call (related to previous point?)
- [ ] standalone module example

