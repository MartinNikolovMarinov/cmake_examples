```
add_subdirectory(<source_dir> [binary_dir] [EXCLUDE_FROM_ALL])
```

* \<source_dir\> : specifies a directory in which more CMakeLists.txt and source files are located.
* \[binary_dir\] : specifies the directory in which to place the output files. Generally ignored.
* \[EXCLUDE_FROM_ALL\] : when set targets in the subdirectory will not be included in the all target of the parent directory by default.

