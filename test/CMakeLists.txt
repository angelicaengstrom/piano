cmake_minimum_required(VERSION 3.20)

# ---- Options ----
option(ENABLE_TEST_COVERAGE "Enable test coverage" OFF)

# ---- Add Tests ----

include(CTest)

add_executable(Tester tester.cpp)
add_test(Tester tester)

# ---- code coverage ----
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake")

if(ENABLE_TEST_COVERAGE)
    include(CodeCoverage)
    append_coverage_compiler_flags()
    setup_target_for_coverage_gcovr_html(NAME coverage EXECUTABLE ctest)
endif()