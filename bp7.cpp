#include<bits/stdc++.h>

using namespace std;

 

long int cal(long int c,long int n)   // this will calculate the last possible index and return it.

{

   long int temp=c , count=2;     // count is initially initialized by 2 and then incremented one at a time.

   while(temp+count<=n)

   {

       temp=temp+count;

       count++;

   }

   return temp;

}

 

int main()

{

   long int n,last=0;

   cin>>n;

   long long int arr[n],temp,sum=0,max=-10000000;

   arr[0]=0;                             // we are using one-indexing

   for(long int i=1;i<=n;i++)      // we are using pre-computation technique, were each element stores the total till current element .

   {

       cin>>temp;

       arr[i]=temp+arr[i-1];      // reason of using one indexing

   }

   for(long int i=1;i<n;i++)

   {

       last=cal(i,n);

       sum=arr[last]-arr[i-1];           // benefit of using pre-computation technique  that we get total in o(1) time else we need a loop to calculate the sum.

       if(sum>max)

       {

           max=sum;

       }    

   }

   cout<<max;

   return 0;

}



















#include <bits/stdc++.h>

using namespace std;


 

int main() {

    long int n, t, x, last, max = -10000000, sum;

    cin >> n;

    long int A[n+1];

    for(int i=1; i<=n; i++){

        cin >> t;

        A[i] = t+A[i-1];

    }

    for(int i=0; i<n; i++){

        x = floor((-1 + sqrt(1 + 8*(n-i))) / 2);     // Using sum of A.P to find the last term of the A.P(1+2+3+4+...)

        last = x * (1 + x) / 2;     // Last element of the array to add for the sum

        sum = A[i+last]-A[i];

        if(sum > max)

            max = sum;

    }

    cout << max;

}


















You are given an array A of N  elements. Now you need to choose the best index of this array A. An index of the array is called best if the special sum of
this index is maximum across the special sum of all the other indices.

To calculate the special sum for any index  i, you pick the first element that is A[i] and add it to your sum. Now you pick next two elements i.e. A[i+1] and A[i+2]   
 and add both of them to your sum. Now you will pick the next 3 elements and this continues till the index for which it is possible to pick the elements. 
  For example:

If our array contains 10 elements and you choose index to be 3 then your special sum is denoted by - [A3]+ [A4 + A5] +[ A7 +A8 +A9]
 , beyond this its not possible to add further elements as the index value will cross the value .

Find the best index and in the output print its corresponding special sum. Note that there may be more than one best indices but you need to only print the 
maximum special sum.

Input
First line contains an integer  as input. Next line contains  space separated integers denoting the elements of the array .
Output
In the output you have to print an integer that denotes the maximum special sum

Constraints

Sample Inputs

Input	Output
5
1 3 1 2 5

8
10
2 1 3 9 2 4 -10 -9 1 3

9
 

Sample Input
6
-3 2 3 -4 3 1
Sample Output
3
Time Limit: 1
Memory Limit: 256
Source Limit:
