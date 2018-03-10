cmake_minimum_required(VERSION 3.9)
project(ptrace C)

set(CMAKE_C_STANDARD 99)

add_executable(ptrace main.c prog_cb.c underworld_cb.c bp_handler.c debug_functions.c debug_primes.c my_ptrace.h)