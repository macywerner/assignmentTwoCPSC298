#include <iostream>
using namespace std;
/*Write a program that will read up to ten nonnegative integers into an array
called numberArray and then write the integers back to the screen (console output). For this exercise you
need not use any functions. */

int main(int argc, char **argv) {
  int numberArray[10];
  int number;
  int amount;

  // while loop for an input of 10 numbers
  while (amount < 10) {

    //user input fot ten numbers
    cout << "Enter a nonnegative number: ";
    cin >> number;

    numberArray[amount] = number;
    amount = amount + 1;
  }

  //print array to screen
  for (int i = 0; i < 10; i++) {
    cout << numberArray[i] << endl;
  }

  return 0;

}
