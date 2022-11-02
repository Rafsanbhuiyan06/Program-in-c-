/*#include <bits/stdc++.h>
using namespace std;

void replacepi(string s){
     if(s.length() == 0){
        return;
     }
     if(s[0] == 'p' && s[1] == 'i'){
        cout<<"3.14";
        replacepi(s.substr(2));
     }
     else{
        cout<<s[0];
        replacepi(s.substr(1));
     }

}
int main()
{
    replacepi("piiippipiipppiiii");
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

void looping(int n)
{
    if(n == 0)
        return;

    looping(n-1);
    cout<<"The n is "<<n<<endl;
}

int main()
{
    looping(10);
    return 0;
}
