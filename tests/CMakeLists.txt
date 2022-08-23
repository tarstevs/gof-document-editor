project(unit_tests)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(unit_tests HelloTests.cpp)

target_link_libraries(
        unit_tests
        GTest::gtest_main
        doc-editor-lib)

include(GoogleTest)
gtest_discover_tests(unit_tests)
