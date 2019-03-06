/**
    File    : Dijkastra_run.cpp
    Author  : Menashe Rosemberg

    Greedy - Minimum Spanning Tree - Dijkastra
**/
#include <iostream>
#include "Edge.h"
#include "Dijkastra.h"

int Run_Greedy_Dijkastra() {

    cout << "\n\t\t\t\tGreedy - Minimal Spanning Tree - Dijkastra\n"
         << "\n\nResult expected: 6"
         << "\nResult: ";

    //                         V1 V2 W
    vector<Edge> ListOfEdges {{0, 1, 1},
                              {0, 3, 3},
                              {0, 4, 10},
                              {1, 2, 5},
                              {2, 4, 1},
                              {3, 4, 6},
                              {3, 2, 2}
    };

    Dijkastra D(ListOfEdges);

    if (const uint16_t Result = D.ProcessDijcastra(0, 4);
        Result == numeric_limits<uint16_t>::max())
        cout << "It hasn't connection";
    else
        cout << Result;

    return 0;
}