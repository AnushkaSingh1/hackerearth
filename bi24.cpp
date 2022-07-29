#include<bits/stdc++.h>

using namespace std;

int main(){

int t;

cin>>t;

while(t--){

int n;

cin>>n;

vector<long long int>v;

for(int i=0;i<64;i++){

v.push_back(pow(2,i)-1);

}

int ans=0;

for(int i=0;i<v.size();i++){

if(n<v[i]){

ans=i;

break;

}

}

cout<<v[ans-1]<<endl;

}

}




















Problem
You are given the binary representation of a number. You must consider the highest number of set bits in the binary representation to complete your task. For example,  is represented as  in binary and it contains four set bits (1-bits). You are also given a number  and your task is to determine the number that is less than or equal to  and contains the maximum number of set bits in its binary representation. 

In other words, print a number  that is less than or equal to  such that the number of set bits in the binary representation of  must be maximum

Input format

First line: An integer  denoting the number of test cases
For each test case:
First line: An integer 
Output format

For each test case, print the answer on a new line denoting a number  that is less than or equal to  such that the number of set bits in the binary representation of  must be maximum.  

Constraints


Sample Input
1
345
Sample Output
255
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
The number 255 (< 345) has most number of set bits.
