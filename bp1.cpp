#include <iostream> 
using namespace std; 
int main() {     
  string str;    
  cin >> str;    
  int zcount = 0;   
  for (int i = 0; i <= str.length(); i++)     {         
    char zchar = str[i];       
    if (zchar == 'z')         {          
      zcount++;        
    }   
  }    
  int ocount = 0;   
  for (int j = 0; j <= str.length(); j++)    {       
    char ochar = str[j];       
   if ( ochar == 'o')         {        
     ocount++;      
   }   
  }   
  if (2*zcount == ocount)     {         
    cout << "Yes" << endl;   
  }   
  else     {        
    cout << "No" << endl;  
  }
}


You are required to enter a word that consists of x and y that denote the number of Zs and Os respectively. The input word is considered similar to word zoo if 2x=y .

Determine if the entered word is similar to word zoo.

For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

Input format

First line: A word that starts with several Zs and continues by several Os.
Note: The maximum length of this word must be 20 .
Output format

Print Yes if the input word can be considered as the string zoo otherwise, print No.

Sample Input
zzzoooooo
Sample Output
Yes
