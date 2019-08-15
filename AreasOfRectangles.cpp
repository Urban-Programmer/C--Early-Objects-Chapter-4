#include <iostream>
using namespace std;


//This program will compare 2 rectangles areas and determine which one is greater or display a message saying their equal
int main() {

//Variables
int rect_width1;
int rect_width2;
int rect_length1;
int rect_length2;
int rect_area1 = rect_width1 * rect_length1;
int rect_area2 = rect_width2 * rect_length2;

//Message and assign inputs
cout << "*** This program will ask you for the length and width of two rectangles ***" << endl;
cout << "*** The program will then compared both rectangles and determine which areas is greater *** " << endl;

//Width 1
cout << "Enter the Width for the first rectangle: ";
cin >> rect_width1;
cout << endl;

//Length 1
cout << "Enter the Length for the first rectangle: ";
cin >> rect_length1;
cout << endl;

//Width 2
cout << "Enter the Width for the second rectangle: ";
cin >> rect_width2;
cout << endl;

//Length 2
cout << "Enter the Length for the second rectangle: ";
cin >> rect_length2;
cout << endl;

//Comparement statement
if (rect_area1 > rect_area2)
{
  cout << "Rectangle 1's area (" << rect_area1 << ") is greater than Rectangle 2's area (" << rect_area2 << ")" << endl;
}

else if (rect_area2 > rect_area2)
{
  cout << "Rectangle 2's area (" << rect_area2 << ") is greater than Rectangle 1's area (" << rect_area1 << ")" << endl;
}

else 
{
  cout << "They are equal" << endl;
}
}
