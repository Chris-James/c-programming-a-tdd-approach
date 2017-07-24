// C Programming: A Modern Approach
// Chapter 13, Exercise 12
//
// Write the following function:
//
// ```c
// void get_extension(const char * file_name, char * extension);
// ```
//
// `file_name` points to a string containing a file name. The function should
// store the extension of the file name in the string pointed to by `extension`.
// For example, if the file name is "memo.txt", the function will store "txt" in
// the string pointed to be `extension`. If the file name doesn't have an
// extension, the function should store an empty string (a single null character)
// in the string pointed to be `extension`. Keep the function as simple as
// possible by having it use the `strlen` and `strcpy` functions.

void get_extension(const char * file_name, char * extension);

// Include test system and unit tests
#include "headers/greatest.h"
#include "tests/ex1312.h"

int main(int argc, char ** argv) {

  GREATEST_MAIN_BEGIN();
  RUN_SUITE(should_handle_file_extensions);
  RUN_SUITE(should_handle_null_extensions);
  GREATEST_MAIN_END();

  return 0;
}

void get_extension(const char * file_name, char * extension) {
  // Write your code here.
}
