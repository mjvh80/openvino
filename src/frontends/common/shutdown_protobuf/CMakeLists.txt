# Copyright (C) 2018-2023 Intel Corporation
# SPDX-License-Identifier: Apache-2.0
#

set(TARGET_NAME ov_protobuf_shutdown)

add_library(${TARGET_NAME} STATIC shutdown_protobuf.cpp)

target_include_directories(${TARGET_NAME} SYSTEM PRIVATE
    $<BUILD_INTERFACE:$<TARGET_PROPERTY:protobuf::libprotobuf,INTERFACE_INCLUDE_DIRECTORIES>>)
set_target_properties(${TARGET_NAME} PROPERTIES INTERPROCEDURAL_OPTIMIZATION_RELEASE ${ENABLE_LTO})
