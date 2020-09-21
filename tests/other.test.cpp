#include <catch.hpp>
#include "string_utils.h"

TEST_CASE("Succesful return", "[ehhhh]") {
	REQUIRE(whatever() == 0);
}

TEST_CASE("Unuccesful return", "[ehhhh]") {
	REQUIRE_FALSE(whatever() == 1);
}

SCENARIO("two") {
    WHEN("three") {
      REQUIRE(whatever() == 0);
    }
}
