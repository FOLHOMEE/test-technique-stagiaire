// ~40 minutes

#include <iostream>

// Using long long to prevent too great int value

// Computes the length of the collatz sequence of n
long long collatz(long long n) {
	long long deepness = 0;
	while (n != 1) {
		if (n % 2 == 0) {
			while (n % 2 == 0)
				n /= 2;
		}
		else
			n = 3 * n + 1;
		deepness++;
	}
	return deepness;
}

// Computes and determines which value has the greatest length
long long process(long long n) {
	long long max_deep = 2;
	long long res = 2;
	long long col;
	for (long long i = 2; i < n; i++) {
		std::cout << i << std::endl;
		col = collatz(i);
		if (col > max_deep) {
			res = i;
			max_deep = col;
		}
	}
	return res;
}

int main(int argc, char* argv[]) {
	if (argc > 2) {
		std::cout << "Wrong format : executable [ n ]" << std::endl;
		return 1;
	}
	else if (argc == 1) {
		std::cout << "Max deepness within 1m values : " << process(1000000) << std::endl;
		std::cout << "Test with more values : executable n" << std::endl;
	}
	else
		std::cout << "Max deepness within " << argv[1] << " values : " << process(std::atol(argv[1])) << std::endl;
	return 0;
}