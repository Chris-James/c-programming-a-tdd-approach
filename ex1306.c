// C Programming: A Modern Approach
// Chapter 13, Exercise 6
//
// Write a function named `censor` that modifies a string by replacing every
// occurence of 'foo' with 'xxx'. For example, the string "food fool" would
// become "xxxd xxxl". Make the function as short as possible without sacrificing
// clarity.

void censor(char * string);

// Include test system and unit tests
#include "headers/greatest.h"
#include "tests/ex1306.h"

int main(int argc, char ** argv) {

  GREATEST_MAIN_BEGIN();
  RUN_TEST(should_replace_foo);
  RUN_TEST(should_ignore_fo);
  RUN_TEST(should_ignore_oo);
  GREATEST_MAIN_END();

  return 0;
}

void censor(char * string) {
  // Write your code here.
}
