Build types are compilation default modes.

The `CMAKE_BUILD_TYPE` cache variable is usually set to one of the following:

* `Debug` - all debugging information, including assertions.
* `RelWithDebInfo` - Some debug information, but no assertions.
* `Release` - Release optimized for speed.
* `MinSizeRel` - Release optimized for size.

Example for `CMAKE_<LANG>_FLAGS_<TYPE>` defaults on a Linux system using gcc :
```
-- CMAKE_CXX_FLAGS =
-- CMAKE_CXX_FLAGS_DEBUG = -g
-- CMAKE_CXX_FLAGS_RELEASE = -03 -DNDEBUG
-- CMAKE_CXX_FLAGS_RELWITHDEBINFO = -02 -g -DNDEBUG
-- CMAKE_CXX_FLAGS_MINSIZEREL = -0s -DNDEBUG

-- CMAKE_C_FLAGS =
-- CMAKE_C_FLAGS_DEBUG = -g
-- CMAKE_C_FLAGS_RELEASE = -03 -DNDEBUG
-- CMAKE_C_FLAGS_RELWITHDEBINFO = -02 -g -DNDEBUG
-- CMAKE_C_FLAGS_MINSIZEREL = -0s -DNDEBUG
```
