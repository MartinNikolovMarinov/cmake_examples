```
target_link_libraries(<target> [PUBLIC | PRIVATE | INTERFACE] <library>)
```

* \<target\> : the name of the target object. Most of the time this is either an executable or a library.
* \<library\> : the last parameter is the library to link with. Can statically or dynamically link depending on how the library was created with `add_library`.
* The second parameter is for visibility:
	* PUBLIC : means that the symbols in \<library\>, and any of the symbols in libraries that it depends on, are visible to the target object specified with \<target\>

Used for linking a library to an executable. This command **must** come after the target object, specified with \<target\>, has been created.
