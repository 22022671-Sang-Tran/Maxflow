//
// Created by Admin on 5/17/2023.
//

#ifndef FLOWNETWORK_HPP
#define FLOWNETWORK_HPP
#include<vector>
#include "../Header/FlowEdge.hpp"
using namespace std;

class FlowNetwork{
private:
    int V,E;
    int s,t;
    vector<vector<FlowEdge>> adj;
public:
    FlowNetwork() = default;
    FlowNetwork(int V, int s, int t);
    int nV() const;
    int nE() const;
    void addEdge(int u, int v, int c);
    const vector<FlowEdge> &G(int vertex) const;
};

#endif //FLOWNETWORK_HPP
