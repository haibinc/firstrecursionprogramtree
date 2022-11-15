//
// Created by Haibin Cao on 11/14/22.
//
#include "halfTree.h"

void halfTree(int stars, int spaces)
{
    if(stars == 1)
    {
        std::cout << std::string(spaces, ' ') << std::string(stars, '*') << std::endl;
    }
    else
    {
        halfTree(stars/2, spaces+(stars/2));
        std::cout << std::string(spaces, ' ') << std::string(stars, '*') << std::endl;
    }
}
