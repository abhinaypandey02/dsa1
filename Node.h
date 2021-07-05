//
// Created by abhinay on 05/07/21.
//

#ifndef DSASSIGNMENT_NODE_H
#define DSASSIGNMENT_NODE_H

#include "Link.h"
class Link;
class Node{
    int payload;
    Node *prev,*next;
    Link *firstIn,*lastIn,*firstOut,*lastOut;
public:
    Node *getPrev() const;

    void setPrev(Node *prev);

    Node *getNext() const;

    void setNext(Node *next);

    Link *getFirstIn() const;

    void setFirstIn(Link *firstIn);

    Link *getLastIn() const;

    void setLastIn(Link *lastIn);

    Link *getFirstOut() const;

    void setFirstOut(Link *firstOut);

    Link *getLastOut() const;

    void setLastOut(Link *lastOut);

    void setPayload(int payload);

    int getPayload() const;

    Node(int);

    void printIncomingLinks();
    void printOutgoingLinks();

};

#endif //DSASSIGNMENT_NODE_H
