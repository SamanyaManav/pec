#include <iostream>
using namespace std;
int find(int b, int s[]) {
    while (s[b] != b)
        b = s[b];
    return b;
}

void kruskal(int n, int cost[10][10]) {
    int count, i, s[10], min, j, u, v, k, t[10][2], sum;
    for (i = 0; i < n; i++)
        s[i] = i;
    count = 0;
    sum = 0;
    k = 0;
    while (count < n - 1) {
        min = 999;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (cost[i][j] != 0 && cost[i][j] < min) {
                    min = cost[i][j];
                    u = i;
                    v = j;
                }
            }
        }
        if (min == 999)
            break;
        i = find(u, s);
        j = find(v, s);
        if (i != j) {
            t[k][0] = u;
            t[k][1] = v;
            k++;
            count++;
            sum = sum + min;
            s[j] = i;
        }
        cost[u][v] = cost[v][u] = 999;
    }
    if (count == n - 1) {
        cout << "Cost of spanning tree = " << sum << endl;
        cout << "Spanning Tree is shown below" << endl;
        for (k = 0; k < n - 1; k++) {
            cout << t[k][0] << " -> " << t[k][1] << endl;
        }
    } else {
        cout << "Spanning Tree does not exist" << endl;
    }
}

int main() {
    int n, cost[10][10], i, j;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the cost adjacency matrix:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }
    kruskal(n, cost);
    return 0;
}

