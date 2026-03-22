#include <iostream>  // for std::cout and std::cin

int main()
{
   std::cout << "Enter the first number: ";

   int x{};
   std::cin >> x;

   std::cout << "Enter the second number: ";
   
   int y{};
   std::cin >> y;

   std::cout << "The total is " << x + y ;

   return 0;
}
