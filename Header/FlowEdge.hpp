//
// Created by Admin on 5/17/2023.
//

#ifndef UNTITLED_FLOWEDGE_HPP
#define UNTITLED_FLOWEDGE_HPP
#include<bits/stdc++.h>
using namespace std;
class FlowEdge{
private:
    int u,v;
    int c,f;
public:
    FlowEdge() = default;
    FlowEdge(int u, int v, int c);
    int from() const;
    int to() const;
    int getCapacity() const;
    int getFlow() const;
    int other(int vertex) const;
    /// từ đây là phần mạng thặng dư

    int residualCapacityTo(int vertex) const;
    void addResidualFlowTo(int vertex, int delta);

};
#endif //UNTITLED_FLOWEDGE_HPP
