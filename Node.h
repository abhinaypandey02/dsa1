//
// Created by abhinay on 05/07/21.
//

#ifndef DSASSIGNMENT_NODE_H
#define DSASSIGNMENT_NODE_H

#include "Link.h"
//Abhinay Pandey LCI2020012

class Link;
class Node{
    int payload;
    Node *prev{},*next{};
    Link *firstIn{},*lastIn{},*firstOut{},*lastOut{};
public:

    void setPrev(Node *prevParam);

    Node *getNext() const;

    void setNext(Node *nextParam);

    Link *getFirstIn() const;

    void setFirstIn(Link *firstInParam);

    Link *getLastIn() const;

    void setLastIn(Link *lastInParam);

    Link *getFirstOut() const;

    void setFirstOut(Link *firstOutParam);

    Link *getLastOut() const;

    void setLastOut(Link *lastOutParam);

    int getPayload() const;

    Node(int);

    void printIncomingLinks() const;
    void printOutgoingLinks() const;

};

#endif //DSASSIGNMENT_NODE_H
//Abhinay Pandey LCI2020012
