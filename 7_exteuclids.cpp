#include <iostream>
using namespace std;

int gcd(int a,int b,int &x,int &y)
{
    if(a==0){x=0;y=1;return b;}
    int x1,y1;
    int g=gcd(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return g;
}

int main(){

    //// CHANGE INPUT
    int a=17;
    int m=43;

    int x,y;
    gcd(a,m,x,y);

    cout<<"Inverse = "<<(x%m+m)%m;
}