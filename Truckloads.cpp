#include "Truckloads.h"
#include <iostream>
int Truckloads::numTrucks(int numCrates, int loadSize) {
  int numPiles = 0;
  if (loadSize < numCrates) { 
    int pile1 = 0, pile2 = 0;
    if (numCrates % 2 == 0){
      pile1 = numCrates / 2;
      pile2 = numCrates / 2;
    } else {
      pile1 = numCrates / 2 + 1;
      pile2 = numCrates / 2;
    }
    numPiles += numTrucks(pile1, loadSize);
    numPiles += numTrucks(pile2, loadSize);
    return numPiles;
  } else {
    return 1;
  }
}