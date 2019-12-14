// An example of a do-while loop.
#include <iostream>
using namespace std;
int main () 
{
float height;
do
  { cout << "How tall are you?";
    cin >> height;
if ((height < 3.5) || (height > 9.5))
  { cout <<  "No way! You can't be that size!" << endl;
    cout << "Tell me the truth...";
  }
  while ((height < 3.5)  || (height >9.5));}
while (height < 4.5);
  { cout << "You must be at least 4.5 feet tall to go on this ride." << endl;cout << "Sorry!" << endl;
  }
else 
  { cout << "Enjoy the ride!.";
  }
return;
}