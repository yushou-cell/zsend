cmake_minimum_required(VERSION 3.5)
project(drogonSQL CXX)

include(CheckIncludeFileCXX)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fcoroutines")
check_include_file_cxx(any HAS_ANY)
check_include_file_cxx(string_view HAS_STRING_VIEW)
check_include_file_cxx(coroutine HAS_COROUTINE)

if(NOT "${CMAKE_CXX_STANDARD}" STREQUAL "")
# Do nothing
elseif(HAS_ANY AND HAS_STRING_VIEW AND HAS_COROUTINE)
    set(CMAKE_CXX_STANDARD 20)
elseif(HAS_ANY AND HAS_STRING_VIEW)
    set(CMAKE_CXX_STANDARD 17)
else()
    set(CMAKE_CXX_STANDARD 14)
endif()

set(CMAKE_CXX_FLAGS_RELEASE "-O2")
set(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -flto=auto")

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(ENV{PKG_CONFIG_PATH} "/usr/local/lib/pkgconfig/")
find_package(OpenSSL REQUIRED)
find_package(glog 0.7.0 REQUIRED)
find_package(Drogon REQUIRED)
find_package(PkgConfig REQUIRED)
# pkg_check_modules(Mail REQUIRED "vmime>=0.9.2")
# pkg_check_modules(mimalloc REQUIRED IMPORTED_TARGET "mimalloc>=2.1")
pkg_check_modules(unwind REQUIRED IMPORTED_TARGET "libunwind>=1.8.1")
pkg_check_modules(zmq REQUIRED IMPORTED_TARGET "libzmq>=4.3.5" "libczmq>=4.2.1")
pkg_check_modules(intelMutilThread IMPORTED_TARGET "tbb>=2021.13.0")
pkg_check_modules(brpc IMPORTED_TARGET "brpc>=1.10.0" "protobuf>=3.21.12.0")
# pkg_check_modules(protobuf IMPORTED_TARGET "protobuf>=3.21.12.0")

# include_directories(${Mail_INCLUDE_DIRS})
# INCLUDE_DIRECTORIES("/usr/local/include/mimalloc-2.1")
link_directories(${Mail_LIBRARY_DIRS} ${CMAKE_CURRENT_SOURCE_DIR}/3rdpart)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/head)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SOURCES)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE  Drogon::Drogon glog::glog PkgConfig::intelMutilThread PkgConfig::zmq -lunwind -lunwind-x86_64 -lleveldb PkgConfig::brpc)