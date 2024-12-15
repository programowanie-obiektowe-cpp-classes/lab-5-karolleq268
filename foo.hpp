#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> wektor;

    for (auto& e : people) {
        e.birthday();
        if(e.isMonster()) 
            wektor.push_back('n');
        else 
            wektor.push_back('y');
    }
    std::reverse(wektor.begin(), wektor.end());
    return wektor;
}
