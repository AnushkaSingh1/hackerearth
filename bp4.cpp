#include <bits/stdc++.h>
using namespace std;

void minimumSteps(int ar1[], int ar2[], int n){ 
	       int ans = 0;    
		       bool flag = true;    

    while (*min_element(ar1, ar1 + n) > -1)    {   
		     int a = *min_element(ar1, ar1 + n);   
			 
		    for(int i = 0; i < n; i++)      {      
				      if (ar1[i] != a)            {       
						           ar1[i] -= ar2[i];      
								             ans += 1;     
											        }   
													     }                set<int> s1(ar1, ar1 + n);    
		           if (s1.size() == 1)        {      
					         flag = false;           
							  cout << ans << endl;     
							         break;       
									  }  
									    }  
										      if (flag)    {    
							    cout << -1 << endl;    }} 
								       int main(){  
										     int n;   
											  cin>>n; 
											     int ar1[n];   
												  int ar2[n];  
							  for(int i=0;i<n;i++)    {    
								      cin>>ar1[i];       
									                }   
						     for(int i=0;i<n;i++)    {    
								     cin>>ar2[i];         
									    }

    minimumSteps(ar1, ar2, n);

    return 0;}







Problem
You are given two arrays a1....an and b1...bn . In each step, you can set ai = ai-bi if ai >_bi. Determine the minimum number of steps that are required to make all 's equal.

Input format

First line:  n
Second line: a1..an
Third line: b1..bn
Output format

Print the minimum number of steps that are required to make all 's equal. If it is not possible, then print -1.

Constraints


Sample input

2
5 6
4 3

Sample output

-1

Sample Input
5
5 7 10 5 15
2 2 1 3 5
Sample Output
8
