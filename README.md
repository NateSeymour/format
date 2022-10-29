# format

Exceedingly simple, header-only string formatting library for C++. Takes arguments just like `printf` and returns the formatted data as an `std::string`.

## Usage

```c++
#include <iostream>
#include <nys/format.h>

int main()
{
    std::string my_string = nys::format("Hello, %s!", "World");
    
    std::cout << my_string << std::endl;
    // Output: Hello, World!
}
```

## Including this library in your project

CMake's FetchContent is the recommended method of including this library in your project.

```cmake
include(FetchContent)

FetchContent_Declare(
        format
        GIT_REPOSITORY https://github.com/NateSeymour/format.git
        GIT_TAG v1.0.0
)
FetchContent_MakeAvailable(format)

# ...

target_link_libraries(<my_project> PRIVATE format)
```