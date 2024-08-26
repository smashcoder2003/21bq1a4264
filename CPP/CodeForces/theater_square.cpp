#include <iostream> 
#include <cmath>

int main() {
	int n, m, a;
	std:: cin >> n >> m >> a;
	long long res;
	res = ceil( 1.0 * n / a) * ceil( 1.0 * m / a);
	std:: cout << res; 
}