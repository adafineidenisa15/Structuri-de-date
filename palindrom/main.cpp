#include <iostream>
#include<cstring>
using namespace std;
 char s[101];
 int main()

{ cin.getline(s,101);
if(strcmp(strrev(s),s)==0)
    cout<<"da";
else cout<<" nu";
return 0;
}


