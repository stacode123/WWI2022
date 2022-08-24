#include<bits/stdc++.h>
using namespace std;

const int sta = 1e6+6;
long long odl[sta];
vector<pair<int,long long>> graf[500009];
priority_queue<pair<long long,int>> q;

void dijksttra(int start){
    q.push({0,start});
    long long dl = 0;
    long long v;
    odl[start] = 0;

    while(!q.empty()){
        dl=-q.top().first;
        v = q.top().second;
        q.pop();

        if(dl!=odl[v]){
            continue;
        }

        for(auto sasiad:graf[v]){
            if(odl[sasiad.first] > dl + (long long)sasiad.second){
                q.push({-(dl + (long long)sasiad.second), sasiad.first});
                odl[sasiad.first] = dl + (long long)sasiad.second;
            }

        }

    }

};


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int n;
    int m;
    int a,b,c;
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        cin >> a>>b>>c;
        graf[a].push_back({b,c});
        graf[b].push_back({a,c});
    }
    fill(odl+1,odl+n+1,1e18);
    dijksttra(1);

    for(int l = 1;l<=n;l++){
        if(odl[l] == 1e18){
            cout << -1<<'\n';}
        else{
            cout <<odl[l]<< "\n";
        }

    }

}
