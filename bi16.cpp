#include<iostream>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){

        long int n,ans=0;

        cin>>n;

        ans=n*(n-1)+1;

        cout<<ans<<endl;

    }

    return0;

}

















Problem
You are given an N-sided regular polygon. You have connected the center of the polygon with all the vertices, thus dividing the polygon into N equal parts.

Your task is to find the count of simple cycles that exist in the modified structure of the polygon.

Input format

The first line contains an integer  denoting the number of queries.
The second line contains an integer  denoting the number of sides in the regular polygon.
Output format

Print the count of simple cycles corresponding to each query in a separate line.

Constraints
 

 

Sample Input
2
3
4
Sample Output
7
13
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
No Explanation Provided
