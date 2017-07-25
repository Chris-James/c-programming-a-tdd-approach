// C Programming: A Modern Approach
// Chapter 13, Exercise 13
//
// Write the following function:
//
// ```c
// void build_index_url(const char * domain, char * index_url);
// ```
//
// `domain` points to a string containing an Internet domain, such as "knking.com".
// The function should add "http://www." to the beginning of this string and
// "/index.html" to the end of the string, storing the result in the string
// pointed to by `index_url`. (In this example, the result will be
// "http://www.knking.com/index.html".) You may assume that `index_url` points
// to a variable that is long enough to hold the resulting string. Keep the
// function as simple as possible by having it use the `strcat` and `strcpy`
// functions.

void build_index_url(const char * domain, char * index_url);

// Include test system and tests
// Place directives and prototypes above these statements
#include "headers/greatest.h"
#include "tests/ex1313.h"

int main(int argc, char ** argv) {

  GREATEST_MAIN_BEGIN();
  RUN_TEST(should_handle_simple_domain);
  GREATEST_MAIN_END();

  return 0;
}

void build_index_url(const char * domain, char * index_url) {
  // Write your code here.
}
