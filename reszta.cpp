#include<bits/stdc++.h>
using namespace std;

vector<int> binsearch(int b, vector<int>nominaly){
    int koniec = 1000001;
    int pocz = 0;
    while(koniec - pocz>1)
    {
        int sr = (koniec+pocz)/2;
        if(sr>b){
            koniec= sr;
        } else{
            pocz = sr;
        }



    }
    vector<int>t;
    for(pocz;pocz==1;pocz--){
    t.push_back(nominaly[pocz]);

    }
    return t;
}





int main(){
    int resztawymagana;
    int liczbanominalow;
    cin >> resztawymagana >> liczbanominalow;
    vector<int> nominaly;
    int temp;
    for(int i = 0;i<liczbanominalow;i++){
        cin >> temp;
        nominaly.push_back(temp);
    }
    bool m = false;
    for (const auto &i: nominaly){
        sort(nominaly.begin(), nominaly.end());}
    nominaly = (resztawymagana,nominaly);
    int reszta = 0;
    int s = 0;
    vector<int> templista1;
    vector<int> templista2;
    templista1.push_back(0);
    templista2.push_back(nominaly[0]);
    for(int i = 1;i<liczbanominalow;i++){
        long long r = max(templista1[i-1],templista2[i-1]);
        long long e = templista1[i-1]+nominaly[i];
        templista1.push_back(r);
        templista2.push_back(e);


}