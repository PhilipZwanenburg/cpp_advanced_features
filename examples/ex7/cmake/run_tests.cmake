include(CTest)


add_test(Ex7Runs ${EXEC_NAME} 1)

add_test(Ex7_in0 ${EXEC_NAME})
set_property(TEST Ex7_in0 PROPERTY WILL_FAIL TRUE)
#set_property(TEST Ex7_in0 PROPERTY LABELS bad_input)

add_test(Ex7_in2 ${EXEC_NAME} 1 2)
set_property(TEST Ex7_in2 PROPERTY WILL_FAIL TRUE)
#set_property(TEST Ex7_in2 PROPERTY LABELS bad_input)

add_test(Ex7_in1_format ${EXEC_NAME} asdf)
set_property(TEST Ex7_in1_format PROPERTY
             PASS_REGULAR_EXPRESSION "Failed to read double from input")
