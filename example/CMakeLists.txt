find_library(militaris "militaris.lib" "libmilitaris.a")
include_directories("../core/include/" "../ext/SDL/include/")
link_libraries(SDL3::SDL3 militaris)
add_executable(example "main.cpp")