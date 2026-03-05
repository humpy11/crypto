#include <iostream>
#include <string>
using namespace std;

int IP[64] = {
58,50,42,34,26,18,10,2,
60,52,44,36,28,20,12,4,
62,54,46,38,30,22,14,6,
64,56,48,40,32,24,16,8,
57,49,41,33,25,17,9,1,
59,51,43,35,27,19,11,3,
61,53,45,37,29,21,13,5,
63,55,47,39,31,23,15,7};

int IP_INV[64] = {
40,8,48,16,56,24,64,32,
39,7,47,15,55,23,63,31,
38,6,46,14,54,22,62,30,
37,5,45,13,53,21,61,29,
36,4,44,12,52,20,60,28,
35,3,43,11,51,19,59,27,
34,2,42,10,50,18,58,26,
33,1,41,9,49,17,57,25};

string hex2bin(string s)
{
string mp[16]={"0000","0001","0010","0011","0100","0101","0110","0111",
"1000","1001","1010","1011","1100","1101","1110","1111"};

string bin="";

for(int i=0;i<s.size();i++)
{
if(s[i]>='0' && s[i]<='9')
bin+=mp[s[i]-'0'];
else
bin+=mp[s[i]-'A'+10];
}

return bin;
}

string bin2hex(string s)
{
string hex="";
string h="0123456789ABCDEF";

for(int i=0;i<s.size();i+=4)
{
int val=(s[i]-'0')*8+(s[i+1]-'0')*4+(s[i+2]-'0')*2+(s[i+3]-'0');
hex+=h[val];
}

return hex;
}

string permute(string k,int arr[],int n)
{
string per="";

for(int i=0;i<n;i++)
per+=k[arr[i]-1];

return per;
}

string xorOp(string a,string b)
{
string ans="";

for(int i=0;i<a.size();i++)
{
if(a[i]==b[i])
ans+='0';
else
ans+='1';
}

return ans;
}

int main()
{

//// CHANGE INPUT HERE
string ciphertext="85E813540F0AB405";
string key="133457799BBCDFF1";

string bin=hex2bin(ciphertext);

string perm=permute(bin,IP,64);

string left=perm.substr(0,32);
string right=perm.substr(32,32);

for(int i=15;i>=0;i--)
{
string newRight=xorOp(left,right);
left=right;
right=newRight;
}

string combine=right+left;

string plain=bin2hex(permute(combine,IP_INV,64));

cout<<"Plaintext: "<<plain;

}