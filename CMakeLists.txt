cmake_minimum_required(VERSION 3.17)
project(cpprevise_leetcode)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpprevise_leetcode
        src/0001_two_sum.cpp
        src/0003_longest_substring_without_repeating_characters.cpp
        src/0014_longest_common_prefix.cpp
        src/0027_remove_element.cpp
        src/0217_contains_duplicate.cpp
        src/1470_shuffle_the_array.cpp
        src/1480_kids_with_the_greatest_number_of_candies.cpp
        src/1480_running_sum_of_1D_array.cpp)

add_executable(0001_two_sum src/0001_two_sum.cpp)
add_executable(0026_remove_duplicates_from_sorted_array src/0026_remove_duplicates_from_sorted_array.cpp)
add_executable(0035_search_and_insert src/0035_search_and_insert.cpp)
add_executable(0009_palindrome_number src/0009_palindrome_number.cpp)