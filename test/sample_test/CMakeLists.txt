file(GLOB SRCS *.cpp)

add_executable(sample_test ${SRCS})

target_link_libraries(
	sample_test
	template_project
	gtest
	gmock_main
)

target_link_libraries(sample_test --coverage)


install(TARGETS sample_test DESTINATION bin)
add_test(UnitTests sample_test)