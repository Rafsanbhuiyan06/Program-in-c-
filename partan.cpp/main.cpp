/*#include<iostream>
using namespace std;

int main()
{
    int row = 5, colam = 6;


    for(int i = 0; i< row; i++)
    {
        for(int i = 0; i<colam; i++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}*/

/*#include<iostream>
using namespace std;

int main()
{
    int row,colam,i,j;
    cout<<"Enter Row and colam : ";
    cin>>row>>colam;

    for(i = 0; i <= row; i++)
    {
        for(j = 0; j <= colam; j++)
        {
            if(i == 0 || i == row)
            {
                cout<<" * ";
            }
            else if(j == 0 || j == colam)
            {
                cout<<" * ";
            }
            else
                cout<<"   ";
        }
        cout<<endl;

    }
}*/
#include<iostream>
using namespace std;

int main()
{
   int hight = 6;

   for(int i = hight; i >= 0; i--)
   {
       for(int j = 0; j <= i; j++)
       {
       cout<<" * ";
       }
       cout<<endl;

   }

}
