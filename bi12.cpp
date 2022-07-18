#include<bits/stdc++.h>

using namespace std;

 

int main()

{

 int t;

 cin>>t;

 while(t--){

   string s;

   cin>>s;

 

   int letter[26]={0};

 

   for(int i=0; i<s.size(); ++i){

     letter[s[i]-'a']++;

   }

 

   int odd=0;

   for(int i=0; i<26; ++i){

     if(letter[i]>0 && letter[i]&1){

       odd++;

     }

   }

 

   if(odd<=1){

     cout<<"-1\n";

   }

   else{

     sort(s.begin(),s.end());

     cout<<s<<"\n";

   }

 

 }

 

 return 0;

}





















Problem
You are given a string  containing only lowercase alphabets. You can swap two adjacent characters any number of times (including 0).

A string is called anti-palindrome if it is not a palindrome. If it is possible to make a string anti-palindrome, then find the lexicographically smallest anti-palindrome. Otherwise, print .

Input format

The first line contains a single integer  denoting the number of test cases. The description of  test cases follows.
Each line contains a string  of lower case alphabets only.
Output format

For each test case, print the answer in a new line.

Constraints



 contains only lowercase alphabets.

Sample Input
4
bpc
pp
deep
zyx
Sample Output
bcp
-1
deep
xyz
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
In the first test case, you can create "bcp" which is not a palindrome and it is a lexicographically-smallest string.
In the second test case, you cannot form any anti palindrome.
