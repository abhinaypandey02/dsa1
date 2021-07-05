//
// Created by abhinay on 05/07/21.
//

#include "Link.h"
#include "Node.h"
//Abhinay Pandey LCI2020012

Link::Link(Node * from, Node * to):from(from),to(to),next(nullptr),prev(nullptr) {
    if(to->getFirstIn()== nullptr){
        to->setFirstIn(this);
        to->setLastIn(this);
    } else {
        to->getLastIn()->setNextInTo(this);
        this->setPrevInTo(to->getLastIn());
        to->setLastIn(this);
    }
    if(from->getFirstOut()== nullptr){
        from->setFirstOut(this);
        from->setLastOut(this);
    } else {
        from->getLastOut()->setNextInFrom(this);
        this->setPrevInFrom(from->getLastOut());
        from->setLastOut(this);
    }
}

Node *Link::getFrom() const {
    return from;
}


Node *Link::getTo() const {
    return to;
}



void Link::setNext(Link *nextParam) {
    Link::next = nextParam;
}

void Link::setPrev(Link *prevParam) {
    Link::prev = prevParam;
}


void Link::setPrevInFrom(Link *prevInFromParam) {
    Link::prevInFrom = prevInFromParam;
}


void Link::setPrevInTo(Link *prevInToParam) {
    Link::prevInTo = prevInToParam;
}

Link *Link::getNextInTo() const {
    return nextInTo;
}

void Link::setNextInTo(Link *nextInToParam) {
    Link::nextInTo = nextInToParam;
}

Link *Link::getNextInFrom() const {
    return nextInFrom;
}

void Link::setNextInFrom(Link *nextInFromParam) {
    Link::nextInFrom = nextInFromParam;
}
//Abhinay Pandey LCI2020012
