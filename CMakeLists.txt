# CMakeList.txt: проект CMake для test; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("school-code")
 #-Fa

set(CMAKE_C_FLAGS "-Od -Wall -wd4710")

# Добавьте источник в исполняемый файл этого проекта.
aux_source_directory(. SOURCES)
add_executable(school-code ${SOURCES})



 
