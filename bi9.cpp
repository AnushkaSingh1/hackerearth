#include<bits/stdc++.h>

#include<iostream>

using namespace std;


 

int main()

{

    int t;

    cin>>t;

    while(t--)

    {

        int n;

        cin>>n;

        vector<pair<long int, long int> > v;

        for(int i=0; i<n; i++)

        {

            int x;

            cin>>x;

            v.push_back({x,i});

        }

 

        sort(v.begin(),v.end());

        int ans=0;

        int p=0;


 

for(int i=1; i<n; i++)

        {

            if(v[i].first!=v[p].first)

         {

                ans=ans+(v[i-1].second-v[p].second);

                p=i;

             }

        }

 

        ans=ans+(v[n-1].second-v[p].second);

        cout<<ans<<endl;


 

        

        

    }

}


























Problem
You are given an integer array . Your task is to calculate the sum of absolute difference of indices of first and last occurrence for every integer that is present in array .

Formally, if element  occurs  times in the array at indices , then the answer for  will be  if array  is sorted.

You are required to calculate the sum of the answer for every such  that occurs in the array.

Refer to sample notes and explanations for better understanding.

Input format

The first line contains an integer  that denotes the number of test cases.
The first line of each test case contains an integer  that denotes the number of elements in the array.
The second line of each test case contains  space seperated integers .
Output format

For each test case, print a single line as described in the problem statement.

Constraints




The sum of  over all test cases will not exceed 200000.

Sample Input
1
5
1 2 3 3 2
Sample Output
4
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
The elements which occur in the array are 1,2,3.

Let us consider 1 it has only one occurence so answer for 1 is 0.

Let us consider 2 it has two occurence at 2 and 5 so |5-2|=3

Let us consider 3 it has two occurence at 3 and 4 so |4-3|=1.

So total sum=0+3+1=4.

If there are more than two occrence we only need to consider the first and last.
