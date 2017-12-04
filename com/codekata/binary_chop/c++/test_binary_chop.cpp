#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

//Reference: https://github.com/catchorg/Catch2/blob/master/docs/tutorial.md#top

#include "catch.hpp"
#include "chop.hpp"
#include <vector>

std::vector<int> EMPTY_SET = {};
std::vector<int> SINGLETON_SET = {1};
std::vector<int> THREE_ELEMENT_SET = {1, 3, 5};
std::vector<int> FOUR_ELEMENT_SET = {1, 3, 5, 7};

TEST_CASE( "Empty Data Set" ) {
	REQUIRE(-1 == chop(3, EMPTY_SET));
}


TEST_CASE( "Single Element Data Set" ) {
	REQUIRE(-1 == chop(3, SINGLETON_SET));
	REQUIRE(0 == chop(1, SINGLETON_SET));
	REQUIRE(-1 == chop(3, SINGLETON_SET));
}

TEST_CASE( "Three Element Data Set" ) {
	REQUIRE(0 == chop(1, THREE_ELEMENT_SET));
	REQUIRE(1 == chop(3, THREE_ELEMENT_SET));
	REQUIRE(2 == chop(5, THREE_ELEMENT_SET));
	REQUIRE(-1 == chop(0, THREE_ELEMENT_SET));
	REQUIRE(-1 == chop(2, THREE_ELEMENT_SET));
	REQUIRE(-1 == chop(4, THREE_ELEMENT_SET));
	REQUIRE(-1 == chop(6, THREE_ELEMENT_SET));
}

TEST_CASE( "Four Element Data Set" ) {
	REQUIRE(0 == chop(1, FOUR_ELEMENT_SET));
	REQUIRE(1 == chop(3, FOUR_ELEMENT_SET));
	REQUIRE(2 == chop(5, FOUR_ELEMENT_SET));
	REQUIRE(3 == chop(7, FOUR_ELEMENT_SET));
	REQUIRE(-1 == chop(0, FOUR_ELEMENT_SET));
	REQUIRE(-1 == chop(2, FOUR_ELEMENT_SET));
	REQUIRE(-1 == chop(4, FOUR_ELEMENT_SET));
	REQUIRE(-1 == chop(6, FOUR_ELEMENT_SET));
	REQUIRE(-1 == chop(8, FOUR_ELEMENT_SET));
}
