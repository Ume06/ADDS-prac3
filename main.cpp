#include <iostream>
#include "Reverser.h"

using namespace std;

int main() {
  int value = 678;
  Reverser test;
  int rvalue = test.reverseDigit(-10);
  cout << rvalue << endl;
  cout << test.reverseString("Jack") << endl;
}