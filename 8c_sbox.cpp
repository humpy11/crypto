#include <iostream>
#include <string>
using namespace std;

int sbox[8][4][16]={
{
{14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7},
{0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8},
{4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0},
{15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13}
}
};

string dec2bin(int n)
{
string r="";
for(int i=3;i>=0;i--)
r+=((n>>i)&1)+'0';
return r;
}

int main(){

//// CHANGE INPUT (48 bits)
string in="011000010001011110111010100001100110010100100111";

string out="";

for(int i=0;i<8;i++)
{
string block=in.substr(i*6,6);

int row=(block[0]-'0')*2+(block[5]-'0');
int col=(block[1]-'0')*8+(block[2]-'0')*4+(block[3]-'0')*2+(block[4]-'0');

int val=sbox[0][row][col];

out+=dec2bin(val);
}

cout<<"SBOX output:\n"<<out;

}
// #include <iostream>
// #include <string>
// using namespace std;

// int sbox[4][16] = {
// {14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7},
// {0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8},
// {4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0},
// {15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13}
// };

// string bin4(int n){
//     string r="";
//     for(int i=3;i>=0;i--)
//         r+=((n>>i)&1)+'0';
//     return r;
// }

// int main(){

//     //// CHANGE INPUT HERE (8 rows of 6 bits)
//     string input[8]={
//     "101011",
//     "110010",
//     "010101",
//     "111000",
//     "000111",
//     "101010",
//     "011001",
//     "110101"
//     };

//     for(int i=0;i<8;i++)
//     {
//         string s=input[i];

//         int row=(s[0]-'0')*2+(s[5]-'0');
//         int col=(s[1]-'0')*8+(s[2]-'0')*4+(s[3]-'0')*2+(s[4]-'0');

//         int val=sbox[row][col];

//         cout<<bin4(val)<<endl;
//     }

// }