The test suite in the [https://github.com/gcc-builtins/tests/tree/master/test-cases](test-cases) directory contains a list of test cases to test the correct implementation of GCC builtins. It can be used to test, for example, compilers, source-to-source translators, and static analysis tools.

Each test file tests a single builtin. A file name consists of the builtin's name, which is prefixed by a number that indicates how frequently the builtin is used. A low number indicates a frequently-used builtin.

The test cases are written to be as simple as possible, without refactoring common functionality into macros or separate functions to make them easier reusable.
Test cases typically use `assert()` to verify the correct output of the builtin.

The suite is still under development. Many of the test cases are smoke tests and some of them are specific to x86-64.

[![Build Status](https://travis-ci.org/gcc-builtins/tests.svg?branch=master)](https://travis-ci.org/gcc-builtins/tests)
