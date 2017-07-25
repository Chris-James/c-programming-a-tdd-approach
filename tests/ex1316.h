TEST should_handle_null_string(void) {
  char string[] = "";
  int spaces = count_spaces(string);
  ASSERT_EQm("count_spaces should return 0", 0, spaces);
  PASS();
}

TEST should_handle_no_spaces(void) {
  char string[] = "nospaces";
  int spaces = count_spaces(string);
  ASSERT_EQm("count_spaces should return 0", 0, spaces);
  PASS();
}

TEST should_handle_leading_spaces(void) {
  char string[] = "    hackers";
  int spaces = count_spaces(string);
  ASSERT_EQm("count_spaces should return 4", 4, spaces);
  PASS();
}

TEST should_handle_intermixed_spaces(void) {
  char string[] = "dade kate joey cereal nikon phreak plague";
  int spaces = count_spaces(string);
  ASSERT_EQm("count_spaces should return 6", 6, spaces);
  PASS();
}

TEST should_handle_trailing_spaces(void) {
  char string[] = "hackers        ";
  int spaces = count_spaces(string);
  ASSERT_EQm("count_spaces should return 8", 8, spaces);
  PASS();
}

TEST should_handle_non_alphas(void) {
  char string[] = " Type 'cookie', you idiot! ";
  int spaces = count_spaces(string);
  ASSERT_EQm("count_spaces should return 5", 5, spaces);
  PASS();
}

SUITE(should_count_spaces) {
  RUN_TEST(should_handle_null_string);
  RUN_TEST(should_handle_no_spaces);
  RUN_TEST(should_handle_leading_spaces);
  RUN_TEST(should_handle_intermixed_spaces);
  RUN_TEST(should_handle_trailing_spaces);
  RUN_TEST(should_handle_non_alphas);
}

// Add definitions that need to be in the test runner's main file.
GREATEST_MAIN_DEFS();
