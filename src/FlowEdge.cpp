//
// Created by Admin on 5/17/2023.
//
#include "../Header/FlowEdge.hpp"
FlowEdge::FlowEdge(int u, int v, int c) : u(u), v(v), c(c), f(0){};

int FlowEdge::from() const {
    return u;
}

int FlowEdge::to() const {
    return v;
}

int FlowEdge::getCapacity() const {
    return c;
}

int FlowEdge::getFlow() const {
    return f;
}

int FlowEdge::other(int vertex) const {
    if(vertex == u) return v;
    if(vertex == v) return u;
    return -1;
}
///Đoạn này cũng là mạng thặng dư

int FlowEdge::residualCapacityTo(int vertex) const {
    if(vertex == u) return f;
    else if (vertex == v) return c-f;
    return -1;
}

void FlowEdge::addResidualFlowTo(int vertex, int delta) {
    if (vertex == u) f -= delta;
    else if (vertex == v) f += delta;
}