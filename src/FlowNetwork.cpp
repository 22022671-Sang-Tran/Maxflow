//
// Created by Admin on 5/17/2023.
//
#include "../Header/FlowNetwork.hpp"
#include "../Header/FlowEdge.hpp"
using namespace std;

FlowNetwork::FlowNetwork(int V,int s, int t) : V(V), E(0), s(s), t(t) {};

int FlowNetwork::nV() const {
    return V;
}

int FlowNetwork::nE() const {
    return E;
}

void FlowNetwork::addEdge(int u, int v, int c) {
    FlowEdge flowEdge(u,v,c);
    adj[u].push_back(flowEdge);
    E++;
}

const vector<FlowEdge> &FlowNetwork::G(int vertex) const {
    return adj[vertex];
}