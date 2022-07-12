#include<bits/stdc++.h>

#define ll long long int

#define vi vector<int>

#define vll vector<long long int>

#define CUBE(X) X*X*X

ll solve(ll n,int m){

ll temp=m;

while(n>temp){

       temp=temp*m;

   }

return temp/m;

 

}

using namespace std;

 

 

int main()

{

int tt;cin>>tt;

while(tt--){

   ll n;

   int k;

   cin>>n>>k;

 

  bool flag=0;

   while(n!=0){

       ll rem=n%k;

       if(rem==0||rem==1){

           flag=true;

       }else{

       flag=false;

       break;

       }

       n/=k;

       }

       if(flag==true) cout<<"YES\n";

       else cout<<"NO\n";

}

}
















Problem
While playing a mental math game, you realize that the number k is mathematically beautiful.

You then realize that the number x can be mathematically beautiful if it is represented as a sum of a sequence where each element is a power of k and all the numbers in the sequence are different.

Task

Your task is to determine whether the number is mathematically beautiful.

Input format

The first line contains T denoting the number of test cases.
The next T lines contain   and    denoting the numbers.
Output Format

For each test case, output  "YES"  if  is "mathematically beautiful" and  "NO"  otherwise.

Constraints




 

Sample Input
2
91 3
17 5
Sample Output
YES
NO
Time Limit: 2
Memory Limit: 256
Source Limit:
Explanation

Contributers:
