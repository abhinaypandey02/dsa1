//
// Created by abhinay on 05/07/21.
//

#ifndef DSASSIGNMENT_LINK_H
#define DSASSIGNMENT_LINK_H
#include "Node.h"
//Abhinay Pandey LCI2020012

class Node;
class Link {
public:

    void setPrevInFrom(Link *prevInFrom);


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

    Node *getTo() const;

    void setNext(Link *next);

    void setPrev(Link *prev);
};


#endif //DSASSIGNMENT_LINK_H
//Abhinay Pandey LCI2020012
