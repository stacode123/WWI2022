#include<bits/stdc++.h>
using namespace std;

long long pot(long long a, long long b, int m){
    if (b == 1){
        return a;
    }
    else if (b < 1){
        return 1;
    }
    else if (b%2 == 1){
        return (a*pot(a, b-1,m))%m;
    }
    else{
        long long c = pot(a, b/2, m);
        return (c*c)%m;
    }
}


int main(){
    long long a;
    long long b;
    int m;
    cin >> a >> b >> m;
    cout << pot(a,b,m);

};