#pragma once
class PrimeNumber
{
private:

	unsigned int m_currentPrimeNumber;

public:

	PrimeNumber();

	//return the next prime numver
	unsigned int GetNextPrimeNumber(void);
	
	//return the n next prime numbers to the array buffer send as argument
	void GetNextNPrimeNumbers(unsigned int, unsigned int[]);
	
	//return if the argument number is prime or not
	static bool IsPrimeNumber(unsigned int);

	//reset the private number counter
	void Reset(void);

	//get current prime number
	unsigned int GetCurrentPrimeNumber(void) const;

};


