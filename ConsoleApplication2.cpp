#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include <set>
#include <string>
#include <vector>

std::vector < std::pair<double, double>> MakeSin (double leftLimit, double rightLimit, double userSteps) {
	double allSteps = abs(leftLimit) + abs(rightLimit) + 1;
	double step = allSteps / userSteps;
	std::vector < std::pair<double, double>> table;
	for (double x = leftLimit; x <= rightLimit; x += step) {
		table.push_back({ x, sin(x) });
		std::cout << x << ' ' << sin(x) << '\n';
	}
	return table;
}
int main() {
	MakeSin(-5, 6, 6);
}


