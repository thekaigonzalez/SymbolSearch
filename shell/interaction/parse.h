#include <string>
#include <vector>
#include <iostream>
#include <sstream>

std::vector<std::string>split(std::string __abc1, char __abc2)
{
    std::vector<std::string>ARGS{};
    std::stringstream sst;
    sst << __abc1;
    while (getline(sst, __abc1, __abc2))
    {
        ARGS.push_back(__abc1);
    }
    return ARGS;
}