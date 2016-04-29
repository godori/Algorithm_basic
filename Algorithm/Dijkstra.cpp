#include <iostream>
using namespace std;

#define INF 9999   //무한대 값
#define TRUE 1
#define FALSE 0

int weight[7][7] = {
    { 0, 7, INF, INF, 3, 10, INF},
    { 7, 0, 4, 10, 2, 6, INF},
    {INF, 4, 0, 2, INF, INF, INF},
    {INF, 10, 2, 0, 11, 9, 4},
    { 3, 2, INF, 11, 0, INF, 5},
    {10, 6, INF, 9, INF, 0, INF},
    {INF,INF,INF, 4, 5,INF, 0 }
};


int distance[7]; //시작 정점으로부터의 최단 경로 거리

int found[7]; //방문한 정점 표시

int path[7][7]; //최단거리 정점까지 거치는 노드들을 저장

int check[7];//한 정점으로 가는 정점을 표시

void path_init(int path[][7]){ //path 인접행렬 초기화

    for(int i=0;i<7;i++)
        for(int j=0;j<7;j++)
            path[i][j] = INF;

};

int choose(int distance[], int n, int found[]){ // 최단거리에 있는 정점을 찾는 함수
    int i,min,minpos;

    min = INT_MAX;

    minpos = -1;

    for(i=0;i<n;i++)

        if(distance[i]<min && !found[i]){

            min = distance[i];

            minpos = i;
        }
    return minpos;
};

void shortestPath(int start, int n);

int main (){

    int i,j;
    int start;

    path_init(path);    //초기화

    cout<<"시작 정점을 선택하시오 :";
    cin>>start;
    cout<<endl;

    shortestPath(start,7);

    //저장된 경로들 출력
    for(i=0; i<7; i++){
        cout<<start<<"에서 "<<i<<"까지의 최단거리 : "<<distance[i]<<endl;
    }

    return 0;
}


//최단 경로 알고리즘
void shortestPath(int start, int n){

    int i,j,u,w;

    // 초기화
    for(i=0; i<n; i++){

        distance[i] = weight[start][i];

        found[i] = FALSE;

        check[i]=1;

        path[i][0] = start;

    }


    found[start] =TRUE; //시작 정점 방문 표시

    distance[start] = 0;

    for(i=0; i<n-2; i++){

        u = choose(distance, n, found); // 가장 짧은 거리를 가진 정점 찾기

        found[u] = TRUE;

        for(w=0; w<n;w++){

            if(!found[w]){

                if(distance[u] + weight[u][w] < distance[w]){

                    if(i==0){//처음에는 인접한 정점에 연결

                        path[w][check[w]] = u; //갱신된 경로를 경로 배열에 저장

                        check[w]++;

                    }

                    else{

                        for(j=0; j<(check[u]+1); j++){ // 저장된 만큼 반복

                            path[w][j] = path[u][j]; //경로를 갱신

                            path[w][j+1] = u; //끝부분에 자기자신을 저장

                            check[w]++;

                        }//for

                    }//else

                    distance[w] = distance[u] + weight[u][w];   // 기존 패스에 추가

                }//if

            }

        }

    }

}
