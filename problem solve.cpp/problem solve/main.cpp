/*#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,temp = 0;
    int arr[n];
    cout<<"Enter the number of element : ";
    cin>>n;
    cout<<"Enter arr element : ";
    for(int i = 0; i <= n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i <= n; i++){
        cout<<arr[i]<< " ";
    }

    int siz = sizeof(arr[0])/4;

    for(int i = 0, j = siz; i <= n, j >= 0; i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout<<endl<<"The Element is : ";
    for(int i = 0; i <= n; i++){
        cout<<arr[i]<< " ";
    return 0;
}
    }*/


/*#include <bits/stdc++.h>
using namespace std;

void primeNumber(int n)
{
    int prime[100] ={0};
    for(int i = 2; i <= n; i++){
       if(prime[i] == 0){
        for(int j = i*i; j <= n; j += i){
            prime[j] = 1;
        }
      }
    }
    for(int i = 2; i <= n; i++){
        if(prime[i] == 0){
            cout<<i<< " ";
        }
    }
    cout<<endl;
}

int main()
{
    int x;
    cout<< "Enter a number : ";
    cin>>x;
    primeNumber(x);
}*/

#include <bits/stdc++.h>
using namespace std;

int display(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a*b);

    return c1+c2 - c3;
}
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int sum = display(n,a,b);
    cout<< "the number is "<<sum<<endl;

}
