#include <bits/stdc++.h>

#include <stdlib.h>

#include<vector> //it was showing vector not declared

//because I forgot to add #include<vector>

#include <iostream>


 

typedef long long ll;

using namespace std;


 

int main()

{

ios_base::sync_with_stdio(false);

cin.tie(NULL);


 

    ll people, m;

cin>>people>>m;

 

ll borrower, lender, amount, minimum=0;;

 

vector<long long> transactions(people, 0);

//mistake was that I declared wrong size of vector//


 

for(ll i=0; i<m; i++)

{

cin>>borrower>>lender>>amount;

transactions[borrower]+=amount;

 

transactions[lender]-=amount;

}

//because zeroth index is not either a lender nor a //borrower//

for(ll k=1; k<=people;k++)

{

// cout<<"\n"<<transactions[k];

if(transactions[k]>0)

{

minimum+=transactions[k];

}

}

cout<<minimum;

 


 

}













Problem
There are  people living in a neighborhood. When in debt, neighbors borrow money from each other to clear their debts. A neighbor has already borrowed money from another neighbor for  times to clear a debt. 

All the neighbors want to clear what they owe each other. Their plan is to clear their debts in such a way that the total number of transactions is minimized because the fee per transaction is very high. For example, if the  person pays the  person  dollars, then the amount of this particular transaction is . 

You are required to minimize the sum of the transaction amount.

Input format

First line: Two integers  and 
Next  lines: Three integers , , and  which means that the  person has lent the  person  amount of dollars
Output format

Print only one integer that represents the minimum sum of the transaction amount.

Constraints




It is guaranteed that  and  are distinct.

Sample input

2 3
1 2 10
1 2 3
2 1 5

Sample output

8

Sample Input
4 3
1 2 3
1 4 4
2 4 3
Sample Output
7
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
Note that any person can pay any other person any amount of money (not necessarily those who have lent money to each other before).

