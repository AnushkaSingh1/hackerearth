#include <iostream> 
#include <string> 
#include <math.h> 
using namespace std; 
int main() { 
	long N = 0;  
	 cin>>N;  
	  long data[N]; 
	  for(auto i=0; i<N; i++) {
		   cin>>data[i]; }  
		    long last[N]; 
			for(int i = 0; i < N; i++) { 
				last[i] = data[i]%10; } 
				if(last[N-1] == 0) { 
					cout<<"Yes"; 
					} 
					else { 
						cout<<"No"; 
						}  
						 return 0;
						  }







#include <iostream>

using namespace std;

int main() {

    long n,input;

    cin >> n;                                       

    while(n--){

     cin>>input; 

    }   

    if(input%10==0)

    cout<<"Yes";

    else

    cout<<"No";

}









Problem
You are provided an array A of size N that contains non-negative integers. Your task is to 
determine whether the number that is formed by selecting the last digit of all the N numbers is divisible by 10.

Note: View the sample explanation section for more clarification.

Input format

First line: A single integer N denoting the size of array A
Second line:   N space-separated integers.
Output format

If the number is divisible by 10 , then print YES . Otherwise, print NO .

Constraints
1<_N_<10^5
0<_A[I]<_10^5
Sample Input
5
85 25 65 21 84
Sample Output
No
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
Last digit of 85 is 5.
Last digit of 25 is 5.
Last digit of 65 is 5 .
Last digit of 21 is 1 .
Last digit of 84  is 4 .
Therefore the number formed is 55514 which is not divisible by 10 .
