//
// Created by Admin on 5/17/2023.
//

#ifndef UNTITLED_FORD_FULKERSON_HPP
#define UNTITLED_FORD_FULKERSON_HPP
#include <queue>
#include <vector>
#include <limits.h>
#include "FlowEdge.hpp"
#include "FlowNetwork.hpp"
using namespace std;

class Ford_Fulkerson{
private:
    vector<bool> marked;
    vector<FlowEdge> edgeTo;
    int value;
public:
    Ford_Fulkerson() = default;
    Ford_Fulkerson(FlowNetwork G, int s, int t);
};

#endif //UNTITLED_FORD_FULKERSON_HPP
