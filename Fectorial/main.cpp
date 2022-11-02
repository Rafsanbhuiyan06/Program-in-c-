#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fect(int n){
   if(n == 0)
        return 1;

   int down = fect(n-1);
   int up = n*down;
    return up;
}


int main()
{
    int x;
    cout<< "Enter a number : ";
    cin>>x;
    int valu = fect(x);
    cout<< "The value is "<<valu;
    return 0;
}
