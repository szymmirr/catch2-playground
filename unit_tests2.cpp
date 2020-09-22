#include <string>
#include "Reverse.h"
#include "Palindrome.h"

#include "catch2/catch.hpp"

TEST_CASE( "is_palindrome" )
{
    std::string pal = "mom";
    Palindrome pally;

    REQUIRE( pally.isPalindrome(pal) == true );

}
