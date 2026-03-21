#include <iostream>  // for std::cout and std::cin

int main()
{
   std::cout << "Enter two numbers: ";

   int x{};
   std::cin >> x;

   int y{};
   std::cin >> y;

   std::cout << "The total is " << x + y ;

   return 0;
}