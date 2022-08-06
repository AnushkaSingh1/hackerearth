#include<bits/stdc++.h> 
using namespace std; 
int main() {     
	string a;    
	 cin>>a;    
	  int s=0;   
	    int c=0;   
		  int k=a.length(); 
		      for(int i=0;i<k-1;i++)     {  
				         if(a[i]!=a[i+1])         {
							  c++;         }       
							    else         {      
					 s=max(s,c);   
					          c=0;  
			        }  
			   } 					   
					cout<<max(s,c)+1;   
					  return 0; }











Problem
A string  is called a good string if and only if two consecutive letters are not the same. For example,  and   are good while  and  are not.

You are given a string . Among all the good substrings of  ,print the size of the longest one.

Input format

A single line that contains a string  ().

Output format

Print an integer that denotes the size of the longest good substring of .

Sample Input
ab
Sample Output
2
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
The complete string is good so the answer is .
