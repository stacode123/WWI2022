#include<bits/stdc++.h>
using namespace std;

vector<long long> templista1;
vector<long long> templista2;
int ciagdlugosc;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<long long>ciag;
    int temp;
    cin >> ciagdlugosc;
    templista1.push_back(0);
    for(int i = 0;i<ciagdlugosc;i++){
        cin >> temp;
        ciag.push_back(temp);
    }
    templista2.push_back(ciag[0]);
    for(int i = 1;i<ciagdlugosc;i++){
        long long r = max(templista1[i-1],templista2[i-1]);
        long long e = templista1[i-1]+ciag[i];
        templista1.push_back(r);
        templista2.push_back(e);


    }
    long long w = max(templista1[ciagdlugosc-1],templista2[ciagdlugosc-1]);
    cout << w;


}