#include "clGraph.h"

using namespace std;
int main()
{
int flag=0;

    int n;
    cin>>n;
    int *color,*used,**graph;
    color=new int[n];
    graph=new int*[n];
    used=new int[n];
    for (int i=0;i<n;i++){
        graph[i]=new int[n];
        used[i]=0;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
clGraph gr(n,graph,color,used);



return 0;
}
