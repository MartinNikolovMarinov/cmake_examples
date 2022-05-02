```
target_sources(<target> <PUBLIC | PRIVATE | INTERFACE> [items1...])
```

* \<target\> : the name of the target object. Most of the time this is either an executable or a library.
* PUBLIC : means that the sources will be added to the target object and to any targets that depend on it.

Specifies sources to use when building a target and/or its dependents.

Repeated calls for the same <target> append items in the order called.

Example for compiling some source code only in debug mode:
```
# absolute path used inside the generator expression
target_sources(MyTarget "$<$<CONFIG:Debug>:${CMAKE_CURRENT_SOURCE_DIR}/dbgsrc.cpp>")
```
