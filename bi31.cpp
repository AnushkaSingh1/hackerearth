#include <iostream>
#include <string>
int main()
{     
std::string str{};    
 std::cin>>str;   
  if(str[str.size()-1]=='6')     
  std::cout<<-1;    
 else      {         
int count = 0;        
  for(int i{0};i<str.size();++i)         
{              if(str[i]=='6')          
                ++count;        
  }         
std::cout<<str.size()-count;    
  }
}











Problem
There are   number of girls and they rolled a dice in turns one after another.

If the number on the dice is , then the dice will be rolled again until she get a number other than .

Since you know the sequence of numbers which the dice shows when rolled each time, you have to find what is the total number of girls or if the sequence is invalid.

Input format

A single line that contains a string   denoting the sequence of numbers the dice rolls on written as string.

Output format

If the sequence is valid print the number of girls  
If the sequence is invalid print 
Sample Input
3662123
Sample Output
5
Time Limit: 2
Memory Limit: 256
Source Limit:
Explanation
The second person rolls the dice  times so the number of people will be .
