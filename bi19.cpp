#include<bits/stdc++.h>

#include<math.h>

using namespace std;

#define ll long long int



 

int main(){


 

ll n;

cin>>n;

ll l, gv=0,cv=0,gs,cs,a,b=0,z=0;

cin>>l;

string v;

cin>>v;


 

for(ll i=0;i<l;i++){

if(v[i]=='G'){

gv++;

}

if(v[i]=='C'){

cv++;

}

}


 

string s;


 

for(ll j=0;j<n;j++){

l=0,gs=0,cs=0;

cin>>l;

cin>>s;

for(ll i=0;i<l ;i++){

if(s[i]=='G'){

gs++;

}

if(s[i]=='C'){

cs++;

}

}

a=(gv*cs)+(gs*cv);

if(a>b){

b=a;

a=0;

z=j+1;

}


 

}

cout<<z<<endl;

return 0;

}
















Problem
You are creating a vaccine to fight against a worldwide novel pandemic virus. A vaccine contains a weakened virus that is injected inside people to produce antibodies to let it fight against the virus. The study of interaction among RNA of various viruses is quite necessary for this. An RNA consists of four types of molecules Guanine (), Adenine (), Cytosine (), and Uracil ().

You are given the structures of RNA for the pandemic virus and several vaccine viruses in the form of strings containing characters , , , and  representing respective molecules. You know that if there is higher interaction between the pandemic virus and vaccine virus, then better the vaccine will be. You also know that the only interaction between any two RNAs is a result of the interaction between their Guanine () and Cytosine () molecules. Formally, if the strings for RNA structures are  and , then you must consider the following points: 

One molecule of Guanine () of  and one molecule of Cytosine () of  will lead to one unit of interaction.
One molecule of Guanine () of  and one molecule of Cytosine () of  will lead to one unit of interaction.
Any other pair of molecules do not add to any interactions.
In this way, the total interaction between  and  is calculated as the sum of individual molecule pair interactions (as discussed above).

You must find the best available vaccine.

Input format

The first line contains a single integer  denoting the number of vaccines
The second line contains a single integer  denoting the length of the string denoting the RNA structure for the pandemic virus.
The third line contains a string  denoting the RNA structure for the pandemic virus.
Next  lines contains the following lines where:
 line contains a single integer  denoting the length of the string denoting the RNA structure for the  vaccine virus
 line contains a string  denoting the RNA structure for the  vaccine virus
Output format

Print a single integer  if the  vaccine is the best, that is, it has the maximum interaction with pandemic virus RNA, where  obviously holds.

If there are more than one answers possible (in case of two or more have the maximum interaction value), then print the smallest answer possible.

Constraints


Sample Input
2
5
ACGGU
6
AGCAAA
8
UAUAAGAG
Sample Output
1
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
RNA of MARS-20 virus contains 2 molecules of G and 1 molecule of C.

Interaction with first vaccine = 3 units

Interaction with second vaccine = 2 units

Hence, first vaccine is better.
