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
