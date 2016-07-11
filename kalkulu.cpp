#include <iostream>

double kalkulu( unsigned int n);

int main(int argc, char ** argv) {
	unsigned int n = 4000;
	std::cout << kalkulu(n) << std::endl;
	return 0;
}

double kalkulu( unsigned int n) {
	
	unsigned long int kvadrato = n * n;
	unsigned long int sumo = 0;
	unsigned int j = n - 1;

	for (unsigned int i = 1; i < n; i ++) {
		while ( i * i + j * j > kvadrato) {
			-- j;
		}
		sumo += j;
	}
	return 4 * static_cast<long double>(sumo) / static_cast<long double>(kvadrato);
}

