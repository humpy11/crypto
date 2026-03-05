#include <iostream>
using namespace std;

int main(){

    //// CHANGE KEY MATRIX
    int k[3][3]={{6,24,1},{13,16,10},{20,17,15}};

    //// CHANGE TEXT
    string p="ACT";

    for(int i=0;i<p.length();i+=3)
    {
        int a=p[i]-'A';
        int b=p[i+1]-'A';
        int c=p[i+2]-'A';

        int x=(a*k[0][0]+b*k[1][0]+c*k[2][0])%26;
        int y=(a*k[0][1]+b*k[1][1]+c*k[2][1])%26;
        int z=(a*k[0][2]+b*k[1][2]+c*k[2][2])%26;

        cout<<(char)(x+'A')<<(char)(y+'A')<<(char)(z+'A');
    }
}