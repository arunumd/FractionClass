set(GTEST_SHUFFLE 1)

add_executable(
    cpp-test
    main.cpp
    additiontests.cpp
    subtractiontests.cpp
    multiplicationtests.cpp
    divisiontests.cpp
    comparisontests.cpp
)

target_include_directories(cpp-test PUBLIC ../vendor/googletest/googletest/include 
                                           ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(cpp-test PUBLIC gtest)

include_directories(${CMAKE_SOURCE_DIR}/include)
