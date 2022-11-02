#include <iostream>

using namespace std;

void dic(int n){
    if(n == 0)
        return;
    cout<<n<<endl;
    dic(n - 1);
}

void inc(int x)
{
    if(x == 0)
        return 1;
    inc(x - 1);
    cout<<x<<endl;
}
int main()
{
   int n;
   cout<< "Enter a number : ";
   cin>>n;
  // dic(n);
   inc(n);
    return 0;
}
