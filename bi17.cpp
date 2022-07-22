#include<bits/stdc++.h>

using namespace std;

int main()

{

int T;

cin>>T;

while(T--)

{

long int l, r, s;

cin>>l>>r>>s;

long int min = l/s;

long int max = r/s;

if(l%s!=0)

{

min=min+1;

}

if(min<=max)

{

cout<<min<<" "<<max<<endl;

}

else

{

cout<<"-1"<<" "<<"-1"<<endl;

}

}

return 0;

}


 

























Problem
You like the sound of rain only if the sound ranges from  to  units. Every cloud makes  unit of sound. Determine the minimum and the maximum number of clouds that can produce the sound in the provided range.

Input format

First line: One integer  denoting the number of test cases
Next  lines: Three integers  and  denoting the provided range of the rain sound and the units of sound produced by each cloud
Output format

In  lines, print two space-separated integers that represent the minimum and the maximum number of the clouds that can produce the sound in the provided range.

Note: Print  if no answer is available.

Constraints


Sample Input
3
5 10 3
7 12 4
50 60 1
Sample Output
2 3
2 3
50 60
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
In the first test of the sample the answer is  because  which is in  and  which is also in . Also  which exceeds Parmis's interval and is considered noise
