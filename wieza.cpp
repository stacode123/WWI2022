#include <bits/stdc++.h>
using namespace std;
int binsearch(int koniec,int pocz,int s,int listaswieczek[], int listazapytan[]){
    while(koniec - pocz>1)
    {
        int sr = (koniec+pocz)/2;
        if(listaswieczek[sr]>=listazapytan[s]){
            koniec= sr;
        } else{
            pocz = sr;
        }



    }
    return pocz;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int liczbaswieczek;
    int liczbazapytan;
    cin >> liczbaswieczek >> liczbazapytan;
    int listaswieczek[liczbaswieczek+1];
    int listazapytan[liczbazapytan];
    int koniec = liczbaswieczek;
    int pocz = 0;
    listaswieczek[0] = 0;
    for (int i = 1; i <= liczbaswieczek; ++i)
    {
        cin >> listaswieczek[i];
    }
    for (int i = 0; i < liczbazapytan; ++i)
    {
       cin >> listazapytan[i];
    }
    for(int i = 1;i<liczbaswieczek;++i){
        if(listaswieczek[i-1]>listaswieczek[i]){
            listaswieczek[i] = listaswieczek[i-1];
        }
    }
    for(int i = 0;i<liczbazapytan;i++) {
        int koniec = liczbaswieczek+1;
        int pocz = 0;
        int o = binsearch(koniec, pocz, i, listaswieczek, listazapytan);
        o = liczbaswieczek - o;
        cout << o << " ";

    }
    return 0;

}