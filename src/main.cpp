#include <iostream>
#include <vector>
#include <unordered_map>
#include <array>

#include "output.hpp"
#include "random.hpp"

void outputTest();
void randomTest();

int main(int argc, char **argv)
{
    outputTest();
    randomTest();

    return 0;
}

void outputTest()
{
    std::vector<int> vec{0, 1, 2};
    std::unordered_map<int, int> map{{0, 1}, {2, 3}, {4, 5}};
    std::array<int, 3> arr{0, 1, 2};

    std::cout << "vec: " << vec
        << "\nmap: " << map
        << "\narr: " << arr
        << std::endl;
}

void randomTest()
{
    for(int i{0};
        i < 3;
        i++)
        std::cout << "random: "
            << RANDOM::RAND.random()
            << std::endl;
}