TEST should_replace_foo(void) {
  char test_string[10] = "food fool";
  censor(test_string);
  ASSERT_STR_EQm("censor should return \"xxxd xxxl\"", "xxxd xxxl", test_string);
  PASS();
}

TEST should_ignore_fo(void) {
  char test_string[7] = "fodder";
  censor(test_string);
  ASSERT_STR_EQm("censor should return \"fodder\"", "fodder", test_string);
  PASS();
}

TEST should_ignore_oo(void) {
  char test_string[34] = "pool on the roof must have a leak";
  censor(test_string);
  ASSERT_STR_EQm("censor should return \"pool on the roof must have a leak\"", "pool on the roof must have a leak", test_string);
  PASS();
}

// Add definitions that need to be in the test runner's main file.
GREATEST_MAIN_DEFS();
