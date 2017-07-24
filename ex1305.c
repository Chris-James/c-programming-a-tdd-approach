// C Programming: A Modern Approach
// Exercise 13.5
//
// a) Write a function named `capitalize` that capitalizes all letters in its
// argument. The argument will be a null-terminated string containing arbitrary
// characters, not just letters. Use array subscripting to access the characters
// in the string. _HINT:_ Use the `toupper` function to convert each character
// to uppercase.
//
// b) Rewrite the `capitalize` function, this time using pointer arithmetic to
// access the characters in the string.

#include "headers/greatest.h"

void capitalize(char * string);

#include "tests/ex1305.h"

int main(int argc, char ** argv) {

  GREATEST_MAIN_BEGIN();
  RUN_TEST(should_handle_letters);
  RUN_TEST(should_ignore_numbers);
  RUN_TEST(should_handle_white_space);
  RUN_TEST(should_ignore_non_alphanumerics);
  GREATEST_MAIN_END();

  return 0;
}

void capitalize(char * string) {
  // Write your code here.
}
