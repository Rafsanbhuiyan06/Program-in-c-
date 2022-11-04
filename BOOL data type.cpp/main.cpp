/*#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "Enter two number : ";
    int a, b, sum;
    cin>>a>>b;
    for(int i = a; i <= b; i++)
    {
        if(isPrime(i))
            cout<<i<<endl;
    }

    return 0;
}*/
/*#include <iostream>
#include <conio.h>
using namespace std;

int sumFunc(int value)
{
    int sum = 0;
    for(int i = 0; i <= value; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int32_t n = 10;
    int vlu =  sumFunc(n);
    cout<<"the sum is "<<vlu<<endl;
}*/

/*#include <iostream>
#include <conio.h>
using namespace std;

int lenarScarch(int give[], int sarch, int sizes)
{
    for(int i = 0; i <= sizes; i++)
    {
        if(give[i] == sarch)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,11,22,23,24,25};
    int srh, arrSize = sizeof(arr)/4;
    cout<<"Enter the number you want to search ";
    cin>>srh;
    cout<<"The resive value is "<<lenarScarch(arr,srh,arrSize);

}*/

