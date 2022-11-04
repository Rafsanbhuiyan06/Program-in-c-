#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int temp;
    int arr[] = {10,20,30,40,50};
   /* cout<<"Enter the number of element : ";
    cin>>n;
    cout<<"Enter arr element : ";
    for(int i = 0; i <= n; i++){
        cin>>arr[i];
    }*/

    int siz = sizeof(arr)/4;
    int swaped[siz-1];
    cout<< "The size is "<<siz <<endl;

    for(int i = 0, j = siz; i < siz, j > 0; i++, j--){

        swaped[j] = arr[i];
    }

    cout<<endl<<"The Element is : ";
    for(int i = 0; i <= siz; i++){
        cout<<swaped[i]<< " ";
    }
    return 0;
}
