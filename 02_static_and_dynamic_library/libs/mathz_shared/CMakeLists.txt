project(mathz)

add_library(${PROJECT_NAME} SHARED
	mathz.cpp
)
target_include_directories(${PROJECT_NAME} PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(${PROJECT_NAME} PROPERTIES
	C_VISIBILITY_PRESET hidden
	CXX_VISIBILITY_PRESET hidden
)
target_compile_definitions(${PROJECT_NAME} PRIVATE MATHZ_LIBRARY_BUILD)

