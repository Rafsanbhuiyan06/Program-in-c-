/*#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fect(int n)
{
    if(n == 1)
        return 1;

    else
        return n*fect(n - 1);
}

int main()
{
    int value = fect(5);
    cout << value << endl;
    return 0;
}*/

/*#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
    if(n == 1)
        return n;

    int prevsum = func(n - 1);
    return n+prevsum;
}

int main()
{
    int n;
    cin>>n;

    int sum = func(n);
    cout<<"The sume is "<<sum<<endl;
}*/

#include <bits/stdc++.h>
using namespace std;

int power(int n, int p){
    if(p == 0){
        return 1;
    }
    int prevPower = power(n, p-1);
    return n*prevPower;
}

int main()
{
    int p,n;
    cin>>p>>n;
    int sum = (n,p);
    cout<< "the number is "<<sum<<endl;
}
