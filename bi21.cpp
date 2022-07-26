#include <bits/stdc++.h>

using namespace std;


 

const int maxn = 1e4 + 17, mod = 1e9 + 7;

int n;

int main(){

    ios::sync_with_stdio(0), cin.tie(0);

    cin >> n;

    bool pat = 1;

    for(int i = 1; i < n; i++){

        int p;

        cin >> p;

        pat &= p == i;

    }

    long long sum = 0;

    for(int i = 0; i < n; i++){

        int x;

        cin >> x;

        sum += x;

    }

    cout << !pat * sum << '\n';

}




















Problem
You are given a rooted tree with  vertices. There is a number written on each leaf (a vertex contains degree 1 and the root node can be a leaf if it has just one child). The interest degree of each vertex is the sum of numbers written on leaves in subtree on this vertex. In each step, you can change the number written on a leaf by 1. How many steps are required to make the interest degree of all of the nodes equal?

Note: You can change the number written on a leaf to negative values.

Input format

First line: 
Next line:  numbers where the  number is  denoting the parent of  node 
Note: Node 1 is the root
Third line:  numbers where the  of them is  denoting the number that is written on vertex .
Note: It is guaranteed that if  is not a leaf, then .
Output format

Print the minimum number of steps that are required to make the interest degree of all of the nodes equal.

Constraints


Sample Input
5
1 1 2 3
0 0 0 2 3


Sample Output
5
Time Limit: 5
Memory Limit: 256
Source Limit:
Explanation
Decrease number which is written on 4 by 1.
Decrease number which is written on 4 by 1.
Decrease number which is written on 5 by 1.
Decrease number which is written on 5 by 1.
Decrease number which is written on 5 by 1.
