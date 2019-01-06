set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(
	template_srcs
	fix.cpp
	sample_library.h
)
add_library(template_project STATIC ${template_srcs})
set_target_properties(template_project PROPERTIES LINKER_LANGUAGE CXX)

if(ENABLE_COVERAGE)
	target_link_libraries(template_project --coverage)
endif()

target_include_directories(template_project PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})