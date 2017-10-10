/*Tyler Allen
CS111
3-15-15
This program will output a multiplication table*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int multiple =1;

  cout<<"     1  2  3  4  5  6  7  8  9"<<endl;
  cout<<"------------------------------"<<endl;

  for(int row =1;row<=9;row++)
    {
      multiple=1;
      cout<<setw(2)<<row<<"|";

      for(int col =1;col<=9;col++)
	{
	cout<<setw(3)<<row*multiple;
         multiple++;
	}
      cout<<endl;
    }
  return 0;
}
