#include<bits/stdc++.h>
using namespace std;

bool stopped = false;
int znalezione[1000007];
vector<int>graf[1000007];

void dfs(int start,int parent){
    znalezione[start] = 1;
    for(auto x:graf[start]){
        if(!znalezione[x])
            dfs(x,start);
        else{
            if(x != parent){
                stopped = true;

            }

        }

    }
}







int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    int w;
    int h;
    cin >> w >> h;
    int a = 0;
    int b= 0 ;
    int ostatniwierzcholek = 0;
    string input[1000];
    for(int i = 1;i<=h;i++){
        cin >> input[i];
    }
    for(int i = 1;i<=h;i++){
        for(int x=0;x<=w;x++){
            if(input[i][x-1] == "."){

            }

        }

    }
    dfs(1,1);








}


