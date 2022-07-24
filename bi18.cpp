#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){

        long n,m;

        cin>>n>>m;

        

        long sum = 0;

        while(n>0){

            sum+= ((n/2+n%2)%m)*((n/2+n%2)%m);//sum of odd no

            sum = sum%m;

            n = n/2;//deletion of number of odd in n


 

        }

        cout<<sum<<endl;

    }

return 0;

}
















Problem
You are given a positive integer . is the greatest odd divisor of . 

Find the sum .

Input format

The first line of the input contains a single integer   denoting the number of test cases. The description of  test cases follows.
The first line of each test case contains two integers  and  .
Output format

For each value of , print the value of  in a separate line.

Sample Input
5
1 100
110 30
12345 100000007
10 28383
100 5
Sample Output
1
18
50804693
36
4
Time Limit: 5
Memory Limit: 256
Source Limit:








