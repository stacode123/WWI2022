#include<bits/stdc++.h>
using namespace std;

int odleglosc[1000000];
vector<int>graf[100007];
queue<int> kolejka;

void bfs(int start){
    kolejka.push(start);
    odleglosc[start] = 0;
    while(!kolejka.empty()){
        int temp = kolejka.front();
        kolejka.pop();
        for(auto x:graf[temp]){
            if(odleglosc[x] == -1){
                kolejka.push(x);
                odleglosc[x] = odleglosc[temp] + 1;}


        }



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
    for(int i = 1;i<=liczbawierzcholkow;i++){
        odleglosc[i] = -1;
    }
    bfs(1);
    for(int i = 1;i<=liczbawierzcholkow;i++){
        cout << odleglosc[i]<<'\n';
    }








}

