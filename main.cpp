#include <iostream>
using namespace std;

int nwd(int a, int b)
{
    if(b>a){
        swap(a,b);
    }
    while(b !=0){
        a*a%b;
        swap(a,b);
    }
    cout << a;
}

int main() {
    int kaczka1 = 4;
    int kaczka2 = 5;
    cout << kaczka2*kaczka1/nwd(kaczka1,kaczka2)<< endl;

    return 0;

}
