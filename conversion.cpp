#include <iostream>
using namespace std;

/*Write a program that will read in a length in feet and inches and output the
equivalent length in meters and centimeters. Use at least three functions: one for user input, one or more
for calculating, and one for output(console). Include a loop that lets the user repeat this computation for
new input values until the user says he or she wants to end the program (user has to type exit). There are
0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.*/


const double CM_PER_IN = 2.54;
const int    IN_PER_FT = 12;

//print to screen the conversion solution
void toConsole(double meters, double centimeters){

  cout << "The converting length is: " << endl;
  cout << meters << " meters and " << centimeters << " centimeters." << endl;

}

//Converts a height in feet/inches to centimeters
double convert(int feet, int inches) {
   int totalInches;
   double cmVal;
   int meters;
   double centimeters;

   totalInches = (feet * IN_PER_FT) + inches; // Total inches
   cmVal = totalInches * CM_PER_IN;   // Convert inch to cm
   meters = cmVal / 100; // to meters
   centimeters = cmVal - (meters * 100); // remaining centimeters

   toConsole(meters, centimeters);

   return meters , centimeters;
}

// prompt user input of feet and inches
void userInput(){

  int feet;     // User defined feet
  int inches;     // User defined inches

  // Prompt user for feet/inches
  cout << "Enter feet: ";
  cin >> feet;

  cout << "Enter inches: ";
  cin >> inches;

  convert(feet , inches);
}

int main(int argc, char **argv){

  // intialize variables for the continuation
  bool keepConvert = true;
  string answer = "";

  //while loop for continue or exit purposes
  while (keepConvert == true){

    userInput();

    cout << "Would you like to convert again? (y or n)? " << endl;
    cin >> answer;
    if (answer == "n") {
      keepConvert = false;
    }

  }

  return 0;
}
