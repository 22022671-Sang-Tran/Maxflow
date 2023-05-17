//
// Created by Admin on 5/17/2023.
//

#ifndef FORDFULKERSON_HPP
#define FORDFULKERSON_HPP
#include <queue>
#include <vector>
#include <limits.h>
#include "FlowEdge.hpp"
#include "FlowNetwork.hpp"
using namespace std;

class FordFulkerson{
private:
    vector<bool> marked;
    vector<FlowEdge> edgeTo;
    int value;
public:
    FordFulkerson() = default;
    FordFulkerson(FlowNetwork G, int s, int t);
};

#endif //UNTITLED_FORDFULKERSON_HPP
