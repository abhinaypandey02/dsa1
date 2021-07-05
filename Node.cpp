//
// Created by abhinay on 05/07/21.
//
#include "Node.h"
#include "Link.h"
#include "iostream"

Node::Node(int payload) : payload(payload) {}

int Node::getPayload() const {
    return payload;
}

void Node::setPayload(int payloadParam) {
    Node::payload = payloadParam;
}

Node *Node::getPrev() const {
    return prev;
}

void Node::setPrev(Node *prev) {
    Node::prev = prev;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

Link *Node::getFirstIn() const {
    return firstIn;
}

void Node::setFirstIn(Link *firstIn) {
    Node::firstIn = firstIn;
}

Link *Node::getLastIn() const {
    return lastIn;
}

void Node::setLastIn(Link *lastIn) {
    Node::lastIn = lastIn;
}

Link *Node::getFirstOut() const {
    return firstOut;
}

void Node::setFirstOut(Link *firstOut) {
    Node::firstOut = firstOut;
}

Link *Node::getLastOut() const {
    return lastOut;
}

void Node::setLastOut(Link *lastOut) {
    Node::lastOut = lastOut;
}

void Node::printIncomingLinks() {
    for(Link* link=this->getFirstIn();link;link=link->getNextInTo()){
        std::cout<<"Node "<<this->getPayload()<<" <- "<<link->getFrom()->getPayload()<<std::endl;
    }

}

void Node::printOutgoingLinks() {
    for(Link* link=this->getFirstOut();link;link=link->getNextInFrom()){
        std::cout<<"Node "<<this->getPayload()<<" -> "<<link->getTo()->getPayload()<<std::endl;
    }

}

