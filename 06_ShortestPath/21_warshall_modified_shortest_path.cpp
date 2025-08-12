#include <iostream>
using namespace std;

int main()
{
    int V = 4;
    const int INF = 999;

    // Directly create weighted adjacency matrix (like previous example)
    int graph[4][4] = {
        {0, 5, INF, 10},   // 0 -> 1 (weight 5), 0 -> 3 (weight 10)
        {INF, 0, 3, INF},  // 1 -> 2 (weight 3)
        {INF, INF, 0, 1},  // 2 -> 3 (weight 1)
        {INF, INF, INF, 0} // 3 has no outgoing edges
    };

    // Floyd-Warshall algorithm for shortest paths
    for (int k = 0; k < V; k++)
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (graph[i][k] != INF && graph[k][j] != INF &&
                    graph[i][k] + graph[k][j] < graph[i][j])
                {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }

    cout << "\nShortest path matrix:\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (graph[i][j] == INF)
                cout << "INF ";
            else
                cout << graph[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}
