#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    for (int i=5; i>=1; i--)
    {
        for (int j=5; j>=i; j--)
        {
            cout<<"Y ";
        }
        cout<<endl;
    }
    return 0;
}
