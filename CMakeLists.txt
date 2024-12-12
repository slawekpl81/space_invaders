cmake_minimum_required(VERSION 3.10)
project(MyProject)

find_package(raylib REQUIRED)

# Dodajemy katalog include do ścieżek wyszukiwania nagłówków
include_directories(include)

# Zmienne dla lepszej czytelności
set(SOURCE_FILES src/main.cpp src/myLib.cpp src/spaceship.cpp)
set(HEADER_FILES include/myLib.hpp include/spaceship.hpp)

# Dodajemy wykonalny
add_executable(my_program ${SOURCE_FILES} ${HEADER_FILES})


# add_subdirectory(slkLib)
# target_link_libraries(my_program slk_lib)

target_link_libraries(my_program raylib)
