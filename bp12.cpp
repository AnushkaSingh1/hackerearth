#include<iostream>

using namespace std;

int main()

{

    string s;

    cin>>s;

    int n=s.length();

    int flag=1;

    int i=0;

    for(int j=0;j<n;j++){

    if(s[j]>96&&s[j]<123){

        while(s[i]==s[n-1])

        {

            i=i+1;

            n=n-1;

            flag=0;

        }

    }

    }

    if(flag==0)

    {

        cout<<"YES";

    }

    else

    {

        cout<<"NO";

    }

    return 0;

}



















You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 

Note
String S consists of lowercase English Alphabets only.

Sample Input
aba
Sample Output
YES
Time Limit: 1
Memory Limit: 256
Source Limit:
























#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s,int len){

    int i=0;

    while(i<(len/2)){

        if(s[i]!=s[len-i])return 0;

        i++;

    }

    return 1;

}

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    string s;

    cin>>s;

    int len=s.length()-1;

    if(isPalindrome(s,len))cout<<"YES";

    else cout<<"NO";

    

}




















#include <bits/stdc++.h>

using namespace std;


 

int main()

{

    string s, rev;

    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--)

    {

        rev = rev + s[i];

    }

    if (s == rev)

    {

        cout << "YES" << endl;

    }

    else

    {

        cout << "NO" << endl;

    }

    return 0;

}
