#include<iostream>

using namespace std;

int main(){

int t,n;

cin>>t;

for(int i=0; i<t; i++){

cin>>n;

int A[n];

int j = 0;

while(j<n){

cin >> A[j];

j++;

}

int ans = 1;

for(int k = 1; k<n; k++){

if( A[k] < A[k-1])

ans++;

}

cout << ans <<endl;

}

return 0;

}

















You are given a binary array  of  elements. The array consists of 0's and 1's. You can perform the following operations as many times as possible:

Select a subarray starting from the first index that is inversion-free and delete it.
Determine the minimum number of operations to delete the entire array.

Inversion free: There are no two indices  and  in array  such that  and (). 
Subarray: A subarray is an array obtained after deleting some elements from the beginning (prefix) possibly 0 and deleting some elements from the end (suffix) possibly 0.
Input format

The first line contains an integer  denoting the number of test cases. 
The first line of each test case contains an integer  denoting the number of elements in array .
The second line contains  space-separated integers of array .
Output Format

Print  lines and for each test case:

Print the minimum number of operations to delete the entire array.
Constraints




Sample Input
3
4
0 0 1 1
2
1 0
2
0 0
Sample Output
1
2
1
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
First test case: Entire array can be deleted in one operation as [0,0,1,1] has no inversions.

Second test case: You can delete the entire array in two operations in first [1] and in second [0], you can not do it one as [1,0] has inversions.

Third test case: You can do this in one operation as array includes no inversions.

Note: You always need to delete the subarray from 0th index (0-based indexing).
