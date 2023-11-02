#include <iostream>

#include <example_config.h>

int main(int argc, char const *argv[]) {
    std::cout << argv[0]
              << " v" << EXAMPLE_MAJOR_VERSION << "."
              << EXAMPLE_MINOR_VERSION << "."
              << EXAMPLE_PATCH_VERSION
              << std::endl;
    return 0;
}
