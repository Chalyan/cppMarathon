#include <iostream>
#include <functional>
#include <cmath>
#include <utility>
#include "primeCheck.cpp"

int main()
{
	auto lambda = [&](int i) {return 5 * i * i + 5 * i + 1; };
	std::cout << std::boolalpha;

	for (int i = 0; i < 16; ++i) {
		int variable = lambda(i);
		std::pair<bool, int> currentResult = isPrimeAndDivisor(variable);
		std::cout << i << " --- " << variable << " --- " << currentResult.first <<
			" --- " << currentResult.second << "\n";
	}
}
