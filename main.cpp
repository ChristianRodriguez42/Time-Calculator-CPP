#include <iostream>
using namespace std;

int main() 
{
  int total, day, hour, minute, second;
  cout << "Input the number of seconds: " << endl;
  cin >> total;

  if (total <= 0) {
    cout << "Invalid input!" << endl;
  }

  day = total / 86400;
  total = total - (day * 86400);

  hour = total / 3600;
  total = total - (hour * 3600);

  minute = total / 60;
  total = total - (minute * 60);

  second = total;
  
  if (day > 0) {
    cout << day;
    if (day == 1) {
      cout << " Day" << endl;
      }
      else {
        cout << " Days" << endl;
        }
  }

  if (hour > 0) {
    cout << hour;
    if (hour == 1) {
      cout << " Hour" << endl;
      }
      else {
        cout << " Hours" << endl;
        }
  }

  if (minute > 0) {
    cout << minute;
    if (minute == 1) {
      cout << " Minute" << endl;
      }
      else {
        cout << " Minutes" << endl;
        }
  }
  
  if (second > 0) {
    cout << second;
    if (second == 1) {
      cout << " Second" << endl;
      }
      else {
        cout << " Seconds" << endl;
        }
  }
  return 0;
  
}