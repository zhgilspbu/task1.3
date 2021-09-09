#include "clGraph.h"
#include "graphics.h"

clGraph::clGraph(int num,int **g, int* c, int *u): n(num),graph(g), color(c), used(u)
{
    std::cout<<"graph created";
    //ctor
}

clGraph::~clGraph()
{
    //dtor
}



int clGraph::bfs(int v){
//int check=1;

used[v]=1;
q.push(v);
int s=1;
while (s>0){
    int cur=q.front();
    q.pop();
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

}

return 1;}

int clGraph::check(){

for (int i=0;i<n;i++){
        if (!used[i]){
int ch=clGraph::bfs(i);
if (!ch){
    return 0; // возможность нарисовать
}
}}
    for (int i=0;i<n;i++){
    color[i]=used[i]%2;
}
return 1;
}

void clGraph::show(int flag){

int* center=new int[n];
int gd=CUSTOM;
int gm=CUSTOM_MODE(800,800);
initgraph(&gd,&gm,"");
//line(1,1,100,100);
int first=0, second=0;
stringstream ss;
for (int i=0;i<n;i++){
        ss<<i;
        string s=ss.str();
        char const *st=s.c_str();
    if (color[i]){
    circle(300,100+85*first,20);
    outtextxy(300,100+85*first,st);
    center[i]=100+85*first;
    first++;
    }else{

    circle(600,100+85*second,20);
    outtextxy(600,100+85*second,st);
    center[i]=100+85*second;
    second++;
    }
    ss.str("");
}
for (int i=0;i<n;i++){
    for (int j=i+1;j<n;j++){
        if (graph[i][j]){
            if (color[i]){
                line(320,center[i],580,center[j]);
            }else{
            line(580,center[i],320,center[j]);
            }
        }
    }
}

readkey();
closegraph();
}


void show(){
cout<<"a";
}
