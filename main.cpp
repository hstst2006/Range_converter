#include <iostream>

//Convert a range to a new range
//FIXME: Add conversion for negative ranges
double convertRange(double valueToConvert, double oldMin, double oldMax, double newMin, double newMax){

    //Errors
    if(oldMin == oldMax){
        std::cout << "Input range is zero!" << std::endl;
        return 0;
    }
    if(newMin == newMax){
        std::cout << "Output range is zero!" << std::endl;
        return 0;
    }
    if(oldMin == newMin && oldMax == newMax){
        std::cout << "The ranges are equal, no conversion needed!" << std::endl;
        return valueToConvert;
    }
    if(valueToConvert < oldMin || valueToConvert > oldMax){
        std::cout << "Value to convert out of range!" << std::endl;
        return -1;
    }

    //Declare variables
    double oldRange = oldMax - oldMin;
    double newRange = newMax - newMin;
    double newValue = (valueToConvert - oldMin) * (newRange / oldRange) + newMin;

    return newValue;
}

int main(){

    //Example: Convert a value from a 10 bit sensor into an 8 bit analog value
    std::cout << convertRange(500, 0, 1023, 0, 255);

    return 0;
}