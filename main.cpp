#include <iostream>
#include "Graph.h"
#include "Node.h"
#include "Link.h"
//Abhinay Pandey LCI2020012
int main() {
    Graph* g=new Graph();
    Node* node1=g->addNode(1);
    Node* node2=g->addNode(2);
    Node* node3=g->addNode(3);
    Node* node4=g->addNode(4);
    Node* node5=g->addNode(5);
    Node* node6=g->addNode(6);
    Link* link1=g->addLink(node1,node2);
    Link* link2=g->addLink(node2,node3);
    Link* link3=g->addLink(node1,node5);
    Link* link4=g->addLink(node6,node2);
    Link* link5=g->addLink(node1,node4);
    Link* link6=g->addLink(node4,node5);
    Link* link7=g->addLink(node1,node6);
    Link* link8=g->addLink(node6,node2);
    g->showNodes();
    return 0;
}
//Abhinay Pandey LCI2020012
