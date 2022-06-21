#include <iostream>

#include <string>

using namespace std;

int main() {
int usernum;

string str;
cin >> usernum >> str;
bool b = true;
for(int i = 0; i < str.length(); ++i) {
if(str[i] == 'H' && str[i + 1] == 'H' ) {
     b = false;
}
}

if(b) {
    cout << "YES";
    for(int i = 0; i < str.length(); ++i) {
        if(str[i] == '.') {
            str.replace(i, 1, "B");
        }
    }
    cout << endl << str;
}
else {

    cout << "NO";
}
return 0;
}
