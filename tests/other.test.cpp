#include <catch.hpp>
#include "string_utils.h"

TEST_CASE("Succesful return", "[ehhhh]") {
	REQUIRE(whatever() == 1);
}

TEST_CASE("Unuccesful return", "[ehhhh]") {
	REQUIRE_FALSE(whatever() == 1);
}

SCENARIO("two") {
    WHEN("three") {
      REQUIRE(whatever() == 1);
    }
}
