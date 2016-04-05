# arg NAME
# arg DEPENDENCIES
macro(o2_define_bucket)
    cmake_parse_arguments(
            PARSED_ARGS
            "" # bool args
            "NAME" # mono-valued arguments
            "DEPENDENCIES" # multi-valued arguments
            ${ARGN} # arguments
    )
    if(NOT PARSED_ARGS_NAME)
        message(FATAL_ERROR "You must provide a name")
    endif(NOT PARSED_ARGS_NAME)

    message(STATUS "o2_define_bucket : ${PARSED_ARGS_NAME}")
    foreach(dependency ${PARSED_ARGS_DEPENDENCIES})
        message(STATUS "   - ${dependency}")
    endforeach()

    # Save this information
    set("Bucket_map_${PARSED_ARGS_NAME}" "${PARSED_ARGS_DEPENDENCIES}") # emulation of a map
endmacro()


# arg TARGET
# arg BUCKET
macro(o2_target_link_bucket)
    cmake_parse_arguments(
            PARSED_ARGS
            "" # bool args
            "TARGET;BUCKET" # mono-valued arguments
            "" # multi-valued arguments
            ${ARGN} # arguments
    )
    # errors if missing arguments
    if(NOT PARSED_ARGS_TARGET)
        message(FATAL_ERROR "You must provide a target name")
    endif(NOT PARSED_ARGS_TARGET)
    if(NOT PARSED_ARGS_BUCKET)
        message(FATAL_ERROR "You must provide a bucket name")
    endif(NOT PARSED_ARGS_BUCKET)

    # do something useful here
    message(STATUS "Add dependency bucket for target ${PARSED_ARGS_TARGET} : ${PARSED_ARGS_BUCKET}")

    # find the bucket
    if(NOT DEFINED Bucket_map_${PARSED_ARGS_BUCKET})
        message(FATAL_ERROR "Bucket ${PARSED_ARGS_BUCKET} not defined.
        Use o2_define_bucket to define it.")
    endif()

    # for each dependency in the bucket invoke target_link_library
    set(DEPENDENCIES ${Bucket_map_${PARSED_ARGS_BUCKET}})
    message(STATUS "   invoke target_link_libraries for target ${PARSED_ARGS_TARGET} : ${DEPENDENCIES}")
    target_link_libraries(${PARSED_ARGS_TARGET} ${DEPENDENCIES})
endmacro()

