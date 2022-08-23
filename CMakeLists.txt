cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project("gof-document-editor")

add_subdirectory(doc-editor-lib)

add_executable(CharacterExample examples/CharacterExample.cpp)
target_link_libraries(CharacterExample PRIVATE
        doc-editor-lib)
target_include_directories(CharacterExample PUBLIC
        doc-editor-lib)

# for unit tests with gtest
add_subdirectory(tests)