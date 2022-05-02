1. Minimum Required version and project name should always be set:
```
cmake_minimum_required(VERSION x.x)
project(name)
```

2. The following "magic" unifies symbol visibility behavior across Windows and non-Windows platforms:
```
include(GenerateExportHeader)
set(CMAKE_CXX_VISUBILITY_PRESET hidden)
set(CMAKE_VISIBILITY_INLINES_HIDDEN YES)
...
generate_export_header(TargetName)
```
--- Recommendation from Craig Scott in "Deep CMake for Library Authors" talk from CppCon 2019.

