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

Open questions: 

* Include prefixed with module name ? ie. "include Common/Bar.h" instead of "include Bar.h" ?

    I think that it is necessary as we use namespaces (it could clash on the name of headers).
* Is the "include" directory only for public headers or all headers ? 
* Using the o2_target_link_bucket is ok for libraries. For executables the problem is that we might want to also \
     link against
* Where do we call "find_package" ? along with the bucket definitions ? which one optionals ? who decides ? 