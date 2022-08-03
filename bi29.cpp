#include<bits/stdc++.h>

#include<math.h>

using namespace std;

#define ll long long int

int main(){

 

ll n;

cin>>n;

set<ll> v;

while(n--){

ll x;

cin>>x;

v.insert(x);

auto it=v.lower_bound(x);

if(it!=v.begin()){

cout<<*(--it)<< " ";

}

else{

cout<<-1<<" ";

}

auto it2=v.upper_bound(x);

if(it2==v.end()){

cout<<-1<< endl;

}

else{

cout<<*it2<<endl;

}

}

return 0;

}

















You are required to collect  numbers from a bag. Initially, the bag is empty. Whenever you put a number  in the bag, then the owner of the bag asks the question.

The questions are as follows:

What is the greatest integer that is smaller than  and present inside the bag?
What is the smallest number that is greater than  and present inside the bag?
If you answer both the questions correctly, then you can put  inside the bag. Your task is to answers the questions that are asked by the owner of the bag.

Input format

First line:  denoting the number of integers that you want to put inside the bag
Next  lines:  denoting the integer that you want to put inside the bag
Output format
For every integer , print the answers of the questions, in the form of space-separated integers, that are asked by the owner of the bag. If no such numbers exist in the bag, then print .

Constraints

All  are distinct.

Sample Input
5
1
4
2
3
7
Sample Output
-1 -1
1 -1
1 4
2 4
4 -1
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
Initially, the bag is empty so for the first integer  the answer to the first question is  similarly for the second question.
For  the greatest number smaller than  is and there is no number greater than  is present in the bag So the answer to the second question will be .
