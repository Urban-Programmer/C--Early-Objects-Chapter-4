#include <iostream>
using namespace std;

int main() {

  cout << "*** This program will convert your number (1,2,3.. etc) to a roman Numeral (From 1-10) using the switch function ***";

  /*Conversation Chart 
  1 = I, 2 = II 3 = III, 4 = IV, 5 = V
  6 = VI, 7 = VII, 8 = VIII, 9 = IX, 10 = X 
  */

  //Setting our variable
  int userInput; //default to null

  //Asking for Number
  cout << "Number to convert: ";
  cin >> userInput;
  //Logical Statements Using Switch
  switch(userInput)
  {

  
    case 1: (userInput == 1);
    {
      cout << "Roman Convertsion: I" << endl;
      break;
    }
    case 2: (userInput == 2);
    {
      cout << "Roman Convertsion: II" << endl;
      break;
    }
    case 3: (userInput == 3);
    {
      cout << "Roman Convertsion: III" << endl;
      break;
    }
    case 4: (userInput == 4);
    {
      cout << "Roman Convertsion: IV" << endl;
      break;
    }
    case 5: (userInput == 5);
    {
      cout << "Roman Convertsion: V" << endl;
      break;
    }
    case 6: (userInput == 6);
    {
      cout << "Roman Convertsion: VI" << endl;
      break;
    }
    case 7: (userInput == 7);
    {
      cout << "Roman Convertsion: VII" << endl;
      break;
    }
    case 8: (userInput == 8);
    {
      cout << "Roman Convertsion: VII" << endl;
      break;
    }
    case 9: (userInput == 9);
    {
      cout << "Roman Convertsion: IX" << endl;
      break;
    }
    case 10: (userInput == 10);
    {
      cout << "Roman Convertsion: X" << endl;
      break;
    }
  }
}