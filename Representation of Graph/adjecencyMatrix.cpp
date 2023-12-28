#include <iostream>
using namespace std;

/*
    Adjecency Matrix representation of a bidirectional graph

    V --> {1, 2, 3, 4, 5, 6}
    E --> {1, 2}, {2, 1}, {1, 4}, {4, 1}, {2, 4}, {4, 2},
          {2, 5}, {5, 2}, {3, 5}, {5, 3}, {3, 6}, {6, 3}, {4, 5}, {5, 4}, {6, 6}
*/

const int V = 7;

void printGraph(int display[V][V])
{
    cout << "The adjecency graph is: " << endl;

    for (int i = 1; i < V; i++)
    {
        for (int j = 1; j < V; j++)
        {
            cout << display[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int graph[V][V];

    for (int i = 1; i < V; i++)
    {
        for (int j = 1; j < V; j++)
        {
            graph[i][j] = 0;
        }
    }

    // Establishing edges between the vertexes or nodes

    graph[1][2] = 1;
    graph[2][1] = 1;
    graph[1][4] = 1;
    graph[4][1] = 1;
    graph[2][4] = 1;
    graph[4][2] = 1;
    graph[2][5] = 1;
    graph[5][2] = 1;
    graph[3][5] = 1;
    graph[5][3] = 1;
    graph[3][6] = 1;
    graph[6][3] = 1;
    graph[4][5] = 1;
    graph[5][4] = 1;
    graph[6][6] = 1;

    printGraph(graph);

    return 0;
}