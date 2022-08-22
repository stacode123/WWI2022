#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> plecak;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int liczbaprzedmiotow = 3;
    int maxwaga = 4;
    //cin >> liczbaprzedmiotow >> maxwaga;
    vector<int> wagaprze = {2,2,3};
    vector<int> wartoscprze = {2,2,5};
    //for (int i = 0; i < liczbaprzedmiotow; i++) {
    //    cin >> wagaprze[i];
    //    cin >> wartoscprze[i];
    //}
    for(int i=0;i<liczbaprzedmiotow;i++){
        plecak[i][0] = 0;
    }
    for(int i=1;i<=liczbaprzedmiotow;i++){
        plecak[0][i] = -1;}

        for(int i=1;i<=liczbaprzedmiotow;i++){
            for(int j=1;j<maxwaga;j++){
                int w = wagaprze[i-1];
                int W = wartoscprze[i-1];
                plecak[i][j] = plecak[i-1][j];
                if((j-w)>0 and plecak[i-1][j-w] != -1){
                    plecak[i][j] = max(plecak[i][j],plecak[i-1][j-w]+w);
                }

            }


        }
    cout<<plecak;
    }

