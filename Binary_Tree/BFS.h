/**
    File    : DFS.h
    Author  : Menashe Rosemberg

    Test Breadth First Search - BFS
**/
#ifndef BFS_H
#define BFS_H

#include <iostream>

#include <list>
#include <queue>
#include <vector>

#include "../_lib_/_Lib_Edge.h"
#include "../_lib_/_Lib_QuantVertices.cpp"

using namespace std;

struct BFS {
       BFS(vector<EdgeVV>& Edges);

    void ProcessBFS(VertexType CurrVertex);

    private:
        queue<VertexType> Pool;
        vector<list<VertexType>> Vertices;
};

#endif // BFS_H
