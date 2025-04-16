#include <iostream>
using namespace std;

// Menu items
const int ADD = 1;
const int REMOVE = 2;
const int QUIT = 3;

// Symbols
const char EMPTY = '_';
const char END_OF_BAG = '*';

int getBagSize();
void initBag(char*, int);

int main() {
  int bagSize = getBagSize();
  
  // dynamically allocate the bag array
  char* bag;

  // initialize the bag
  initBag(bag, bagSize);

  /* program logic goes here */

  // deallocate the bag array
  
  return 0;
}

int getBagSize() {
    int sz;
    cout << "How big is the bag?: ";
    cin >> sz;
    return sz;
}

void initBag(char* bag, int bagSize) {
    bag[bagSize] = END_OF_BAG;
    for(char* p = bag; *p != END_OF_BAG; p++) {
        *p = EMPTY;
    }
}
