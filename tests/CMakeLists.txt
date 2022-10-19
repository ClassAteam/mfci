
find_program(BASH_EXECUTABLE NAMES bash REQUIRED)

option(FAST_DISPLAY_TEST "fast display test enabled" OFF)

if(FAST_DISPLAY_TEST)
  add_test(
    NAME three_displays
    COMMAND ${BASH_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test.sh
    $<TARGET_FILE:ius>
    $<TARGET_FILE:mfci1>
    $<TARGET_FILE:mfci2>
    $<TARGET_FILE:mfci3>
    )

  add_test(
    NAME two_displays
    COMMAND ${BASH_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test.sh
    $<TARGET_FILE:ius>
    $<TARGET_FILE:mfci1>
    $<TARGET_FILE:mfci2>
    )
endif()
