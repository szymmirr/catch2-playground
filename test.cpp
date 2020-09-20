#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "hello.h"

TEST_CASE("Succesful return", "[whatever]") {
	REQUIRE(hello() == 0);
}

TEST_CASE("Unsuccesful return", "[whatever]") {
	REQUIRE_FALSE(hello() == 1);
}
