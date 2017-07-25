// C Programming: A Modern Approach
// Chapter 13, Exercise 16
//
// Use the techniques of Section 13.6 to condense the `count_spaces` function of
// Section 13.4. In particular, replace the `for` statement by a `while` loop.

int count_spaces(const char * s);

// Include test system and unit tests
#include "headers/greatest.h"
#include "tests/ex1316.h"

int main(int argc, char ** argv) {

  GREATEST_MAIN_BEGIN();
  RUN_SUITE(should_count_spaces);
  GREATEST_MAIN_END();

  return 0;
}

int count_spaces(const char * s) {
  // Write your code here.
}
