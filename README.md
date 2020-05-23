# C++ dependency injection example

The function `greet` (in `greet.h`) takes a reference to an `ostream` as a dependency (i.e. as a
parameter). This allows a different stream to be used in tests to the production code, allowing tests
to check the value written to the stream is correct. Tests (see `test_greet.cc`) pass a
`std::stringstream` (which is basically a fake, since writing to it writes to a string that's stored),
while the production code (see `greeter.cc`) passes the standard output stream, `std::cout`.

The tests have been written using the [Catch2](https://github.com/catchorg/Catch2) framework and the
header is included in this repo.

## Building and running

This has been tested with g++ 10.1.0 on Linux. The included `Makefile` allows
you to compile and run the tests with

```shell
make test
```

To build the sample application, use

```shell
make greeter
```

to create an executable called `greeter`, which can be run with

```shell
./greeter
```

To clean up (i.e. remove the test and application executables), use

```shell
make clean
```

You can also build, test and clean up inside a Docker container using the script `in-docker.sh`.
Note that this will generate executables for Linux only!
