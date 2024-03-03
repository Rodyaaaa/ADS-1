// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  for (int i = 2; i <= sqrt(value); i++)
{
	if (value % i == 0) return 0;
}
return 1;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
	if (n == 1)  return 2;
	else if (n == 2) return 3;
	int i =2, b=3;
	while (i <= n) {
		if (checkPrime(b)) i++;
		b++;
	}
	return --b;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
while (!checkPrime(value+1))
{
	value++;
}
return value + 1;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
int sum = 0;
for (int i = 2; i < hbound; i++) {
	if (checkPrime(i)) sum += i;
}
return sum;
}
