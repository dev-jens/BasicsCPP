#include <iostream>
#include <string>

/*
cin is for all the standard data types in c++ -> char, bool, int, float, double
String are a little diffrent in the way that we dont use cin to read a line but we use std::getline() function. 
because if we have spaces in our string and we use cin standard std::cin >> we only get the first character.
*/

int main()
{
    std::cout << "Hello programmer please enter the following data !" << std:: endl;
  

    std::string fullname, fav_food, fav_car;


    std::cout << "Please, enter your full name: ";
    std::getline(std::cin, fullname);
    std::cout << "Hello, " << fullname << " What is your favorite food" << std::endl;
    std::getline(std::cin, fav_food);
    std::cout << "Hello, " << fullname << "What is your favorite car" << std::endl;
    std::getline(std::cin, fav_car);
   
    std::cout << "your favorite car is " << fav_car << "your favorite food is " << fav_food << std::endl;

}



