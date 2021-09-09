#include "clGraph.h"


clGraph::clGraph(int num,int **g, int* c, int *u): n(num),graph(g), color(c), used(u)
{
    std::cout<<"graph created";
    //ctor
}

clGraph::~clGraph()
{
    //dtor
}


int clGraph::bfs(int v,int n,int *&used,queue<int> q,int** graph){
//int check=1;

used[v]=1;
q.push(v);
int s=1;
while (s>0){
    int cur=q.front();

    s--;

    for(int i=0;i<n;i++){
        if (i!=cur && graph[cur][i]){
            if (!used[i]){
                used[i]=used[cur]+1;
                q.push(i);
                s++;
            }else if(used[cur]%2 == used[i]%2){
            return 0;
            }
        }
    }
    return 0;

}
return 1;}

void show(){
cout<<"a";
}
