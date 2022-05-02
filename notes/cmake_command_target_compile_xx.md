```
target_compile_definitions(<target> <PUBLIC | PRIVATE | INTERFACE> [item1 ...])

# example:
target_compile_definitions(foo PUBLIC FOO)
target_compile_definitions(foo PUBLIC -DFOO)  # -D removed
target_compile_definitions(foo PUBLIC "" FOO) # "" ignored
target_compile_definitions(foo PUBLIC -D FOO) # -D becomes "", then ignore
```

* \<target\> : the name of the target object. Most of the time this is either an executable or a library.
* PUBLIC : means that the definitions will be visible to the target object and to any targets that depend on it.

Specifies compile definitions to pass to the code when compiling.

Repeated calls for the same \<target\> append items in the order called.

```
target_compile_options(<target> [BEFORE] <PUBLIC | PRIVATE | INTERFACE> [item1 ...])
```

* \<target\> : the name of the target object. Most of the time this is either an executable or a library.
* \[BEFORE\]: if specified, the content will be prepended to the property instead of being appended.
* PUBLIC : means that the options will be used by the target object and by targets that depend on it.

Adds options to the `COMPILE_OPTIONS` or `INTERFACE_COMPILE_OPTIONS` target properties.

The final set of options used for a target is constructed by accumulating options from the current target and the usage requirements of its dependencies. The set of options is de-duplicated to avoid repetition.

```
target_compile_features(<target> <PUBLIC | PRIVATE | INTERFACE> [feature ...])
```

* \<target\> : the name of the target object. Most of the time this is either an executable or a library.
* PUBLIC : means that the features will be used by the target object and by targets that depend on it.

Specifies compiler features required when compiling a given target. If the feature is not listed in the `CMAKE_C_COMPILE_FEATURES`, `CMAKE_CUDA_COMPILE_FEATURES`, or `CMAKE_CXX_COMPILE_FEATURES` variables, then an error will be reported by CMake. If the use of the feature requires an additional compiler flag, such as `-std=gnu++11`, the flag will be added automatically.
