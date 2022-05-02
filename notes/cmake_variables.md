```
set(<variable> <value>... [PARENT_SCOPE])
set(<variable> <value>... CACHE <type> <docstring> [FORCE])
set(ENV{<variable>} [<value>])
```

There are three kinds of variables:

* Normal which are for internal in-scope use only.
* Cache variables can be set from outside the project.
* Environment variables.

Language rules:

* Variables expand with ${}.
* All variables are strings, even booleans, and lists are ;-separated strings !
* Unset variables expand to empty strings !
* NORMAL and CACHE variables can share names. **DON"T EVER DO THAT!**

Example of passing a cache variable when running cmake:

`cmake .. -DCacheVariable:STRING=String\ with\ white\ spaces`

**When you set a cache variable you might need to delete CMakeCache.txt to reset it to a default value.**

