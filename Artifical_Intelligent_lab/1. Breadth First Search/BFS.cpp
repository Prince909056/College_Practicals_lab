#include<iostream>
#include<queue>
using namespace std;
bool visited[1000];
int G[1000][1000];
int main()
{
    int v, x, e, i, y, count;
    queue <int> q;
    cout<<"Enter the no. of Vertices and edges:";
    cin>>v>>e;
    cout<<"Enter connected vertices";
    while (e--)
    {
        /* code */
        cin>>x>>y;
        G[x][y]=G[y][x]=1;
    }
    
    cout<<"Enter start vertex";
    cin>>x;
    visited[x]=true;
    q.push(x);
    while (!q.empty())
    {
        /* code */
        x=q.front();
        q.pop();
        cout<<x;
        for (i = 0; i <= v; i++)
        {
            /* code */
            if(G[x][i] && !visited[i])
            {
                q.push(i);
                visited[i]=true;
            }
        }
        cin.get();
    }
    return 0;
}
