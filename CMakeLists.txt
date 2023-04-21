cmake_minimum_required(VERSION 3.5)
project(Engine
        VERSION 0.0.1
        DESCRIPTION "Engine for core processing tasks"
        LANGUAGES CXX)

#GLOBING
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(Engine main.cpp ${SOURCE_FILES})

#Other approach to build this multifile project
#This basically envolves manual work to put below all cpp files
#Target
#add_executable(Engine main.cpp src/file1.cpp src/file2.cpp)

target_compile_features(Engine PRIVATE cxx_std_20)
target_include_directories(Engine PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

