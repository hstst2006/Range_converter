#include <iostream>

//Convert the value range into a value between 0 and 255.
double convertRange(int oldMin, int oldMax, int oldValue){
  //Variables for the new range min and max values
  int newMin = 0;
  int newMax = 255;

  //Variables for the ranges
  //Using doubles to avoid integer division (which = 0)
  double oldRange = oldMax - oldMin;
  double newRange = newMax - newMin;

  double newValue = (oldValue - oldMin) * (newRange / oldRange) + newMin;

  return newValue;
}

int main() {
    int oldMin, oldMax, oldVal, newMin, newMax;
    double oldRange, newRange;
    double newValue;

    std::cout << "This program converts one range to another range\n\n";

    std::cout << "\nOld range lowest limit: ";
    std::cin >> oldMin;
    std::cout << "\nOld range max limit: ";
    std::cin >> oldMax;
    std::cout << "\nCurrent value: ";
    std::cin >> oldVal;
    std::cout << "\nNew range lowest limit";
    std::cin >> newMin;
    std::cout << "\nNew range max limit";
    std::cin >> newMax;

    oldRange = oldMax - oldMin;
    newRange = newMax - newMin;

    newValue = (oldVal - oldMin) * (newRange / oldRange) + newMin;

    std::cout << "The old value: " << oldVal << " in the range from " << oldMin << " to " << oldMax << " is...\n"
    << newValue << " in the new range from " << newMin << " to " << newMax << std::endl;

    std::cout << "\n\nPress any key to exit";

    return 0;
}
