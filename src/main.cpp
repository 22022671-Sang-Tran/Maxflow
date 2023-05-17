#include <iostream>
#include"../Header/FlowEdge.hpp"
using namespace std;
int main() {
    FlowEdge e(0,1,2);
    cout<<e.from()<<" "<<e.to()<<" "<<e.getCapacity();
}
