#!/bin/bash

# Settings
build_folder=buildMake
lcov_file=code_coverage.info

#cd ..

# Clean previous builds
rm -rf build*/
#cmake --build ${build_folder} --target clean

# Configure
# -DCMAKE_INSTALL_PREFIX:PATH=install -DCMAKE_BUILD_TYPE=Debug --trace OR --trace-source="filename" --trace-expand
CXX=g++ cmake -S . -B ${build_folder} -G"Unix Makefiles" -DBUILD_TESTING=ON -DENABLE_COVERAGE=ON

# Build
# make
# 2 > make.out
cmake --build ${build_folder} -j 4 -v

# Test
cd ${build_folder}; ctest . -j 4;

# Code coverage
lcov --capture --directory . --output-file=${lcov_file}
# remove unwarranted system files
lcov --remove ${lcov_file} '/usr/*' -o ${lcov_file}

lcov --list ${lcov_file}
lcov --summary ${lcov_file}
# genhtml ${lcov_file} --title=Stack --output-directory=yes --show-details legend --demangle-cpp --missed

cd ..
