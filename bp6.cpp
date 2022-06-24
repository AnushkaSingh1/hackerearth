#include <iostream> 
#include<string> 
using namespace std; 
int main() {    
     string s;    
      char ch;    
       int i;    
        cin>>s;   
          ch=s[2];   
  if ((int(s[0])+int(s[1]))%2==0 && (int(s[3])+int(s[4]))%2==0 && (int(s[4])+int(s[5]))%2==0 && (int(s[7])+int(s[8]))%2==0)     {      
       if(ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' && ch != 'Y')         {           
        cout<<"valid";      
           }        
            else     
                {      
                           cout<<"invalid";      
                              }     }   
                                else    
                                     cout<<"invalid"; 
}









#include <iostream> 
#include <string>
 using namespace std; int main() {  
      string inputval;        
       cin >> inputval;         
        bool VowelInvalidcount = false;    
         string vowels = "AEIOUY";  
            for (int v = 0; v <= 6; v++) // vowels check loop    
             {         if (inputval[2] == vowels[v])      
                {             VowelInvalidcount = true;     
                    }     }  
                       if (VowelInvalidcount == true )     
                       {          cout << "invalid" << endl;       
                         return 0;     }   
                           int evenvalidcounter = 0;    
                            for(int j = 0; j <= 9; j++)    
                             {         if (j == 9 )        
                              {             break;    
                                   }      
                         char temp1 = inputval[j];   
                    char temp2 = inputval[j+1];     
                        int num1 = (int)temp1 - 48;  
                               int num2 = (int)temp2 - 48;  
                 if (isdigit(temp1) && isdigit(temp2))       
                   {             if (j != 2)           
                     {                 int sum = num1 + num2; 
                    if (sum % 2 == 0)               
                      {                     evenvalidcounter++;  
                     }             }               
                        }        }     
                        if (VowelInvalidcount == false && 
                        evenvalidcounter == 4)     
                        {         cout << "valid" << endl;  
                   }   
                     else if (VowelInvalidcount == true ||evenvalidcounter != 4)     {       
                       
                         cout << "invalid" << endl;     }           }














Arpasland has surrounded by attackers. A truck enters the city. The driver claims the load is food and medicine from Iranians. Ali is one of the soldiers in Arpasland. He doubts about the truck, maybe it's from the siege. He knows that a tag is valid if the sum of every two consecutive digits of it is even and its letter is not a vowel. Determine if the tag of the truck is valid or not.

We consider the letters "A","E","I","O","U","Y" to be vowels for this problem.

Input Format

The first line contains a string of length 9. The format is "DDXDDD-DD", where D stands for a digit (non zero) and X is an uppercase english letter.

Output Format

Print "valid" (without quotes) if the tag is valid, print "invalid" otherwise (without quotes)

Sample Input
12X345-67
Sample Output
invalid
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
The tag is invalid because the sum of first and second digit of it is odd (also the sum of 4'th and 5'th, 5'th and 6'th and 8'th and 9'th are odd).
