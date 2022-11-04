#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int number = 100;
      int counts;
    for(int i = 0; i<number; i++)
    {
        if(i%3 == 0)
        {
            continue;
        }
            counts++;
    }
    cout<<"The count is : "<<counts<<endl;

}
