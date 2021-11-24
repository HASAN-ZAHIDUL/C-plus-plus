#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    for (int i=1; i<=5; i++)//The outer loop is used for making all the other rows maintained
    {
      for (int j=1; j<=5; j++)//The inner loop is used for making all column getting filled up within a row starting for row-1
      {
          cout<<"*";
      }
      cout<<endl;// It is used to separate each row with 5 stars.
    }
    return 0;
}
