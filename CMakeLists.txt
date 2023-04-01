cmake_minimum_required(VERSION 3.24)
project(clox C)

set(CMAKE_C_STANDARD 11)

add_executable(clox
  main.c
  common.h
  chunk.h
  chunk.c
  memory.h
  debug.h
  debug.c
  memory.c
  value.h
  value.c
  vm.c
  compiler.h
  compiler.c
  scanner.h
  scanner.c
  object.c
  object.h
  compiler.c
  table.h
  table.c
)
