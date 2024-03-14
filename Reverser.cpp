#include "Reverser.h"
#include <cmath>
#include <iostream>
using namespace std;

int Reverser::reverseDigit(int value) {
  if (value < 0) return -1
  //divide number by 10, remove remainder
  int rem = value % 10;
  if (value / 10 > 0) {
    int power = log10(value);
    int multiplier = pow(10, power);
    return rem * multiplier + reverseDigit(value/10);
  }
  return rem;
}

string Reverser::reverseString(string characters) {
  int length = characters.length();
  string rstring = "";
  if (length > 1) {
    rstring += characters[length-1];
    rstring += reverseString(characters.substr(0, length-1));
  } else if (length == 1) {
    return characters;
  }
  return rstring;
}