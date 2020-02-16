#include <iostream>

bool multipleOf(int multiple, int value) { return value % multiple == 0; }

std::string fizzbuzzOf(int value) {
    if (multipleOf(3, value) && multipleOf(5, value)) {
        return "FizzBuzz";
    }
    else if (multipleOf(3, value)) {
        return "Fizz";
    }
    else if (multipleOf(5, value)) {
        return "Buzz";
    }
    else {
        return std::to_string(value);
    }
}