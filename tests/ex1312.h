TEST should_return_txt(void) {
  char file_extension[4];
  get_extension("memo.txt", file_extension);
  ASSERT_STR_EQm("get_extension should return \"txt\"", "txt", file_extension);
  PASS();
}

TEST should_return_c(void) {
  char file_extension[2];
  get_extension("main.c", file_extension);
  ASSERT_STR_EQm("get_extension should return \"c\"", "c", file_extension);
  PASS();
}

TEST should_return_null(void) {
  char file_extension[1] = "_";
  get_extension("foo", file_extension);
  ASSERT_STR_EQm("get_extension should return \"\\0\"", "\0", file_extension);
  PASS();
}

SUITE(should_handle_file_extensions) {
  RUN_TEST(should_return_txt);
  RUN_TEST(should_return_c);
}

SUITE(should_handle_null_extensions) {
  RUN_TEST(should_return_null);
}

// Add definitions that need to be in the test runner's main file.
GREATEST_MAIN_DEFS();
