/*#include <iostream>

using namespace std;

int main()
{
   int StudentMarks[5];
   int i, sum = 0;
   for(i = 0; i < sizeof(StudentMarks)/4; i++)
   {
       cout<<"Enter subject "<<i+1<<" marks :";
       cin>>StudentMarks[i];cout<<endl;
   }
   for(i = 0; i < sizeof(StudentMarks)/4; i++)
   {
       sum += StudentMarks[i];
   }
   cout<<"The sume is "<<sum;
    return 0;
}*/

/*#include<iostream>
#include<conio.h>
using namespace std;

int FuncInSum(int x, int y)
{
    //int x = 10, y = 20;
    int *ptr, *pt, sum;

    ptr = &x;
    pt  = &y;

    sum = *ptr + *pt;
    return sum;
}

int main()
{
    int reasult = FuncInSum(10, 20);

    cout<<"The sum is "<<reasult<<endl;
}*/

// *********** RENDOM NUMBER *************//

/*#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{

    for(int i = 0; i<= 5; i++)
    {
        int RendomVlo = rand()%11;
        cout<<"the value is "<<RendomVlo<<endl;
    }

}*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    while(1)
    {
    int RndVlo, somethig;
    cout<<"Enter Number : ";
    cin>>somethig;

    RndVlo = rand()%5;
    if(RndVlo == somethig)
    {
        cout<<"You ar win";
        break;
    }
    else{
        cout<<"You are loser : "<<endl;
        cout<<"Rendom number is "<<RndVlo<<"\n"<<endl;
    }

    }
}
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

}
