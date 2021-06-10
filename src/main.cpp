#include <iostream>
#include <vector>
#include <unordered_map>
#include <array>

#include "system.hpp"
#include "output.hpp"
#include "random.hpp"
#include "timer.hpp"

void outputTest();
void randomTest();
void timerTest();
void systemTest();

int main(int argc, char **argv)
{
    outputTest();
    randomTest();
    timerTest();
    systemTest();

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

void timerTest()
{
    TIMER::Timer timer;

    timer.start();
    timer.stop();

    std::cout << "timer: "
        << timer.count<std::chrono::nanoseconds>()
        << std::endl;
}

void systemTest()
{
    std::cout << "echo \"echo\"\n"
        << std::flush;
    SYSTEM::system("echo"
        , "\"echo\"");
}