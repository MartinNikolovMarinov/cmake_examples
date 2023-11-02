This is a self contained example on installing software with cmake. This example works for Linux. It is possible that it will run on other Unix systems but it's not tested.

The example can be ran by executing the following commands:

```bash
mkdir build
cd build
cmake ..
cmake --build .
cmake --install .
```

The created files can then be deleted by running:

```bash
cd build
cmake --build . --target uninstall
```
