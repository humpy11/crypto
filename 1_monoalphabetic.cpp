#include <iostream>
using namespace std;

int main() {

    // CHANGE INPUT HERE
    string plain = "abcdefghijklmnopqrstuvwxyz";
    string cipher = "phqgiumeaylnofdxkrcvstzwb"; 
    string text = "hello";

    string result="";

    for(int i=0;i<text.length();i++)
    {
        char c = text[i];
        if(c>='a' && c<='z')
            result += cipher[c-'a'];
        else
            result += c;
    }

    cout<<"Encrypted: "<<result;

}

// plain alphabet
// cipher alphabet
// plaintext