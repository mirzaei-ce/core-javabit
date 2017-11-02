Compiling/running unit tests
------------------------------------

Unit tests will be automatically compiled if dependencies were met in `./configure`
and tests weren't explicitly disabled.

After configuring, they can be run with `make check`.

To run the javabitd tests manually, launch `src/test/test_javabit`.

To add more javabitd tests, add `BOOST_AUTO_TEST_CASE` functions to the existing
.cpp files in the `test/` directory or add new .cpp files that
implement new BOOST_AUTO_TEST_SUITE sections.

To run the javabit-qt tests manually, launch `src/qt/test/test_javabit-qt`

To add more javabit-qt tests, add them to the `src/qt/test/` directory and
the `src/qt/test/test_main.cpp` file.
