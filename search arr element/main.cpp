
/// Search element in a arr ///
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int siz, int i, int key){

   if(i == siz){
    cout<< "This element is note found"<<endl;
     return -1;
   }

   if(arr[i] == key)
    return i;

    return firstocc(arr,siz,i+1,key);
}
int main()
{
    int arr[] = {7,2,3,4,2,5,9};
    int value = firstocc(arr,7 ,0,9);
    cout<<value<<endl;
    return 0;
}*/

/// stape by stape ///

/*#include <bits/stdc++.h>
using namespace std;

void rechHome(int start, int endP)
{
    if(start == endP){
           cout<< "Done"<<endl;
           return;
    }
    rechHome(start+1,endP);
}

int main()
{
    rechHome(0,10);
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 5;
    int j = 5;
    i+1;
    j++;
    cout<<i<<endl<<j;
}
