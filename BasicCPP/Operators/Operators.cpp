#include <iostream>
#include <string>

/*
    this is how we do the basic operators.
    if and else are used the same as in other languages

    *** IMPORTANT ***
    We first have to declaire our function before we can use them otherwise c++ does not know that this function exists
*/

void intro() {
    std::cout << "Basic Calculator" << std::endl;
    std::cout << "\t1. Add" << std::endl;
    std::cout << "\t2. substract" << std::endl;
    std::cout << "\t3. Mulitply" << std::endl;
    std::cout << "\t4. Devide" << std::endl;
   
}

double add(double num1, double num2) {
    return num1 + num2;
}
double substract(double num1, double num2) {
    return num1 - num2;
}
double mulitply(double num1, double num2) {
    return num1 * num2;
}
double devide(double num1, double num2) {
    return num1 / num2;
}


int main()
{
   intro();

   std::string input;
   std::cin >> input;
  
   double num1, num2, result = NULL;

   std::cout << "Number 1 >>> ";
   std::cin >> num1;
   std::cout << "Number 2 >>> ";
   std::cin >> num2;

   if (input == "1")
       result = add(num1, num2);
   else if (input == "2")
       result = substract(num1, num2);
   else if (input == "3")
       result = mulitply(num1, num2);
   else if (input == "4")
       result = devide(num1, num2);

   std::cout << "the result is " << result << std::endl;
}





