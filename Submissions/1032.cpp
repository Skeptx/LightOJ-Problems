/*                                                                                  *\
  Author | Henry Morales
    File | LightOJ-Problems/Submissions/1032.cpp
  Source | https://github.com/Skeptx/LightOJ-Problems/blob/main/Submissions/1032.cpp
  Notice | Copyright 2024 Henry Morales
\*                                                                                  */

#include <inttypes.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	uint_fast16_t T;
	scanf("%" SCNuFAST16, &T);
	for (uint_fast16_t t = 1; t <= T; ++t) {
		uint32_t N;
		scanf("%" SCNu32, &N);
		if (N < 6) {
			printf("Case %" SCNuFAST16 ": %c\n", t, N == 3 ? '1' : '0');
			continue;
		}
		uint_fast8_t adjacent = 1;
		uint_fast8_t bits = 0;
		uint32_t n = 30 - (uint32_t)__builtin_clz(N);
		uint64_t summation = (uint64_t)n << n - 1;
		for (uint32_t i = n; i > 1; --i) {
			if ((uint32_t)(1 << i & N) == 0) {
				adjacent = 0;
				continue;
			}
			summation += ((uint64_t)i - 1 << i - 2) + (bits << i);
			if (adjacent) {
				++bits;
			}
			adjacent = 1;
		}
		switch (N & 3) {
		case 0:
			summation += bits;
			break;
		case 1:
			summation += bits << 1;
			break;
		case 2:
			summation += bits * 3 + adjacent;
			break;
		default:
			summation += bits << 2 | adjacent << 1 | 1;
		}
		printf("Case %" SCNuFAST16 ": %" SCNu64 "\n", t, summation);
	}
	return EXIT_SUCCESS;
}
