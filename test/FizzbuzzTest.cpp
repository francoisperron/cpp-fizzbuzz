#include "gtest/gtest.h"
#include "Fizzbuzz.h"

TEST(FizzbuzzTest, ReturnsFizzForMultipleOfThree) {
    std::string three = fizzbuzzOf(3);
    EXPECT_EQ(three, "Fizz");

    std::string six = fizzbuzzOf(6);
    EXPECT_EQ(six, "Fizz");
}

TEST(FizzbuzzTest, ReturnsBuzzForMultipleOfFive) {
    std::string five = fizzbuzzOf(5);
    EXPECT_EQ(five, "Buzz");

    std::string ten = fizzbuzzOf(10);
    EXPECT_EQ(ten, "Buzz");
}

TEST(FizzbuzzTest, ReturnsFizzBuzzForMultipleOfThreeAndFive) {
    std::string fifteen = fizzbuzzOf(15);
    EXPECT_EQ(fifteen, "FizzBuzz");

    std::string thirty = fizzbuzzOf(30);
    EXPECT_EQ(thirty, "FizzBuzz");
}

TEST(FizzbuzzTest, ReturnsTheValueAsAStringOtherwise) {
    std::string two = fizzbuzzOf(2);
    EXPECT_EQ(two, "2");

    std::string seven = fizzbuzzOf(7);
    EXPECT_EQ(seven, "7");
}
