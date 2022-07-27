#include <bits/stdc++.h>


 

using namespace std;


 

int main()

{

    int t;

    cin>>t;

    while(t--){

string s;

cin>>s;

for(int i=0;i<s.size();i++)

{

if(s[i]>='a'&&s[i]<='z')

{

cout<<s[i];

}

else if(s[i]>='A'&&s[i]<='Z')

{

if(i>0)

{

s[i]=tolower(s[i]);

cout<<"_"<<s[i];

}

 

else if(i==0) {

s[i]=tolower(s[i]);

cout<<s[i];

}

}

}

    cout<<endl;

    }

}






















You are given a string  in the camel case format. Your task is to convert this string into the snake case format.

Examples of the camel case strings are as follows:

ComputerHope
FedEx
WordPerfect
Note: In the camel case string, the first character may or may not be capitalized.

Examples of the snake case strings are as follows:

computer_hope
fed_ex
word_perfect
Input format

First line:  denotes the number of test cases
Next  lines: String 
Output format
For each test case, print the snake case format of the given camel case in the string  in a new line.

Constraints


, where  indicates the length of string 

String  is made of lower and upper case English alphabets

Sample Input
6
HackerEarth
primeCheck
OddOrEven
random
getRandom
macOS
Sample Output
hacker_earth
prime_check
odd_or_even
random
get_random
mac_o_s
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
First 3 test cases are from the statement itself.
In the fourth test case i.e. random, there's no uppercase letter in the string, so no need to add underscore anywhere. Hence the output is also random.
Fifth case is similar to second test valuecase.
In sixth test case, there are continuous uppercase characters. We add underscore before each of them. This is not really the snake case conversion or so to speak but for now we are OK with that.
