# CMakeList.txt: проект CMake для CMake_Calc_C++; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMake_Calc_C++ "CMake_Calc_C++.cpp" "CMake_Calc_C++.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMake_Calc_C++ PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
