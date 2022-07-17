#include <bits/stdc++.h>


 

using namespace std;




 

int n;


 

vector<int> g;




 

void f(long long v) {


 

if (v > n) return;


 

if (v > 0) g.push_back(v);


 

f(10*v + 4);


 

f(10*v + 7);


 

}




 

int main() {


 

cin >> n;


 

f(0);


 

int result = 0;


 

for (int i = 0; i < (int)g.size(); ++i)


 

for (int j = i + 1; j < (int)g.size(); ++j)


 

if (__gcd(g[i], g[j]) == 1)


 

++result;


 

cout << result << '\n';


 

return 0;


 

}





















Problem
A natural number is special if it consists of only digits  and . Find the number of pairs of сoprime special numbers  such that . 

Input format

The first line contains an integer  ().

Output format

Print a single number denoting the answer to the problem.

Sample Input
10
Sample Output
1
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
Clarification: https://en.wikipedia.org/wiki/Coprime_integers

Answer = 1 because 4 and 7  10 and gcd(4,7) = 1


