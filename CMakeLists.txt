project(Task2)

set(LIB calculator.cpp helloworld.cpp)

add_library(lib STATIC ${LIB})

add_executable(main main.cpp)

target_link_libraries(main lib)
