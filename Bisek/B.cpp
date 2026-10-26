#include <iostream>

float F1(float x) {
	return (float)(pow(2.3, x) - 3 * x * x);
}

float F2(float x) {
	return (float)(pow(x, 3) - 0.1 * x * x + 0.4 * x + 1.2);
}

float* Bisek(int ur, float a, float b, float e, float* otv) {
	float c = 0.0;

	while (b - a > e) {
		c = (a + b) / 2;
		if (ur == 1)
			if (F1(a) * F1(c) < 0) b = c;
			else a = c;
		else {
			if (F2(a) * F2(c) < 0) b = c;
			else a = c;
		}
	}
	float x = (a + b) / 2;
	float d = (b - a);

	otv[0] = x;
	otv[1] = d;

	return otv;
}