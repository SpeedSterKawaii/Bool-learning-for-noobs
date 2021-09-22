#include <Windows.h>
#include <string>
#include <iostream>

using namespace std;

bool MyBool = true; // set this to true or false, 1 and 0 should work.

int main() //only works for console C++ app.
{
    cout<<"Wait, let me see if you put the bool to TRUE or FALSE...\n\n";//message that will show "searching"
    if (MyBool == TRUE)//if the bool is 1 (true)
    {
        cout<<"Nice, your bool is set to TRUE.\n";
      //run your code, because the bool is true.
      cout<<"Opening webpage..\n";
      system("start https://google.com/)");
      // return that the bool is set to true.
    }
    else if (MyBool == FALSE)//bool is set to false (dont worry u can do caps too)
    {
        cout<<"Oops, your bool is set to FALSE.\n";
      //dont execute any code, just tell the user that the bool is false.
    }
    else
    {
                cout<<"Bool isn't returning anything, so null.\n";
      //either the user is dumb and didnt set anything to 1 or 0.
    }
    getchar();//prevent console window from closing.
    return 0;
}
