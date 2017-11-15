#include <iostream>
#include <string>
#include "PrimeNumber.h"

int main(void)
{
	PrimeNumber prime;
	unsigned int arrOfPrimeNumbers[10];
	
	std::cout << "Printing Prime nuber - GetNextPrimeNumber()" << std::endl;
	std::cout << prime.GetNextPrimeNumber() << std::endl;
	std::cout << prime.GetNextPrimeNumber() << std::endl;
	std::cout << prime.GetNextPrimeNumber() << std::endl;
	std::cout << prime.GetNextPrimeNumber() << std::endl;
	std::cout << prime.GetNextPrimeNumber() << std::endl;
	std::cout << prime.GetNextPrimeNumber() << std::endl;
	std::cout << prime.GetNextPrimeNumber() << std::endl;
	std::cout << prime.GetNextPrimeNumber() << std::endl;
	std::cout << prime.GetNextPrimeNumber() << std::endl;
	std::cout << prime.GetNextPrimeNumber() << std::endl;


	std::cout << "Printing Prime numbers - GetNextNPrimeNumber()" << std::endl;
	prime.GetNextNPrimeNumbers(10, arrOfPrimeNumbers);
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << arrOfPrimeNumbers[i] << std::endl;
	}
	std::cout << "Reset" << std::endl;
	prime.Reset();

	std::cout << "Printing Prime numbers - GetNextNPrimeNumber()" << std::endl;
	prime.GetNextNPrimeNumbers(10, arrOfPrimeNumbers);
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << arrOfPrimeNumbers[i] << std::endl;
	}

	std::cout << "Check if a certain number is prime" << std::endl;
	int x = 5;
	std::string isPrimeOrNot = (PrimeNumber::IsPrimeNumber(x)) ? " is a Prime number" : "is not a Prime number";
	std::cout << "The number: " << x << isPrimeOrNot << std::endl;
	x = 10;
	isPrimeOrNot = (PrimeNumber::IsPrimeNumber(x)) ? " is a Prime number" : "is not a Prime number";
	std::cout << "The number: " << x << isPrimeOrNot << std::endl;
	x = 15;
	isPrimeOrNot = (PrimeNumber::IsPrimeNumber(x)) ? " is a Prime number" : "is not a Prime number";
	std::cout << "The number: " << x << isPrimeOrNot << std::endl;
	x = 29;
	isPrimeOrNot = (PrimeNumber::IsPrimeNumber(x)) ? " is a Prime number" : "is not a Prime number";
	std::cout << "The number: " << x << isPrimeOrNot << std::endl;

	
	return 0;
}