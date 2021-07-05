//
// Created by abhinay on 05/07/21.
//
#include "Node.h"
#include "Link.h"
#include "iostream"
//Abhinay Pandey LCI2020012

Node::Node(int payload) : payload(payload) {}

int Node::getPayload() const {
    return payload;
}

void Node::setPrev(Node *prevParam) {
    Node::prev = prevParam;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *nextParam) {
    Node::next = nextParam;
}

Link *Node::getFirstIn() const {
    return firstIn;
}

void Node::setFirstIn(Link *firstInParam) {
    Node::firstIn = firstInParam;
}

Link *Node::getLastIn() const {
    return lastIn;
}

void Node::setLastIn(Link *lastInParam) {
    Node::lastIn = lastInParam;
}

Link *Node::getFirstOut() const {
    return firstOut;
}

void Node::setFirstOut(Link *firstOutParam) {
    Node::firstOut = firstOutParam;
}

Link *Node::getLastOut() const {
    return lastOut;
}

void Node::setLastOut(Link *lastOutParam) {
    Node::lastOut = lastOutParam;
}

void Node::printIncomingLinks() const {
    for(Link* link=this->getFirstIn();link;link=link->getNextInTo()){
        std::cout<<"Node "<<this->getPayload()<<" <- "<<link->getFrom()->getPayload()<<std::endl;
    }

}

void Node::printOutgoingLinks() const {
    for(Link* link=this->getFirstOut();link;link=link->getNextInFrom()){
        std::cout<<"Node "<<this->getPayload()<<" -> "<<link->getTo()->getPayload()<<std::endl;
    }

}

//Abhinay Pandey LCI2020012
