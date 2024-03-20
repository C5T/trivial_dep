cmake_minimum_required(VERSION 3.14.1)

# The project should be called `C5T_{UPPERCASE_REPO_NAME}`.
project(C5T_TRIVIAL_DEP LANGUAGES C CXX)

# To see this repo is included.
message(STATUS "The `trivial_dep` was added on the `cmake` level.")

# A standard C++ `cmake` project.
add_library(C5T_TRIVIAL_DEP SHARED trivial_dep.cc)
target_include_directories(C5T_TRIVIAL_DEP INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")
