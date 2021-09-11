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
    return 0;
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
int gm=CUSTOM_MODE(1200,800);
initgraph(&gd,&gm,"");
//line(1,1,100,100);
if (flag){
 //circle(100,100,20);
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
}else{
stringstream ss;
for (int i=0;i<n;i++){
    ss<<i;
    string s=ss.str();
    char const *st=s.c_str();
    circle(300+i*75,200+i*50,20);
    outtextxy(300+i*75,200+i*50,st);
    center[i]=200+i*50;//vtoraya koordinata
    ss.str("");
}
for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if (graph[i][j] && i>j){
            if (i-j==1 ){

                line(center[i]*1.5-40/sqrt(13),center[i]-40/sqrt(13),center[j]*1.5+40/sqrt(13),center[j]+40/sqrt(13));
            }
            else{
                arc((center[i]*1.5+center[j]*1.5)/2,(center[i]+center[j])/2,146+(180*(i%2)),326.6+180*(i%2),(center[i]-center[j]));
            }
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
