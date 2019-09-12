/*******************************************

Program to find weather given integer
is even or odd

*********************************************/

#include <iostream>
using namespace std;

// Function prototype.
int evenOrOdd(int myInteger);

int main() {

  cout << endl;
  cout << "############################ Running Program ############################" << endl;
  cout << endl;

  // Declares variable.
  int myInteger;
  // Declares loop control variable.
  int control;

  // Prompts user.
  cout << "Press any key to run program or -1 to quit program: ";
  cin >> control;
  cout << endl;

  // Builds sentinel while loop.
  while(control != -1) {

    // Prompts user.
    cout << "Enter integer to find weather it is even or odd: ";
    cin >> myInteger;
    cout << endl;

    // Function call.
    // Takes one parameter.
    evenOrOdd(myInteger);

    // Prompts user.
    cout << "Enter -1 to quit program: ";
    cin >> control;
    cout << endl;

  }

  cout << endl;
  cout << "######################### Exiting Program #############################" << endl;
  cout << endl;

  return 0;

}

// Builds function.
// Takes one parameter,
// local variable myInteger in the
// main function.
int evenOrOdd(int myInteger) {

  // Builds if statement.
  if(myInteger % 2 == 0) {

    cout << myInteger << " is even" << endl;

  } else {

    cout << myInteger << " is odd" << endl;

  }

  return myInteger;

}
