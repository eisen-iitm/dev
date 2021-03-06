#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <list>
    class Graph {
        public:
            Graph(int nVerts);
            ~Graph();

            void addEdge(int tail, int head);
            void BFS(void);
            void DFS(void);
        private:
            int nVertices;
            //std::vector<std::list<int>*> adjList;
            std::list<int>* adjList;    //pointer to array of adj lists
    };

#endif // GRAPH_H
