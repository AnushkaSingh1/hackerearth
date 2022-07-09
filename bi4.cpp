#include <iostream>

#include <string>

#include <algorithm>

 

using namespace std;

 

int main() {

long long int t,N,M,i,result;

   cin >> t;

   for (int x = 0 ; x < t ; x++){

       result=0;

       cin >> N >> M;

       int A[M];

       for (i = 0 ; i < M ; i++) {

           cin >> A[i];

       }

       int S = sizeof(A) / sizeof(A[0]);

       sort(A,A+S);

       for (i = 0 ; i < M ; ++i) {

           if (N>=A[i]){

               N-=A[i];

               result++;

           }

       }

       cout << result << endl;

   }

   

}













Alice works as a restaurant manager. The restaurant has prepared  lunch boxes and Alice plans to distribute them to some schools. Consider that there are  schools and an  school orders  lunch boxes.

She wants to distribute lunch boxes to as many schools as possible. Also, she has the following rule:

For an  school, she gives either zero or  lunch boxes
Your task is to help Alice to determine the maximum number of schools that can get lunch boxes.

Input format    

The first contains an integer  that denotes the number of test cases in the input.
Each test case consists of two lines:
The first line contains two integers  and .
The second line contains  integers .
Output format

For each test case, you are required to print one integer that represents the maximum number of schools that can receive lunch boxes.

Constraints




Sample Input
2
10 4
3 9 4 2
5 6
3 2 1 1 2 1
Sample Output
3
4
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
In first test case 1,3,4 schools got lunch-boxes.

In second test case 3,4 and 2(or 5) schools got lunch boxes.
