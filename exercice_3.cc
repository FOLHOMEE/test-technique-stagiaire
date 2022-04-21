// ~1h 45minutes

#include <iostream>
#include <vector>

// First method which was too much time consumming
/*long long rec(int i, int j, int x, int y) {
	if (x >= i || y >= j)
		return 1;
	long long res = rec(i, j, x + 1, y) + rec(i, j, x, y + 1);
	return res;
}
long long process_too_long(int i, int j) {
	return rec(i, j, 0, 0);
}*/

long long process(int i, int j) {
	std::vector<std::vector<long long>> distance(j, std::vector<long long>(i));
	for (int y = 0; y < j; y++)
		distance.at(y).at(0) = 1;
	for (int x = 0; x < i; x++)
		distance.at(0).at(x) = 1;

	for (int y = 1; y < j; y++) {
		for (int x = 1; x < i; x++)
			distance.at(y).at(x) = distance.at(y).at(x - 1) + distance.at(y - 1).at(x);
	}

	return distance.at(j - 1).at(i - 1);
}

int main(int argc, char* argv[]) {
	if (argc > 3) {
		std::cout << "Wrong format : executable [ hight ] [ length ]" << std::endl;
		return 1;
	}
	else if (argc == 1)
		std::cout << "Number of path for 20x20 : " << process(20, 20) << std::endl;
	else if (argc == 2) {
		int i = std::atoi(argv[1]);
		std::cout << "Number of path for " << i << "x" << i << " : " << process(i + 1, i + 1) << std::endl;
	}
	else {
		int i = std::atoi(argv[1]);
		int j = std::atoi(argv[2]);
		std::cout << "Number of path for " << i << "x" << j << " : " << process(i + 1, j + 1) << std::endl;
	}
	return 0;
}