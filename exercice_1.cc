// Time : ~20 minutes

#include <iostream>

// More brutal method just verifying a condition
int calcul_sum_1(int n) {
	int sum = 0;
	for (int i = 3; i < n; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	return sum;
}

// Method considering batch over dividability
int calcul_sum_2(int n) {
	int sum = 0;
	// Batch of number all dividable by 3
	for (int m_3 = 3; m_3 < n; m_3 += 3)
		sum += m_3;
	// Batch of number all dividable by 5
	for (int m_5 = 5; m_5 < n; m_5 += 5)
		sum += m_5;
	// Intersection of the 2 batch we need to subtract
	for (int m_15 = 15; m_15 < n; m_15 += 15)
		sum -= m_15;
	return sum;
}

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cout << "Wrong format : executable n" << std::endl;
		return 1;
	}
	std::cout << "Method 1 : " << calcul_sum_1(std::atoi(argv[1])) << std::endl;
	std::cout << "Method 2 : " << calcul_sum_2(std::atoi(argv[1])) << std::endl;
	return 0;
}