#include<bits/stdc++.h>
using namespace std;

bool stopped = false;
int znalezione[1000007];
vector<int> graf[1000007];
queue<pair<int,int>> kolejka;
int odleglosc[10000][10000];
char input[1007][1007];


void bfs(pair<int,int> start){
    kolejka.push(start);
    odleglosc[start.first][start.second] = 0;

    while(!kolejka.empty()) {
        pair<int,int> temp = kolejka.front();
        kolejka.pop();
        if (odleglosc[start.first-1][start.second] == -1) {
            kolejka.push((pair<int,int>)start.first,start.second);
            odleglosc[start.first-1][start.second] = odleglosc[temp] + 1;
        }
        if (odleglosc[start.first+1][start.second] == -1) {
            kolejka.push((pair<int,int>)start.first,start.second);
            odleglosc[start.first+1][start.second] = odleglosc[temp] + 1;
        }
        if (odleglosc[start.first][start.second-1] == -1) {
            kolejka.push((pair<int,int>)start.first,start.second);
            odleglosc[start.first][start.second-1] = odleglosc[temp] + 1;
        }
        if (odleglosc[start.first][start.second+1] == -1) {
            kolejka.push((pair<int,int>)start.first,start.second);
            odleglosc[start.first][start.second+1] = odleglosc[temp] + 1;

            }
    }
}


int main() {
    vector<char> odwiedzone;
    ios_base::sync_with_stdio(0);
    cin.tie();
    int w;
    int h;
    cin >> w >> h;
    int a = 0;
    int b = 0;
    int ostatniwierzcholek = 0;

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> input[i][j];
            if(input[i][j] != '#')
                odwiedzone[i][j] = -1;
        }
    }

    for (int i = 1; i <= h; i++) {
        for (int x = 1; x <= w; x++) {
            if (input[x][i] == '.' and input[x][i] == *znalezione) {

                }
            if (input[x][i] == '.' and input[x][i] == *znalezione){

            }
            }
        }

    }



