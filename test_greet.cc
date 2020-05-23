#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <sstream>

#include "greet.h"

TEST_CASE("It should greet the user in the morning") {
  int hour_of_day = 6;
  std::stringstream output_stream;

  greet(hour_of_day, output_stream);

  REQUIRE(output_stream.str() == "Good morning");
}

TEST_CASE("It should greet the user in the afternoon") {
  int hour_of_day = 13;
  std::stringstream output_stream;

  greet(hour_of_day, output_stream);

  REQUIRE(output_stream.str() == "Good afternoon");
}

TEST_CASE("It should greet the user in the evening") {
  int hour_of_day = 18;
  std::stringstream output_stream;

  greet(hour_of_day, output_stream);

  REQUIRE(output_stream.str() == "Good evening");
}
