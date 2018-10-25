cmake_minimum_required(VERSION 3.12)
project(AzureScript)

set(CMAKE_CXX_STANDARD 14)

add_executable(AzureScript src/main.cpp src/lex_analysis.cpp src/lex_public.h src/lex_private.h src/common.h src/syn_analysis.cpp src/syn_public.h src/syn_private.h)