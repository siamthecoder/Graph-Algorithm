#include <iostream>
#include <vector> // including the vector
using namespace std;

/*
    Adjacency List for the graph representation
    We are using the array of vectors - vectir<int> graph[V]
*/

const int V = 6;

// For adding an Undirected edge between the two vertices source & destination in the graph
void addEdge(vector<int> graph[], int source, int destination)
{
    graph[source].push_back(destination); // adds a destination into the neighbour list of source
    graph[destination].push_back(source); // doing the reverse as our graph is undirected
}

// For showing our graph
void printGraph(vector<int> graph[])
{
    /*
        We need to print vertices that are present in the neighbour list
        of the particuler source vertex.
    */
    cout << "The Adjacency List representation of Given Graph: " << endl;

    for (int source = 0; source < V; source++)
    {
        cout << "Number of neighbours in the list of " << source << " is " << graph[source].size() << endl;
        for (int neighbour : graph[source])
        {
            cout << "There is an edge between " << source << " & " << neighbour << endl;
        }
        cout << endl;
    }

    cout << endl;
}

int main()
{
    // Declaring  adjacency list
    vector<int> graph[V];

    // Adding all the edges
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 5);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 5);
    addEdge(graph, 5, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 4);

    // printing the given undirected graph with edges
    printGraph(graph);

    return 0;
}