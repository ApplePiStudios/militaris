find_library(militiaris "militiaris.lib" "libmilitiaris.a")
include_directories("../core/include/" "../ext/SDL/include/")
link_libraries(SDL3::SDL3 militiaris)
add_executable(example "main.cpp")