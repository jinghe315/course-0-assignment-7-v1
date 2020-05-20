#include <iostream>
#include <string>
using namespace std;

int get_user_input() {
  std::cout << "Enter a number: ";
  int input; 
  cin >> input; 
  return input; 
}

int main() {
  int number = get_user_input();

  int value = 0;
  if (number % 1 == 0) {
    value++;
  }
  if (number % 2 == 0) {
    value++;
  }
  if (number % 3 == 0) {
    value++;
  }
  if (number % 4 == 0) {
    value++;
  }
  if (number % 5 == 0) {
    value++;
  }
  if (number % 6 == 0) {
    value++;
  }
  if (number % 7 == 0) {
    value++;
  }

  cout << "The number of multiples less than 10 for " << number << " is: " << value << endl;

  return 0;
}
