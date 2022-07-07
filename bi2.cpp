#include<iostream> 
using namespace std; 
int sumnum(int a) { 
    int sum=0; int tem; 
    while(a!=0) 
    { tem=a%10; sum=sum+tem; a=a/10; } 
    return sum; } 
    void display(int num) { 
        if(sumnum(num)%4==0) { 
            cout<<num<<"\n"; }
             else{ 
                 num=num+1; display(num); 
                 } } 
                 int main() {
                      int t; cin>>t;
                       int a,i; 
                       for(int i=0;i<t;i++) { 
                           cin>>a; display(a); 
                           } 
                           return 0; }












Problem
A number  is said to be special if the sum of its digits is divisible by 4.

For a given integer , find a number  such that:

 is a special number
 is minimum possible
Input format

The first line contains an integer  denoting the number of test cases.
For each test case:
The first line contains an integer .
Output format

For each test case, print a number  that satisfies the above conditions in a new line.

Constraints


 

Sample Input
2
432
99
Sample Output
435
103
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
For first test case:

n = 435, sum of digits is 12 which is divisible by 4.
For second test case:

n = 103, sum of digits is 4 which is divisible by 4.
