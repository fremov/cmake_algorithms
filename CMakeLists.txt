cmake_minimum_required(VERSION 3.16)
project(template_cmake)

set(CMAKE_CXX_STANDARD 20)

# Пути к файлам исходного кода
set(SOURCES
        src/main.cpp
         
)
# Пути к заголовочным файлам
set(HEADERS
        include/header.h
        
)


add_executable(template_cmake ${SOURCES} ${HEADERS})

# Пути для поиска заголовочных файлов
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
