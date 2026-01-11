#include <iostream>
#include <set>
#include <unordered_map>
#include <map>
#include <list>
using namespace std;

class Graph {
    public:
        map<string, list< pair< string, int>>> adj;

        void addedge(string u,string v,int d, bool biDirec = true)
        {
            adj[u].push_back({v,d});
            if (biDirec == true)
            {
                adj[v].push_back({u,d});
            }
        }

        void print()
        {
            for (auto p: adj)
            {
                cout << p.first << ":";
                for (auto cp : p.second)
                {
                    cout << "(" << cp.first << ", " << cp.second << ") ";
                }
                cout << endl;
            }
        }

        #include <climits>

void dijkstras(string src, string des)
{
    unordered_map<string, int> dist;
    unordered_map<string, string> parent;

    for (auto p : adj)
        dist[p.first] = INT_MAX;

    dist[src] = 0;
    parent[src] = src;

    set<pair<int, string>> s;
    s.insert({0, src});

    while (!s.empty())
    {
        auto p = *s.begin();
        s.erase(s.begin());

        int cd = p.first;
        string x = p.second;

        for (auto cp : adj[x])
        {
            string neigh = cp.first;
            int ed = cp.second;

            if (dist[neigh] > cd + ed)
            {
                auto t = s.find({dist[neigh], neigh});
                if (t != s.end())
                    s.erase(t);

                dist[neigh] = cd + ed;
                parent[neigh] = x;

                s.insert({dist[neigh], neigh});
            }
        }
    }

    // Print shortest distance
    cout << "Shortest distance from " << src << " to " << des
         << " = " << dist[des] << endl;
}


};
int main()
{
    Graph g;

    g.addedge("A","B",1);
    g.addedge("B","D",2);
    g.addedge("C","D",3);
    g.addedge("A","C",10);
    g.addedge("A","D",8);
    g.addedge("B","E",4);

    g.print();
    g.dijkstras("A","C");



}