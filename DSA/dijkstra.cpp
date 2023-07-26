#include <iostream>

using namespace std;

void dijkstra(int n, int cost[10][10], int source, int dest, int d[], int p[])
{
    int i, j, u, v, min, s[10];
    for (i = 0; i < n; i++)
    {
        d[i] = cost[source][i];
        s[i] = 0;
        p[i] = source;
    }
    s[source] = 1;
    for (i = 0; i < n; i++)
    {
        min = 999;
        u = -1;
        for (j = 0; j < n; j++)
        {
            if (s[j] == 0)
            {
                if (d[j] < min)
                {
                    min = d[j];
                    u = j;
                }
            }
        }
        if (u == -1)
            return;
        s[u] = 1;
        if (u == dest)
            return;
        for (v = 0; v < n; v++)
        {
            if (s[v] == 0)
            {
                if (d[u] + cost[u][v] < d[v])
                {
                    d[v] = d[u] + cost[u][v];
                    p[v] = u;
                }
            }
        }
    }
}

void print_path(int source, int destination, int d[], int p[])
{
    int i;
    i = destination;
    while (i != source)
    {
        cout << i << "<-";
        i = p[i];
    }
    cout << source << "=" << d[destination] << endl;
}

int main()
{
    int cost[10][10], n, d[10], p[10], i, j, src;

    cout << "Enter the number of nodes in the graph: ";
    cin >> n;
    cout << "Enter the cost adjacency matrix:\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> cost[i][j];
        }
    }
    cout << "Enter the source vertex: ";
    cin >> src;

    for (j = 0; j < n; j++)
    {
        dijkstra(n, cost, src, j, d, p);
        if (d[j] == 999)
            cout << j << " is not reachable from " << src << endl;
        else if (src != j)
            print_path(src, j, d, p);
    }
    return 0;
}

