 #include<bits/stdc++.h>
using namespace std;


 

int main() {

int i,n,k; cin >> n >> k;

long long int arr[n];

long long int sum = 0;

for(i = 0 ; i < n ; i++)

{

    cin >> arr[i];

}

for(i = 0 ; i < n ; i++)

{

if(arr[i] < 0)

continue;

int j = i + 1;

while(j <= i + k && j < n && arr[j] < 0 && arr[i] != 0)

{

if( abs(arr[j]) <= arr[i] )

{

arr[i] += arr[j];

arr[j] = 0;

}

else

{

arr[j] += arr[i];

arr[i] = 0;

}

j++;

}

if(j == n)

break;

}

for(i = 0 ; i < n ; i++)

{

sum += (long long int)abs(arr[i]);

}

cout<<sum;
}










You are given an array of numbers  which contains positive as well as negative numbers . The cost of the array can be defined as 

 , where T is the transfer array which contains N zeros initially.

You need to minimize this cost . You can transfer value from one array element to another if and only if the distance between them is at most K.

Also, transfer value can't be transferred further.

Say array contains  and 

if we transfer 3 from  element to  , the array becomes

Original Value 

Transferred value 

 which is minimum in this case

Note :

Only positive value can be transferred

It is not necessary to transfer whole value i.e partial transfer is also acceptable. This means that if you have  then you can distribute the value 5 across many other array elements provided that they finally sum to a number less than equal to 5. For example 5 can be transferred in chunks of smaller values say 2 , 3 but their sum should not exceed 5.

Input:

First line contains N and K separated by space

Second line denotes an array of size N

Output

Minimum value of 

Constraints



Sample Input
3 2
3 -1 -2
Sample Output
0
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
Array contains  and 

if we transfer 1 from  element to  and 2 from  element to , the array becomes

Original Value 

Transferred value 

 which is minimum in this case
