//
// Created by abhinay on 05/07/21.
//
#include "Graph.h"
#include "Node.h"
#include "Link.h"
#include "iostream"
Node* Graph::addNode(int payload) {
    Node *node=new Node(payload);
    if(this->getFirstNode()== nullptr){
        this->setFirstNode(node);
        this->setLastNode(node);
    } else {
        this->getLastNode()->setNext(node);
        node->setPrev(this->getLastNode());
        this->setLastNode(node);
    }
    return node;
}

Node *Graph::getFirstNode() const {
    return firstNode;
}

void Graph::setFirstNode(Node *firstNode) {
    Graph::firstNode = firstNode;
}

Node *Graph::getLastNode() const {
    return lastNode;
}

void Graph::setLastNode(Node *lastNode) {
    Graph::lastNode = lastNode;
}

Link *Graph::getFirstLink() const {
    return firstLink;
}

void Graph::setFirstLink(Link *firstLink) {
    Graph::firstLink = firstLink;
}

Link *Graph::getLastLink() const {
    return lastLink;
}

void Graph::setLastLink(Link *lastLink) {
    Graph::lastLink = lastLink;
}

Link *Graph::addLink(Node * from, Node * to) {
    Link* link=new Link(from,to);
    if(this->getFirstLink()== nullptr){
        this->setFirstLink(link);
        this->setLastLink(link);
    } else {
        this->getLastLink()->setNext(link);
        link->setPrev(this->getLastLink());
        this->setLastLink(link);
    }
    return link;
}

void Graph::showNodes() {
    for(Node* n=firstNode;n;n=n->getNext()){
        std::cout<<"Node with data "<<n->getPayload()<<std::endl;
        std::cout<<"Incoming Links:"<<std::endl;
        n->printIncomingLinks();
        std::cout<<"Outgoing Links:"<<std::endl;
        n->printOutgoingLinks();
    }
}
