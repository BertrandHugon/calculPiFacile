#include <iostream>
#include <gmpxx.h>

mpq_class kalkulu( unsigned int n);

int main(int argc, char ** argv) {
	unsigned int n = 800000;
	std::cout << kalkulu(n).get_d() << std::endl;
	return 0;
}

mpq_class kalkulu( unsigned int n) {
	
	mpz_class big_n (n);
	mpz_class kvadrato (0);
	kvadrato = big_n * big_n;
	mpz_class sumo (0);
	mpz_class j (1);

	j = big_n- 1;

	mpz_class i (1);

	for (i = 1; cmp(i, big_n) < 0; i ++) {
		while ( i * i + j * j > kvadrato) {
			-- j;
		}
		sumo += j;
	}
	sumo *= 4;
	mpq_class r ( sumo, kvadrato);
	return r;
}

