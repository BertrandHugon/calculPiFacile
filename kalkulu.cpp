#include <iostream>
#include <gmpxx.h>

unsigned int precizeco (unsigned int n);

mpq_class kalkulu( unsigned int n);

int main(int argc, char ** argv) {
	unsigned int n = 8000000;
	unsigned int prec = precizeco (n);
	mpf_class r (kalkulu(n), prec * 4);
	mp_exp_t expo = 0;
	std::cout << r.get_str(expo, 10, prec + 1) << std::endl;
	if (1 != expo) {
		std::cout << "erreur" << std::endl;
		exit(1);
	}
	return 0;
}

unsigned int precizeco (unsigned int n) {
	unsigned int preciz = 0;
	n /= 8;
	while (n/=10) {
		++ preciz;
	}
	return preciz;
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

