// This program calculates the user's pay.

#include <iostream>

int main()
{
  double bars, rate, pay;
  
  // Intro sentence.
  std::cout << "Welcome to the Earnings Calculator!\n";

  // Get the number of candy bars.
  std::cout << "How many candy bars did you sell? ";
  std::cin >> bars;

  // Get the cost of each candy bar.
  std::cout << "How much does the organization earn for each bar sold? ";
  std::cin >> rate;

  // Calculate the earnings.
  pay = bars * rate;

  // Display the earnings.
  std::cout << "Congratulations! You have earned $" << pay << " for the organization!" << std::endl;

  return 0;
}
