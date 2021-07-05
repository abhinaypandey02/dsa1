//
// Created by abhinay on 05/07/21.
//

#ifndef DSASSIGNMENT_LINK_H
#define DSASSIGNMENT_LINK_H
#include "Node.h"
class Node;
class Link {
public:
    Link *getPrevInFrom() const;

    void setPrevInFrom(Link *prevInFrom);

    Link *getPrevInTo() const;

    void setPrevInTo(Link *prevInTo);

    Link *getNextInTo() const;

    void setNextInTo(Link *nextInTo);

    Link *getNextInFrom() const;

    void setNextInFrom(Link *nextInFrom);

private:

    Node *from,*to;
    Link *next,*prev,*prevInFrom,*prevInTo,*nextInTo,*nextInFrom;
public:
    Link(Node*,Node*);

    Node *getFrom() const;

    void setFrom(Node *from);

    Node *getTo() const;

    void setTo(Node *to);

    Link *getNext() const;

    void setNext(Link *next);

    Link *getPrev() const;

    void setPrev(Link *prev);
};


#endif //DSASSIGNMENT_LINK_H
