#include <iostream>
#include <stack>
#include <vector>

using namespace std;

const int MAXN = 100; // maximum number of nodes

vector<int> adj[MAXN]; // adjacency list representation
bool visited[MAXN]; // keep track of visited nodes

void dfs(int start) {
    stack<int> st;
    st.push(start);
    while (!st.empty()) {
        int node = st.top();
        st.pop();
        if (visited[node]) continue; // already visited
        visited[node] = true;
        cout << "Visited node " << node << endl;
        for (int i = 0; i < adj[node].size(); i++) {
            int neighbor = adj[node][i];
            if (!visited[neighbor]) {
                st.push(neighbor);
                cout << "  Visit edge (" << node << ", " << neighbor << ")" << endl;
            }
        }
    }
}

int main() {
    // create a graph
    adj[0].push_back(2);
    adj[0].push_back(3);
    adj[1].push_back(3);
    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[3].push_back(4);

    // start DFS from node 2
    dfs(2);

    return 0;
}
