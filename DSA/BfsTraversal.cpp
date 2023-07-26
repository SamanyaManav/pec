#include <iostream>
#include <queue>

const int n = 6; // Number of vertices in the graph

using namespace std;

void BFTraversal(int adjMatrix[][n], int startVertex) {
    bool visited[n] = {0};
    queue<int> q;

    q.push(startVertex);
    while (!q.empty()) {
        int vertex = q.front();
        q.pop();

        if (!visited[vertex]) {
            visited[vertex] = 1;
            cout << "Visited: " << vertex << endl;

            for (int w = 0; w < n; ++w) {
                if (adjMatrix[vertex][w] == 1 && !visited[w]) {
                    q.push(w);
                }
            }
        }
    }
}

int main() {
    // Sample usage with a predefined graph of 6 vertices (adjacency matrix)
    int adjMatrix[n][n] = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0, 0},
        {0, 1, 1, 0, 1, 1},
        {0, 0, 0, 1, 0, 0},
        {0, 0, 0, 1, 0, 0}
    };

    // Start the Breadth-First Traversal from vertex 0
    BFTraversal(adjMatrix, 0);

    return 0;
}

