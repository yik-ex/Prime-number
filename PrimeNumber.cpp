#include "PrimeNumber.h"

PrimeNumber::PrimeNumber() : m_currentPrimeNumber(1) {}

unsigned int PrimeNumber::GetNextPrimeNumber(void)
{
	unsigned int nextPrimeNumber = m_currentPrimeNumber + 1;
	while (!IsPrimeNumber(nextPrimeNumber))
	{
		nextPrimeNumber++;
	}
	
	m_currentPrimeNumber = nextPrimeNumber;

	return m_currentPrimeNumber;
}

void PrimeNumber::GetNextNPrimeNumbers(unsigned int arrSize, unsigned int arrOut[])
{
	for (size_t i = 0; i < arrSize; i++)
	{
		arrOut[i] = GetNextPrimeNumber();
	}
}

bool PrimeNumber::IsPrimeNumber(unsigned int numberBeingCheck)
{
	if(numberBeingCheck == 2 || numberBeingCheck == 3)
	{
		return true;
	}

	if((numberBeingCheck % 2) == 0 || (numberBeingCheck % 3) == 0)
	{
		return false;
	}

	unsigned int i = 5;
	unsigned int w = 2;

	while ((i * i) <= numberBeingCheck)
	{
		if (numberBeingCheck % i == 0)
		{
			return false;
		}

		i += w;
		w = 6 - w;

	}

	return true;
}

void PrimeNumber::Reset(void)
{
	m_currentPrimeNumber = 1;
}

unsigned int PrimeNumber::GetCurrentPrimeNumber(void) const
{
	return m_currentPrimeNumber;
}
