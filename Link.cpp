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

void Link::setFrom(Node *from) {
    Link::from = from;
}

Node *Link::getTo() const {
    return to;
}

void Link::setTo(Node *to) {
    Link::to = to;
}

Link *Link::getNext() const {
    return next;
}

void Link::setNext(Link *next) {
    Link::next = next;
}

Link *Link::getPrev() const {
    return prev;
}

void Link::setPrev(Link *prev) {
    Link::prev = prev;
}

Link *Link::getPrevInFrom() const {
    return prevInFrom;
}

void Link::setPrevInFrom(Link *prevInFrom) {
    Link::prevInFrom = prevInFrom;
}

Link *Link::getPrevInTo() const {
    return prevInTo;
}

void Link::setPrevInTo(Link *prevInTo) {
    Link::prevInTo = prevInTo;
}

Link *Link::getNextInTo() const {
    return nextInTo;
}

void Link::setNextInTo(Link *nextInTo) {
    Link::nextInTo = nextInTo;
}

Link *Link::getNextInFrom() const {
    return nextInFrom;
}

void Link::setNextInFrom(Link *nextInFrom) {
    Link::nextInFrom = nextInFrom;
}
//Abhinay Pandey LCI2020012
