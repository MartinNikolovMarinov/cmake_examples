**CMake is a build system generator** not a build system!

It can generate Makefiles but it can also generate other build systems, like ninja files.

Organization of a CMake project

* **Directories** - that contain a CMakeLists.txt are the entry point for the build system generator. Subdirectories may be added with `add_subdirectory()` and must contain a CMakeLists.txt too.
* **Scripts** - are `<script>.cmake` files that can be executed with `cmake -P <script>.cmake`. Not all CMake commands supported.
* **Modules** - are `<script>.cmake` files located in the `CMAKE_MODULE_PATH`. Modules can be loaded with `include()` command.

Commands syntax is `command_name(space separated list of strings)` and they can be 3 types:
* **Script commands** change state of the command processor, i.e. set variables and change behavior of commands.
* **Project commands** create/modify build targets.
