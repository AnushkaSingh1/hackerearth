#include<iostream>

using namespace std;

// Recursive function to return gcd of a and b

long long gcd(long long int a, long long int b)

{

if (b == 0)

    return a;

return gcd(b, a % b);

}

// Function to return LCM of two numbers

long long lcm(int a, int b)

{

    return (a / gcd(a, b)) * b;

}

int main()

{

long long int t,a,b;

cin>>t;

while(t--)

{

cin>>a>>b;

long long int x=lcm(a,b);

cout<<x/a<<" "<<x/b<<"\n";

}

return 0;

}


















A zoo have two types of creatures, type A has  hands and type B has  hands. Spawn the smallest number of creatures so they can grab each other hands in the following conditions:

Each creature should only grab the hands of another creature type.
Each creature should grab with all of its hands.
What is the smallest number of creature needed?

Note: It is guaranteed that under the given conditions answer is unique.

Input  format

The first line contains  number of test cases .
Each of the next  lines contains two integers  denoting the number of type A creature hands and the number of type B creature hands.
Output format

The output contains  lines. For each test case, print two numbers , the number of type A creatures, and the number of type B creatures. Consider that  should be smallest possible.

Constraints



Sample Input
1
20 2
Sample Output
1 10
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
At least 1 of each creture types needed.

One creature of type A has 20 hands.

Ten creatures of  type B have 20 hands.

So they can grab each other hands in asked conditions.
