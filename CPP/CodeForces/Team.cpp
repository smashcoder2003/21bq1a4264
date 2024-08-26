#include <iostream> 
#include <cmath> 

int main() { 
	int n;
	std::cin >> n;
	int petya;
	int vasya;
	int tonya;
	int count = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> petya >> vasya >> tonya;
		if (petya + vasya + tonya >= 2) {
			++count;
		}
	}
	std::cout << count;
}

