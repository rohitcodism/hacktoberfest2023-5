// string permutation in cpp

#include <iostream>
#include <algorithm>

int main() {
    std::string str = "abc";

    // Sort the string to make it the starting permutation
    std::sort(str.begin(), str.end());

    do {
        std::cout << str << std::endl;
    } while (std::next_permutation(str.begin(), str.end()));

    return 0;
}
