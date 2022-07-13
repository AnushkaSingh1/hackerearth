#include<bits/stdc++.h>

using namespace std;

bool zeroHai(string str )

{

if((str.find('0') != std::string::npos))

return true;

else

return false;

}

long long int sumofdigits(int n)

{

long long int sum=0;

while(n>0)

{

/* if(n%10==0)

{

break;

} */

sum+=n%10;

n=n/10;

}

return sum;

 

}

long long int beautyfactor(long long int n)

{

if(n<10)

return n;

else

return beautyfactor(sumofdigits(n)) ;

}


 

bool anyDigitRepeated(int n )

{

long long int arr[10]={0};

while(n!=0)

{

long long int rem=n%10;

arr[rem]++;

n=n/10;

}

bool repeated=false;

for(long long int i=0;i<10;i++)

{

if(arr[i]>1)

{

repeated=true;

break;

}

 

}

return repeated;

}

int main()

{

long long int b,k;

cin>>b>>k;

if( ((b>0)&&(b<10))&&(k==9) )

{

cout<<-1<<endl;

return 0;

}

bool mila=true;

for(long long int i=pow(10,k-1);i<=pow(10,k)-1;i++)

{

if( (beautyfactor(i)==b )&&(zeroHai(to_string(i))==false)&&(anyDigitRepeated(i)==false) )

{

cout<<i<<endl;

mila=false;

break;

}

 

 

}

if(mila==true)

cout<<-1<<endl;

return 0;

 

 

}

















Problem
You are given a positive integer n. The beauty factor of a number is the sum of digits obtained till the obtained sum is a single digit.

Example

Beauty factor of 1987 = 1+9+8+7 = 25 = 2+5 = 7
Beauty factor of 10 = 1+0 = 1
You are given a beauty factor, . Your task is to find a minimum number () of length  whose beauty factor is .

Here, the length of a number is defined as the number of digits a number has. 

Note: The digits of the number in the output must be distinct and must be a positive integer

Input format

The first line contains the beauty factor   and the length of a number  .

Output format

Print the minimum number of length  whose beauty factor is . If no such number is possible to make the beauty factor  with length , then print .

Sample Input
5 3
Sample Output
149
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
This is pretty starightforward. 149 is the least number which has beauty factor of 5 and the length of number is 3.

Note : Beauty factor of 149 = 1+4+9 = 14 = 1+4 = 5
