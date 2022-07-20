#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;

cin>>t;

while(t--)

{

long long int n,value=1,sum=0,i,j,z;

cin>>n;

while(true)

{

i=n/value;j=(n/(value+1))+1;

if(i==j)

break;

sum+=(i-j+1)*value;

value++;

}

z=n/value;

while(z--)

{

sum+=n/(z+1);

}

cout<<sum<<endl;

}

return 0;

}



















You are given a number . You are required to determine the value of the following function:

long long int solve(N)
{
    ans=0;
    for(i=1;i<=N;i++)
    ans+=(N/i);
    return ans;
}

All divisions are integer divisions(i.e. N/i is actually floor(N/i)).

Input format

First line:  denoting the number of test cases
Each of the next  lines: An integer 
Output format

For each test case, print the answer in a new line.

Input Constraints



Sample Input
1
5
Sample Output
10
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
5/1=5

5/2=2

5/3=5/4=5/5=1

Answer=5+2+1+1+1=10




