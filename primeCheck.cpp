#pragma once
#include <cmath>
#include <utility>

static std::pair<bool, int> isPrimeAndDivisor(int n) {

	std::pair<bool, int> finalResult = std::make_pair(true, 1);
	
	if (n <= 1) {
		finalResult.first = false;
		finalResult.second = -1;
	}

	for (int i = 2; i <= sqrt(n); ++i) {
		if (!(n % i)) {
			finalResult.first = false;
			finalResult.second = i;
			break;
		}
	}

	return finalResult;
}
