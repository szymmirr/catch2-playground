#include <string>
#include "Reverse.h"
#include "Palindrome.h"

#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"


TEST_CASE( "is_palindrome" )
{
    std::string pal = "mom";
    Palindrome pally;

    REQUIRE( pally.isPalindrome(pal) == true );

}
