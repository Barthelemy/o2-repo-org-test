find_package(Boost COMPONENTS unit_test_framework program_options REQUIRED)
include_directories(
    ${Boost_INCLUDE_DIRS}
)

o2_define_bucket(
        NAME
        Common_Bucket
        DEPENDENCIES # library names
        ${Boost_PROGRAM_OPTIONS_LIBRARY}
)

o2_define_bucket(
        NAME
        DataFormats_Bucket
        DEPENDENCIES # library names
        Common
        ${Boost_PROGRAM_OPTIONS_LIBRARY}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        protobuf
)

o2_define_bucket(
        NAME
        GlobalTracking_Bucket
        DEPENDENCIES # library names
        Common
        ${Boost_PROGRAM_OPTIONS_LIBRARY}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        #DataFormats
        #Detectors/*/Reconstruction
        #ROOT
)

o2_define_bucket(
        NAME
        Simulation_Bucket
        DEPENDENCIES
        #Geant4
        Common
        ${Boost_PROGRAM_OPTIONS_LIBRARY}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
)

o2_define_bucket(
        NAME
        Reconstruction_Bucket
        DEPENDENCIES
        Common
        ${Boost_PROGRAM_OPTIONS_LIBRARY}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
)