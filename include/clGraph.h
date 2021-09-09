#ifndef CLGRAPH_H
#define CLGRAPH_H
#include <iostream>
#include "clDraw.h"
#include <queue>

using namespace std;
class clGraph: public clDraw
{
    public:
        clGraph(int num,int **g, int* c, int *u);
        virtual ~clGraph();

        void show();
        int bfs(int v,int n,int *&used,queue<int> q,int** graph);
  /*
        **int create_matrix(){
            **int g=new int*[n];
            for (int i=0;i<n;i++){
                g[i]=new int[n];
            }
            for (int i=0;i<n;i++){
                for (int=0;j<n;j++){
                    cin>>g[i][j];
                }
            }
            return g;
        }

 - матрица смежности передается в конструктор*/
    protected:

    private:
        int n,**graph,*used,*color;

        queue <int>q;
};

#endif // CLGRAPH_H
