#include <iostream>
using namespace std;

int n;            // 정점의 총 개수
int map[30][30];  // 인접 행렬
int visit[30];    //

void DFS(int v){
    
    //정점 v를 방문했다고 체크
    visit[v] = 1;
    
    //연결된 엣지들을 살펴봄
    for(int i=1;i<=n;i++){
        //정점 v-i가 연결되고, i를 방문하지 않았다면
        if(map[v][i]==1 && !visit[i]){
            cout<<v<<"에서"<<i<<"로 이동"<<endl;
        // 이동한 정점 i에서 다시 DFS시작
            DFS(i);
        }
    }
}
int main(){
    int start;  // 시작 정점
    int v1,v2;
    cout<<"정점 개수와 시작점을 입력:";
    cin>>n>>start;
    
    while(1){
        cout<<"정점 v1, v2 입력:";
        cin>>v1>>v2;
        if(v1==-1 && v2==-1)
            break;
        
        map[v1][v2] = map[v2][v1] = 1;
    }
    DFS(start);
    
    return 0;
}
