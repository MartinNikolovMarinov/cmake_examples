```
add_library(<name> [STATIC | SHARED | MODULE | OBJECT]
            [EXCLUDE_FROM_ALL]
            [source1] [source2 ...])
```

* \<name\> : the name of the target
* The Library Type comes next :
	* **STATIC** a static library.
	* **SHARED** a shared library.
	* **MODULE** a module (plug-in) library. Has noting to do with c++ 20 modules.
	* If omitted, the **BUILD_SHARED_LIBS** variable will be used to decided between **STATIC** and **SHARED**.
* EXCLUDE_FROM_ALL: prevent a top-level make all from building this target.

