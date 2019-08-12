#include <iostream>
using namespace std;

int main() {
  cout << "****************" << endl;
  cout << "This program will determine the min and max" << endl;
  cout << "of the two numbers you'll input." << endl;
  cout << "****************" << endl;

  int number1 = 0;
  int number2 = 0;

  cout << "Number 1: ";
  cin >> number1;
  cout << endl;
  cout << "Number 2: ";
  cin >> number2;
  cout << endl;

  if (number1 < number2)
  {
    cout << "Min: " << number1 << " Max: " << number2 << endl;
  }

  else
  {
        cout << "Max: " << number1 << " Min: " << number2 << endl;

  }

}
