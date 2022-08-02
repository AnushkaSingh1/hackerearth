#include<bits/stdc++.h>

using namespace std;


 

int main(){

int n = 3;

string s1 , s2, s3;

cin>>s1>>s2>>s3;

string s = "" + s1 + s2 + s3;

int d = 0 , o = 0 , x = 0;


 

for(int i = 1; i <= n*n; i++){

if(s[i-1] == '.') d++;

else if(s[i - 1] == 'O') o++;

else if(s[i - 1] == 'X') x++;

}

if((abs(x - o) == 1 || abs(x - o) == 0) && !(o != 0 && x == 0)){

if(s[0] == 'X' && s[1] == 'X' && s[2] == 'X') {

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[0] == 'X' && s[3] == 'X' && s[6] == 'X' ) {

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[0] == 'X' && s[4] == 'X' && s[8] == 'X') {

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[1] == 'X' && s[4] == 'X' && s[7] == 'X') {

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[2] == 'X' && s[5] == 'X' && s[8] == 'X'){

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[3] == 'X' && s[4] == 'X' && s[5] == 'X') {

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[6] == 'X' && s[7] == 'X' && s[8] == 'X'){

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[2] == 'X' && s[4] == 'X' && s[6] == 'X') {

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[0] == 'O' && s[4] == 'O' && s[8] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[0] == 'O' && s[1] == 'O' && s[2] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[0] == 'O' && s[3] == 'O' && s[6] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[1] == 'O' && s[4] == 'O' && s[7] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[2] == 'O' && s[5] == 'O' && s[8] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[3] == 'O' && s[4] == 'O' && s[5] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[6] == 'O' && s[7] == 'O' && s[8] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[2] == 'O' && s[4] == 'O' && s[6] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else{

if(d == 9) cout<<"X's turn.";

else if(d == 0) cout<<"It's a draw.";

else{

if(x > o) cout<<"O's turn.";

else if(o > x) cout<<"X's turn.";

else if(x == o) cout<<"X's turn.";

}

}

}

else cout<<"Wait, what?";

return 0;

}


















Problem
A game of tic-tac-toe is played on a  square grid. Each cell is either empty (denoted by '.') or occupied by one of the two players ('X' and 'O'). X goes first and then they take turns alternatively. If X is written three times in a straight line, then X wins and the game ends. The same goes for O. If there is no empty cell left, then the game ends as a draw.

You are given the description of a game of tic-tac-toe. You have to determine the state of the game.

The states of the game are as follows:

If the game is invalid, that is, if there is no possibility of it happening, output "Wait, what?".
If X has won, then print "X won." else if O has won print "O won.".
If it is a draw, then print "It is a draw.".
Otherwise, print whose turn it is, "X's turn." or "O's turn." accordingly.
Sample Input 2

...
...
...
Sample Output 2

X's turn.
Sample Input
O.X
.OX
..X
Sample Output
X won.
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
None.
