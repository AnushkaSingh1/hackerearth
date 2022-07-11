#include<iostream>

using namespace std;

int main()

{

int t;

cin>>t;

while(t--)

{

long int n;

cin>>n;

cout<<(n*(n+1))<<endl;

 

}

return 0;

}














A robot's initial position is  and it can only move along X-axis. It has  moves to make and in each move, it will select one of the following options:

Go to  from 
Go to  from 
Remain at its current position
Your task is to calculate  for all reachable .

Note: Here,  denotes the absolute value.

See the sample explanation for better understanding.

Input format

The first line contains  denoting the number of test cases.
The first line of each test case containing an integer  denoting the number of moves.
Output format

Print  lines. For each test case, print a single integer as described in the problem statement.

Constraints



Sample Input
1
1
Sample Output
2
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
He is initially at (0,0). He has 1 move to make, the positions where he can end up are (-1,0),(1,0) and (0,0).


=abs(-1)+abs(0)+abs(1)+abs(0)+abs(0)+abs(0)

=1+0+1+0+0+0

=2
