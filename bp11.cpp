#include<iostream>
#include <string.h>
int main(){ 
std::string st; 
std::cin>>st; 
for(int i=0;st[i]!='0';i++)   
if(isupper(st[i])) st[i]=tolower(st[i]);   
else if(islower(st[i])) st[i]=toupper(st[i]); 
std::cout<<st;}














#include<iostream>

#include<cstring>

using namespace std;

int main(){

    string s;

    cin>>s;

   for(int i=0;i<s.length();i++)

    {

        if(s[i]>96 && s[i]<123)

        s[i]=s[i]-32;

        else

        s[i]=s[i]+32;

    }

    cout<<s;

}
