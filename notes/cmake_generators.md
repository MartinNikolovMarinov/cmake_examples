There are two types of generators that CMake can use:

The difference does not matter very much, but in short:

* Single-config (e.g. Ninja, GNU Makefiles) - need a build directory for each type `build type`.
* Multi-config (e.g. MSVC, Xcode) - do not require a different build directory for each `build type`.

The generator can be specified on the command-line by using the -G flag:

```bash
cmake -GNinja
cmake -G"Unix Makefiles"
cmake -G "Visual Studio 16 2019"

cmake --help # shows which generators are available on the system and which is the default
```

There are two steps that CMake makes:

* Configure: all CMakeLists.txt files are processed
* Generate: the appropriate configuration files are generated.

**Generator expressions work on the Generete step.**

They are a bit of a rare thing, but sometimes using them can't be avoided.

Generator expressions rules:

* They use $\<\> syntax.
* Not evaluated by command interpreter. It is just a string with $\<\>.
* Evaluated during build system generation!
* Not supported in all commands.

Example that can check compiler version:

```
set(IsOldCompiler "$<VERSION_LESS:$<CXX_COMPILER_VERSION>,4.2.0>")
set(X "$<${IsOlderCompiler}:OLD_COMPILER>")
message(STATUS "X = ${X}")
```

Or compiling some code only in Debug mode:
```
# absolute path used inside the generator expression
target_sources(MyTarget "$<$<CONFIG:Debug>:${CMAKE_CURRENT_SOURCE_DIR}/dbgsrc.cpp>")
```
