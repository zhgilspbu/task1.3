#ifndef CLGRAPH_H
#define CLGRAPH_H
#include <iostream>
#include "clDraw.h"
#include <queue>
#include <iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include <string>
#include<sstream>
#include "string.h"
#define PI 3.14159265

using namespace std;
class clGraph : public clDraw
{
    public:
        clGraph(int num,int **g, int* c, int *u);
        virtual ~clGraph();

        int bfs(int v);
        int check();
        int** Getgraph(){return graph;};
        int* Getcolor(){return color;};
        void show(int flag);
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
