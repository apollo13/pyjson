cmake_minimum_required(VERSION 3.1)
project(pyjson)
set(BUILD_SHARED_LIBS on)
################################################################################

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(PYJSON_EXTERNAL ${CMAKE_CURRENT_SOURCE_DIR}/external)

################################################################################

include(DownloadProject)

function(pyjson_download_project name)
	download_project(
			PROJ         ${name}
			SOURCE_DIR   ${PYJSON_EXTERNAL}/${name}
			DOWNLOAD_DIR ${PYJSON_EXTERNAL}/.cache/${name}
			QUIET
			${ARGN}
	)
endfunction()

pyjson_download_project(pybind11
	GIT_REPOSITORY https://github.com/pybind/pybind11.git
	GIT_TAG        e2b884c33bcde70b2ea562ffa52dd7ebee276d50
)

pyjson_download_project(json
	GIT_REPOSITORY https://github.com/nlohmann/json
	GIT_TAG        v3.3.0
)

pyjson_download_project(eigen
	URL           http://bitbucket.org/eigen/eigen/get/3.3.7.tar.gz
	URL_MD5       f2a417d083fe8ca4b8ed2bc613d20f07
)

################################################################################

find_package(PythonInterp 3 QUIET)

add_subdirectory(external/pybind11)
include_directories(
	${PYJSON_EXTERNAL}/json/single_include
	${PYJSON_EXTERNAL}/eigen
)

add_library(json_utils json.cpp)
add_executable(test main.cpp)
target_link_libraries(test json_utils)
target_link_libraries(json_utils pybind11::embed)
