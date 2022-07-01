#include<iostream>

using namespace std;

int main()

{

int l,r,k;

cin>>l>>r>>k;

int count=0;

for(int i=l;i<=r;i++)

{

if(i%k==0)

{

count=count+1;

}

}

cout<<count;

return 0;

}




















#include<bits/stdc++.h>

using namespace std;

int main()

{

  int l,r,k,i,c=0;

  cin>>l>>r>>k;

  for(i=l;i<=r;i++)

  {

    if(i%k==0)

    c++;

  }

  cout<<c;

  return 0;

}










You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.

Input Format
The first and only line of input contains 3 space separated integers l, r and k.

Output Format
Print the required answer on a single line.

Constraints


Sample Input
1 10 1
Sample Output
10
Time Limit: 1
Memory Limit: 256
Source Limit:


