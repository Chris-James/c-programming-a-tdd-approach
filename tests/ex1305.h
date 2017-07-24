TEST should_handle_letters(void) {
  char test_string[7] = "secret";
  capitalize(test_string);
  ASSERT_STR_EQm("capitalize should return \"SECRET\"", "SECRET", test_string);
  PASS();
}

TEST should_ignore_numbers(void) {
  char test_string[5] = "l33t";
  capitalize(test_string);
  ASSERT_STR_EQm("capitalize should return \"L33T\"", "L33T", test_string);
  PASS();
}

TEST should_handle_white_space(void) {
  char test_string[16] = "hack the planet";
  capitalize(test_string);
  ASSERT_STR_EQm("capitalize should return \"HACK THE PLANET\"", "HACK THE PLANET", test_string);
  PASS();
}

TEST should_ignore_non_alphanumerics(void) {
  char test_string[] = "(r@$h 0\\/3rr!|)e";
  capitalize(test_string);
  ASSERT_STR_EQm("capitalize should return \"(R@$H 0\\/3RR!|)E\"", "(R@$H 0\\/3RR!|)E", test_string);
  PASS();
}
// Add definitions that need to be in the test runner's main file.
GREATEST_MAIN_DEFS();
