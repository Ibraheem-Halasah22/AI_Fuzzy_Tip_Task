cmake_minimum_required(VERSION 3.21)
project(untitled1 C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled1 main.c fuzzification_phase.c rule_eval.c aggregation_and_defuzz.c tip_fuzzy_system.c)
