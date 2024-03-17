cmake_minimum_required(VERSION 3.20)

# ---- Options ----
option(ENABLE_TEST_COVERAGE "Enable test coverage" OFF)

# ---- Add Tests ----

include(CTest)
enable_testing()

add_executable(Tester tester.cpp)
add_test(Tester tester)

# ---- code coverage ----

if(ENABLE_TEST_COVERAGE)
    set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ../cmake)
    include(CodeCoverage.cmake)
    append_coverage_compiler_flags()
    setup_target_for_coverage_gcovr_html(NAME coverage EXECUTABLE ctest)
endif()