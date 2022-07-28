#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6 + 17;
int col[maxn], a[maxn];
int main(){
 ios::sync_with_stdio(0), cin.tie(0);
 int t;
 cin >> t;
 for(int i = 0; i < t; i++){
 int n, m;
 cin >> n >> m;
 for(int i = 1; i <= n; i++)
 cin >> a[i];
 memset(col, -1, sizeof col);
 for(int i = 1; i <= m; i++){
 int b;
 cin >> b;
 for(int j = i; j <= n; j += i)
 if(col[j] == -1 && a[j] - b <= 0)
 col[j] = i;
 }
 for(int i = 1; i <= n; i++)
 cout << col[i] << '\n';
 }
}



















There  people in your city. The  person contains  health point. You are trying to make these people walk in your locality. You walk for  days. On the  day, every walk decreases  health points of the person you are walking with. Also, on the  day, you can only walk with the  person if the person is still healthy and  is a multiple of . You can walk with as many people as you can but you can walk with a specific person only once in a day.

A person becomes unhealthy if their health point becomes less than or equal to . At the end of each day, their health points are restored to their original level if they are not unhealthy already.

Your task is to determine the day in which the  person becomes unhealthy or will remain healthy.

Input format

First line:  denoting the number of test cases
For each test case:
First line: Contains two integers  and  denoting the number of people and days on which you walk respectively
Next line:  integers where  denotes the health points of the  person
Next line:  integers where  denotes the reduction of the health of the  day's walk
Output format
Print  lines where the  of these​​​​​ lines contain a single integer, denoting the day when the  person becomes unhealthy. Otherwise, print  if the  person never becomes unhealthy.

Constraints




Sample Input
2
6 5
2 1 6 4 3 7
2 3 7 3 4
3 3
2 1 3
2 2 2
Sample Output
1
1
3
-1
5
3
1
1
-1
Time Limit: 3
Memory Limit: 256
Source Limit:
Explanation
In the first sample,
 and  people become unhealthy in the  day.
 and  person becomes unhealthy in the  day.
 person becomes unhealthy in the  day.

 person remains healthy.
