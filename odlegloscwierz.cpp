#include<bits/stdc++.h>
using namespace std;

int znalezione[1000007];
vector<int>graf[100007];

void dfs(int start){
    znalezione[start] = 1;
    for(auto x:graf[start]){
        if(!znalezione[x])
            dfs(x);

    }
}







int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    int liczbawierzcholkow;
    int liczbakrawedzi;
    cin >> liczbawierzcholkow >> liczbakrawedzi;
    int a = 0;
    int b= 0 ;
    for(int i = 0;i<liczbakrawedzi;i++){
        cin >> a >> b;
        graf[a].push_back(b);
        graf[b].push_back(a);

    }
    dfs(1);
    for(int i = 0;i<liczbawierzcholkow;i++){
        if(znalezione[i+1])
            cout << "TAK"<<"\n";
        else
            cout << "NIE"<<"\n";

    }







}

