Imagine Targets as Objects:

* Constructors that create objects:
	* `add_executable()`
	* `add_library()`
* Member variables:
	* Target properties (too many to list).
* Member functions:
	* `get_target_property()`
	* `set_target_properties()`
	* `get_property(TARGET)`
	* `set_property(TARGET)`
	* `target_compile_definitions()`
	* `target_compile_features()`
	* `target_compile_options()`
	* `target_include_directories()`
	* `target_link_libraries()`
	* `target_sources()`

**Prefer to operate on targets instead of using global commands!** like:

* `add_compile_options()`
* `include_directories()`
* `link_directories()`
* `link_libraries()`
