Functions and Macros.

The `function` and `macro` are very similar, but have one main difference - **Functions run in their own scope and Macros run in the caller's scope.**
Calling a macro is equivalent to copying the code and pasting it in place.

Example function -

```
function(NAME_OF_FUNCTION arg1 arg2)
    message(STATUS "1 : ${arg1}, 2 : ${arg2}")
endfunction()

NAME_OF_FUNCTION("first" "second") # calling it results in -- 1 : first, 2 : second
```

A weird note: when a new command replaces an existing command, the old one can be accessed with _ prefix. (oddly)
