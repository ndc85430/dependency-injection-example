#include <iostream>
#include "greet.h"

int main() {
  std::cout << "Enter hour of day: ";
  int hour_of_day;
  std::cin >> hour_of_day;

  greet(hour_of_day, std::cout);

  return 0;
}
