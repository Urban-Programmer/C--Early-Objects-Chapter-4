#include <iostream>
using namespace std;


//If a book is purchased the user is awarded a point, depending on the amount of books the points vary. {only 1 variable needed}
int main() {
  //variable
  int userInput;

  //Print Statement and Input:
  cout << "*** This program will determine how many points you have based on the books you have checked out ***" << endl;

  cout << "Number of Books checked out during this month: ";
  cin >> userInput;
  cout << endl;

  //if statement


  if (userInput <= 0)
  {
    cout << "Monthly Points: 0";
  }
  
  else if (userInput == 1)
  {
    cout << "Monthly Points: 5";
  }

  else if (userInput == 2)
  {
    cout << "Monthly Points: 15";
  }

  else if (userInput == 3)
  {
    cout << "Monthly Points: 30";
  }

  //I used the else statement here because anything of 3 will 50 points
  else 
  {
    cout << "Monthly Points: 50";
  }

}