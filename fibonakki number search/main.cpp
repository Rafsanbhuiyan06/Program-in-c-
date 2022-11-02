/*#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    int ans = fib(n-1) + fib(n-2);
    return ans;
}
int main()
{
    int value = fib(8);
    cout << "The value is " <<value<< endl;
    return 0;
}*/

#include <iostream>
using namespace std;

int main() {

  int n, reversed_number = 0, remainder;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) {
        cout<<"n is "<<n<<endl;
    remainder = n % 10;
    cout<< "remainder is "<<remainder<<endl;
    reversed_number = reversed_number * 10 + remainder;
    cout<<"reversed_number is"<<reversed_number<<endl;
    n /= 10;
    cout<< "last n is"<<n<<endl;
    cout<<"\n\n";
  }

  cout << "Reversed Number = " << reversed_number;

  return 0;
}
