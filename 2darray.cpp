#include <iostream>
using namespace std;

/*Write code that will fill the array a (declared below) with numbers typed in at
the keyboard. The numbers will be input five per line, on four lines (although your solution need not
depend on how the input numbers are divided into lines).
int a[4][5];*/

int main(int argc, char **argv){

  int a[4][5];
  int loop;
  int i;
  int j;
  int value;

  //for loop for each index
  for (i = 0; i < 4; i++){
    for (j = 0; j < 5; j++){
      //user input
      cout << "Enter number: ";
      cin >> value;
      a[i][j] = value;
    }
  }

  //print out array to screen
  for (i = 0; i < 4; i++){
    for (j = 0; j < 5; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;

  }
   return 0;
}
