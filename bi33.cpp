#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){

        int count=0;

        int n;

        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++){

            cin>>arr[i];

        }

        for(int i=0;i<n-1;i++){

            if((arr[i]>arr[i+1]) || ((arr[i+1]-arr[i])>1) || (arr[0]>1)){

                count=1;

                break;

            }

        }

        if(count==1)

         cout<<"-1"<<endl;

        else{

            cout<<"a";

            for(int i=1;i<n;i++){

                if(arr[i-1]!=arr[i]){

                    int x = 96+arr[i];

                    cout<<char(x);

                }

                else

                 cout<<"a";

            }

        }

        cout<<endl;

    }

}




















Problem
Alice was given a string . She made a prefix array  out of it. The value of prefix array i.e.  is the count of distinct characters in the substring of string  from position  to  . Since the string is lost, you need to print a string that satisfies this prefix array.

If there is more than one correct answer, print the lexicographically smallest of them. If there is no such string then you need to print  .

Input
The first line contains an integer  that denotes the total number of test cases.
The first line of each test case contains an integer  that denotes the length of the prefix array . (Note that the length of string  is also ).
The second line of each test case contains  space separated integers that denote the value of array .

Output
In the output, you need to print  if there is no possible string or the smallest possible string that satisfies the prefix array constraint.

Constraints



Sample Input
2
3
1 1 2
3
1 2 1
Sample Output
aab
-1
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
In the first test case, "aab" is the smallest possible string that satisfies the given prefix array.
In the second test case, there is no string possible.
