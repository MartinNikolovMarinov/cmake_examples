# Try to find the foo header file
# Once done, this will define:
#   - FOO_FOUND
#   - FOO_INCLUDE_DIRS

find_path(FOO_INCLUDE_DIR NAMES foo.h PATHS ${PROJECT_SOURCE_DIR}/foo/include NO_DEFAULT_PATH)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Foo DEFAULT_MSG FOO_INCLUDE_DIR)

if(FOO_FOUND)
  set(FOO_INCLUDE_DIRS ${FOO_INCLUDE_DIR})
endif()

mark_as_advanced(FOO_INCLUDE_DIR)
