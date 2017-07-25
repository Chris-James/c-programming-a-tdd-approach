TEST should_handle_simple_url(void) {
  char url[] = "http://www.knking.com/index.html";
  remove_filename(url);
  ASSERT_STR_EQ("http://www.knking.com", url);
  PASS();
}

TEST should_handle_complex_url(void) {
  char url[] = "http://www.fizz.com/buzz/bar.js";
  remove_filename(url);
  ASSERT_STR_EQ("http://www.fizz.com/buzz", url);
  PASS();
}

// Add definitions that need to be in the test runner's main file.
GREATEST_MAIN_DEFS();
