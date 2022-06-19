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
