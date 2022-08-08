#include<iostream>

#include<string>

using namespace std;

int main()

{

    string s;

    string t;

    cin>>s>>t;

    int ans=0;

    for(char a='a';a<='z';a++)

    {

        int count=0;

        for(int i=0;i<s.length();i++)

        {

            if(s[i]==a)

            {

                count++;

            }

        }

        for(int i=0;i<t.length();i++)

        {

            if(t[i]==a)

            {

                count++;

            }

        }

        if(count%2!=0)

            ans=ans+count-1;

        else

            ans=ans+count;

    }

    cout<<ans+1<<endl;

}


















String Clash
1275
84%
20
★★★★★2.8
6 votes
Basic Programming, Basics of Implementation, Easy, Hash Maps, Implementation, String Manipulation
Share
Details
Submissions
Discussion
Similar Problems
Editorial
Problem
You are given two strings  and  of equal lengths. You need to pick some characters from the first string, some from the second string and then form a new string by rearranging the characters you have picked. You need to find the length of the maximum string that you can make which will be a palindrome.

Input

The first line contains a string  as input and the next line contains a string  as input.

Output

In the output, you need to print an integer which denotes the maximum length of the palindrome that can be obtained.

Constraints

Sample Input
aab
cba
Sample Output
5
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
In the sample test case, you can form the string baaab by picking the characters from both the strings.
