//
// Created by abhinay on 05/07/21.
//

#ifndef DSASSIGNMENT_GRAPH_H
#define DSASSIGNMENT_GRAPH_H
#include "Node.h"
#include "Link.h"
class Graph{
    Node *firstNode,*lastNode;
    Link *firstLink,*lastLink;
public:
    Link *getFirstLink() const;

    void setFirstLink(Link *firstLink);

    Link *getLastLink() const;

    void setLastLink(Link *lastLink);

    Node *getFirstNode() const;

    void setFirstNode(Node *firstNode);

    Node *getLastNode() const;

    void setLastNode(Node *lastNode);

    Node* addNode(int);
    Link* addLink(Node*, Node*);

    void showNodes();



};

#endif //DSASSIGNMENT_GRAPH_H
