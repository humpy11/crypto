#include <iostream>
using namespace std;

int main(){

    //// CHANGE INPUT HERE
    string text="THISISCRYPTOGRAPHYLAB";

    int f[26]={0};

    for(char c:text)
        if(c>='A'&&c<='Z')
            f[c-'A']++;

    cout<<"Char  Freq\n";

    for(int i=0;i<26;i++)
        if(f[i]>0)
            cout<<(char)(i+'A')<<"  "<<f[i]<<endl;
}