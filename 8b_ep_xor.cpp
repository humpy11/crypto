#include <iostream>
#include <string>
using namespace std;

int E[48]={
32,1,2,3,4,5,
4,5,6,7,8,9,
8,9,10,11,12,13,
12,13,14,15,16,17,
16,17,18,19,20,21,
20,21,22,23,24,25,
24,25,26,27,28,29,
28,29,30,31,32,1};

int main(){

//// CHANGE INPUTS
string R="11110000101010101111000010101010";
string K="000110110000001011101111111111000111000001110010";

string expanded="";

for(int i=0;i<48;i++)
expanded+=R[E[i]-1];

cout<<"Expansion:\n"<<expanded<<endl;

string xorout="";

for(int i=0;i<48;i++)
xorout+=(expanded[i]==K[i])?'0':'1';

cout<<"XOR result:\n"<<xorout;

}
// #include <iostream>
// using namespace std;

// int main(){

//     //// CHANGE INPUTS HERE
//     string R="11001100"; 
//     string K="10101010";

//     string xorout="";

//     for(int i=0;i<R.length();i++)
//         xorout+=(R[i]==K[i])?'0':'1';

//     cout<<"XOR Result: "<<xorout;

// }