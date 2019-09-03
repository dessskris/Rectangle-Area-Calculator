#include <iostream>
//#define CATCH_CONFIG_MAIN
//#include "catch.hpp"
using namespace std;

void get_dims(int& length, int& width);
int area(int length, int width);

/*---MAIN PROGRAM---*/
int main() {
  int length, width;
  get_dims(length, width);
  
  cout << "The area of a " << length << " x " << width;
  cout << " rectangle is " << area(length, width) << endl;
  
  return 0;
}
/*---END OF MAIN PROGRAM---*/

/*---GET DIMENSIONS FUNCTION---
Obtain an input of length and width
to update the values of the corresponding reference parameters
*/
void get_dims(int& length, int& width) {
  cout << "Enter the length: ";
  cin >> length;
  cout << "Enter the width: ";
  cin >> width;
  cout << endl;
}
/*---END OF FUNCTION---*/

/*---RECTANGLE AREA FUNCTION---
Input: two integers in the same measurement unit corresponding to length and width of a rectangle respectively
Output: the area of the rectangle
*/
int area(int length, int width) {
  return length * width;
}
/*---END OF FUNCTION---*/
/*
TEST_CASE( "Rectangle areas are computed", "[area]" ) {
    REQUIRE( area(1,2) == 2 );
    REQUIRE( area(2,2) == 4 );
    REQUIRE( area(4,3) == 12 );
}*/
