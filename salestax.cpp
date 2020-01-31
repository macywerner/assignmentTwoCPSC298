#include <iostream>
using namespace std;

/*Implement a function called addTax. The function addTax has two formal
parameters: taxRate, which is the amount of sales tax expressed as a percent; and cost, which is the cost
of an item before tax. The function returns the value (float) of cost so that it includes sales tax. */

// funtction to find total cost
float addTax(double salesTax, double cost) {
  double taxAmount;
  float totalCost;

  //calculation of tax
  taxAmount = (salesTax / 100) * cost;

  // add tax for total
  totalCost = cost + taxAmount;

  return totalCost;

}
int main(int argc, char **argv) {

  // intialize variables
  double price;
  double tax;

  //prompt for user userInput
  cout << "Enter the cost: ";
  cin >> price;

  cout << "Enter the sales tax: ";
  cin >> tax;

  //call function and print to screen
  cout << "$" << addTax(tax, price) << " is your total cost." << endl;

  return 0;
}
