```
add_executable(<name> [WIN32] [MACOSX_BUNDLE]
               [EXECLUDE_FROM_ALL]
               [source1] [source2 ...])
```
* \<name\>: the name of the target to build into an executable.
* \[WIN32\] and \[MACOS_BUNDLE\]: OS-specific.
* \[EXECLUDE_FROM_ALL\]: prevent a top-level make all from building this target.

Header files can be found automatically, and generally there is no need to list them.

