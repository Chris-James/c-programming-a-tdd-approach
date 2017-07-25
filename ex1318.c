// C Programming: A Modern Approach
// Chapter 13, Exercise 18
//
// Write the following function:
//
// ```c
// void remove_filename(char *url);
// ```
//
// `url` points to a string containing a URL (Uniform Resource Locator) that ends
// with a file name (such as "http://www.knking.com/index.html"). The function
// should modify the string by removing the file name and the preceding slash.
// (In this example, the result will be "http://www.knking.com".) Incorporate the
// "search for the end of string" idiom into your function. _HINT:_ Have the
// function replace the last slash in the string by a null character.

void remove_filename(char * url);

// Include test system and unit tests
#include "headers/greatest.h"
#include "tests/ex1318.h"

int main(int argc, char ** argv) {

  GREATEST_MAIN_BEGIN();
  RUN_TEST(should_handle_simple_url);
  RUN_TEST(should_handle_complex_url);
  GREATEST_MAIN_END();

  return 0;
}

void remove_filename(char * url) {
  // Write your code here.
}
