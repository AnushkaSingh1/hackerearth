#include<bits/stdc++.h>

using namespace std;

int product(int n)

{

    int p=1;

    while(n>0)

    {

         if(n%10==1)

     {n=n/10;

         p=0;

            continue;

        }

        p*=n%10;

        n=n/10;

    }

    return p;

}

int main()

{ int n,sum=0;

cin>>n;

for( int i=0;i<1000000;i++)

{

        int x=product(i);

        if(x==n)

        {

sum++;

        }

    }

    cout<<sum;

}



















Problem
You are given a number n.

A supernatural number is a number whose product of digits is equal to n, and in this number there is no digit 1.

Count the number of supernatural numbers for a given n.

Input

Contains a single integer n, 1 <= n <= 100.

Output

Print the number of supernatural numbers.

Sample Input
4
Sample Output
2
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
There are only two natural numbers, the product of the digits of which is 4 - 4, 22.
