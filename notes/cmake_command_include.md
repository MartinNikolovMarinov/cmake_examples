```
include(<file|module> [OPTIONAL] [RESULT_VARIABLE <var>] [NO_POLICY_SCOPE])
```
* \<file|module\> : the path to the file or module.
* \[OPTIONAL\] : after setting, no error will be raised if the file does not exist.
* \[RESULT_VARIABLE\] : will set \<var\> to the full filename, or NOTFOUD. Not generally used.
* \[NO_POLICY_SCOPE\] : is module specific. Not generally used.

This command loads and runs CMake code from a specific file.

