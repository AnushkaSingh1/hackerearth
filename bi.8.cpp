#include <bits/stdc++.h>

using namespace std;

int main()

{

ios_base::sync_with_stdio(false);

cin.tie(NULL);

string str;

getline(cin, str);

string hrs = str.substr(0, 2), min = str.substr(3, 2);

int hr = stoi(hrs), mi = stoi(min),totalmin;

totalmin = (hr*60) + mi;

double times = (totalmin*11)/720 + 1;

cout<<times<<endl;

return 0;

}















It's 12 o'clock at midnight  and Simon cannot sleep! So he decided to stare at the clock on his wall until he falls asleep.

He saw the clock's hands and got to thinking 'How many times they'll pass each other until I fall asleep'. Imagine that he fell asleep at . Now, you must  figure out how many times clock's hands overlap from  to  (including  and ).



You can see an overlap in the provided picture.

Note: His clock only has an hour and minute hands.

Input format

The first and only line you will get a time in the  format.

Output format

Print the number of times that the hour and minute hands pass each other from  to .

Sample 2

08:36

In this sample, clock's hands overlap 8 times.

Sample 3

03:16

In this sample, clock's hands overlap 3 times.

Sample Input
01:05
Sample Output
1
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
The hands pass each others only at .


