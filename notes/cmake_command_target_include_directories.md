```
target_include_directories(<target> [SYSTEM] [AFTER | BEFORE]
                           <PUBLIC | PRIVATE | INTERFACE> [items1...])
```

* \<target\> : the name of the target object. Most of the time this is either an executable or a library.
* \[SYSTEM\] : if specified, the compiler will be told the directories are meant as system include directories on some platforms. This may have effects such as suppressing warnings or skipping the contained headers in dependency calculations. Additionally, system include directories are searched after normal include directories regardless of the order specified.
* PUBLIC : means that the includes will be used by the target object and by targets that depend on it.


Repeated calls for the same \<target\> append items in the order called.

Specifies include directories to use when compiling a given target.
