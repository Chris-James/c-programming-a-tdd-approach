TEST should_handle_simple_domain(void) {
  char test_domain[] = "knking.com";
  char result[33];
  build_index_url(test_domain, result);
  ASSERT_STR_EQm("build_index_url should return \"http://www.knking.com/index.html\"", "http://www.knking.com/index.html", result);
  PASS();
}

// Add definitions that need to be in the test runner's main file.
GREATEST_MAIN_DEFS();
