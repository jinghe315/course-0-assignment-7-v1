#include <iostream>
#include <string>
using namespace std;

float GetUserInput (){
  std::cout << "Enter a number: ";
  int input; 
  cin >> input; 
  return input; 
}

float GetAbsoluteValue(float input) {
  if (input < 0) {
    return -1 * input;
  } else {
    return input;
  }
}

int main() {
  float value = GetUserInput();
  cout << "The absolute value is: " << GetAbsoluteValue(value);
  return 0;
}
