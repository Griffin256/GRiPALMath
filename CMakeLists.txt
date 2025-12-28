cmake_minimum_required(VERSION 3.20)
project(SimpleMathLib VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

# ------------------------------
# Option: build shared or static library
# ------------------------------
option(BUILD_SHARED_LIBS "Build SimpleMath as a shared library" OFF)

# ------------------------------
# Library
# ------------------------------
add_library(SimpleMath
    src/math_operations.cpp
    src/advanced_math.cpp
    src/statistics.cpp
)

target_include_directories(SimpleMath
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# ------------------------------
# Optional example build (MathApp)
# ------------------------------
option(BUILD_EXAMPLES "Build example executables" OFF)
if(BUILD_EXAMPLES)
    add_subdirectory(example)
endif()

# ------------------------------
# Installation rules
# ------------------------------
install(TARGETS SimpleMath
        EXPORT SimpleMathTargets
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
        INCLUDES DESTINATION include
)

install(DIRECTORY include/ DESTINATION include)

# ------------------------------
# Export targets for find_package
# ------------------------------
install(EXPORT SimpleMathTargets
        FILE SimpleMathTargets.cmake
        NAMESPACE SimpleMath::
        DESTINATION lib/cmake/SimpleMath
)

# Create package config files
include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/SimpleMathConfigVersion.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion
)

install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/SimpleMathConfigVersion.cmake"
    DESTINATION lib/cmake/SimpleMath
)

# ------------------------------
# Notes for users:
# - Build library only (default):
#     cmake -B build
#     cmake --build build
#     sudo cmake --install build
# - Build library + example:
#     cmake -B build -DBUILD_EXAMPLES=ON
#     cmake --build build
# - Use in other projects:
#     find_package(SimpleMath 1.0 REQUIRED)
#     target_link_libraries(MyApp PRIVATE SimpleMath::SimpleMath)
# ------------------------------
