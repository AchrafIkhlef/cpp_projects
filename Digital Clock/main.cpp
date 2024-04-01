#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
  int hours, min, sec = 0;

  cout << "What's The Hour ?\n";
  cout << "Hours: ";
  cin >> hours;
  cout << "Minutes: ";
  cin >> min;
  cout << "Seconds: ";
  cin >> sec;

  while (true)
  {
    system("cls");
    if (sec > 59)
    {
      min++;
      sec = 0;
    }
    if (min > 59)
    {
      hours++;
      min = 0;
    }
    if (hours > 23)
    {
      hours = 0;
    }

    cout << hours << ":" << min << ":" << sec;
    sec++;
    Sleep(1000);
  }

  return 0;
}
