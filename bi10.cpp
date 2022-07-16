#include<bits/stdc++.h>
#define int long long int 
using namespace std; 
void solve(){ int n, q;
             cin >> n >> q;
             assert(1 <= n and n <= 200000);
             assert(1 <= q and q <= 200000); 
             int a[n + 1]; int c_e = 0; 
             int c_o = 0;
             for(int i = 1 ; i <= n ; i++) { 
               cin >> a[i]; 
               assert(1 <= a[i] and a[i] <= 1000000000); 
               if(a[i]%2) c_o++; else c_e++; 
             } 
             for(int i = 1 ; i <= n - 1 ; i++){
               int u, v;
               cin >> u >> v; 
               assert(1 <= u and u <= n);
               assert(1 <= v and v <= n);
               assert(u != v); 
             }
             while(q--) { 
               int u, val; 
               cin >> u >> val;
               assert(1 <= u and u <= n); 
               assert(1 <= val and val <= 1000000000);
               if(a[u]%2) c_o--;
               else
                 c_e--; 
               a[u] = val; 
               if(a[u]%2) c_o++; 
               else c_e++; 
               int answer = (c_e*(c_e - 1))/2;
               answer += (c_o*(c_o - 1))/2;
               answer += (c_o + c_e); 
               cout << answer << " ";
             } 
             cout << endl;
            }
signed main(){ 
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL); 
  int t; 
  cin >> t; 
  assert(1 <= t and t <= 10); 
  while(t--){ 
    solve(); 
  } }


















You are given an undirected tree  with  nodes. Every node is assigned a value denoted by .

A simple path  is said to be beautiful if the number of pairs of nodes  where  is odd and  is even and number of pairs of nodes  where  is even and  is odd are equal.

Given  queries of the form:

: Set the value of node  equal to , i.e. set  and find the number of ordered pairs  such that the simple path between node  and node  is beautiful.
Note: 

Assume 1 based indexing.
Queries are interdependent, changes made in previous queries are retained.
Input format

The first line contains an integer  denoting the number of test cases.
For each test case:
The first line contains two space-separated integers  denoting the number of nodes in the tree and the number of queries respectively.
Next line contains  space-separated integers denoting the array .
Next  lines contain two space-separated integers , denoting an edge between node  and node . 
Next  lines contains the queries.
Output format

For each test case in a new line, print the answer for queries in a space-separated format.

Constraints


Sample Input
1 
6 1
4 2 1 3 5 2
1 2
2 3
2 4
1 5
5 6
3 2
Sample Output
13
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
For the first query:

Set 
The simple path between given pair of nodes  is beautiful.
(1, 1), (2, 2), (3, 3), (6, 6), (1, 2), (1, 3), (1, 6), (2, 3), (2, 6), (3, 6), (4, 4), (5, 5), (4, 5)
Total 13 such pairs exist.
 
