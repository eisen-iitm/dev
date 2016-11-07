#include "Graph.h"

//Constructor
Graph::Graph(int nVerts) : nVertices(nVerts){
//    for(auto i=0; i<nVertices; ++i) {
//        std::list<int> *l = new std::list<int>;
//        adjList.push_back(l);
//    }

    adjList = new std::list<int> [nVertices];
}

//Destructor
Graph::~Graph() {
//    for(auto i=0; i<nVertices; ++i)
//        delete adjList[i];
}

void Graph::addEdge(int tail, int head) {
//    std::list<int> *l  = adjList[tail-1];
//    l->push_back(head-1);
    adjList[tail-1].push_back(head-1);
}
