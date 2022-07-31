#include<bits/stdc++.h> 
using namespace std;
 const int N = 300005; 
 int n, k, id = N, A[N], P[N]; 
 long long tot, Mn = LLONG_MAX;
  bool CMP(int i, int j) {
      return (A[i] < A[j]);} 
      int main() { scanf("%d%d", &n, &k);
       for (int i = 1; i <= n; i++) 
       scanf("%d", &A[i]), P[i] = i;
        sort(P + 1, P + n + 1, CMP);
        for (int i = 1; i <= n; i++) tot += A[P[i]] - A[P[1]];
        for (int i = 1; i <= n; i++) {
          if (tot >= k && Mn > tot - k) Mn = tot - k, id = P[i];
           if (tot >= k && Mn >= tot - k) Mn = tot - k, id = min(id, P[i]);
            if (tot < k && Mn > ((k - tot) & 1)) Mn = (k - tot) & 1, id = P[i]; 
            if (tot < k && Mn >= ((k - tot) & 1)) Mn = (k - tot) & 1, id = min(id, P[i]);
             tot += (A[P[i + 1]] - A[P[i]]) * 1LL * (i + i - n); }
              return !printf("%d %lld\n", id, Mn); }






















Problem
Suppose we have  cities with integer coordinate on a line. First, we have to select a city to be the capital. Then in each operation, we have to choose a non-capital city and change it's coordinate by  ( or ). We have to pick the capital and do the operations exactly  time so that the sum of distances from cities to the capital is minimized. Print the index of the selected capital and the desired sum after exactly  operations. If there are multiple such choices, output the smallest index of an optimal capital. 

You are required to print the index of the selected capital and required sum after  operations. If there are multiple such choices, print the smallest index of an optimal capital.

Input format

First line: Two integers  and  
Second line:  integers where the  integer that contains the coordinate of the  city
Output format

Print two integers that represent the index of the capital and the minimized required sum respectively.

Constraints



Sample input #2

5 47019
19912129 5 7138912 913 200134
Sample output #2

5 27003104

Sample Input
2 4
9 5
Sample Output
1 0
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
In the first sample we should choose the first city as the capital and move the other one four times.

Note that two or more cities may coincide before or after the operations.

In the second sample it's optimal to choose the last city as the capital.
