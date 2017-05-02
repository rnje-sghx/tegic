include_directories(
    ${PROJECT_SOURCE_DIR}/Include
    ${PROJECT_SOURCE_DIR}/Source
)

add_executable(
    tegic-tests
    main.test.cpp
    tegic.test.cpp
)

target_link_libraries(
    tegic-tests
    tegic
)

add_test(NAME TegicTests COMMAND tegic-tests)
