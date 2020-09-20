#define CATCH_CONFIG_MAIN
#include "hello.h"
#include "catch.hpp"


TEST_CASE("Succesful return", "[whatever]") {
	REQUIRE(hello() == 1);
}

TEST_CASE("Unsuccesful return", "[whatever]") {
	REQUIRE_FALSE(hello() == 1);
}
