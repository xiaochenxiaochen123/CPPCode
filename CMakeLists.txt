cmake_minimum_required(VERSION 3.0)
project(code)

# 定义变量
# 静态库生成的路径
set(LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)
# 测试程序生成的路径
set(EXEC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)
# 头文件目录
set(HEAD_PATH ${CMAKE_CURRENT_SOURCE_DIR}/include)

# 可执行程序的名字
set(MyCode myCode)

# 添加子目录
add_subdirectory(src)
add_subdirectory(3rd)
add_subdirectory(myCode)

