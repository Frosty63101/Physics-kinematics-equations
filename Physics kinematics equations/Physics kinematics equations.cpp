#include <iostream>

#include <cmath>

#include <stdlib.h>

#include <cstdlib>

#include <cstring>

#include <string>

#include <sstream>

#include <conio.h>

constexpr auto PI = 3.14159265;
constexpr auto c = 3000000000000000;
constexpr auto h = 0.000000000000004136;

int main()
{
	long float a{}, vo{}, xo{}, x{}, dt{}, y{}, b{}, n{}, r{1};
	r = 1;
	do {
		std::cout << "enter a, vo, xo, x, dt\n";
		std::cin >> a;
		std::cin >> vo;
		std::cin >> xo;
		std::cin >> x;
		std::cin >> dt;

		y = vo + (a * dt);

		b = (1 / 2 * a) * (pow(dt, 2)) + (vo * dt) + xo;

		n = pow(vo, 2) + 2 * a * (x - xo);

		std::cout << y << "\n" << b << "\n" << n << "\n";

		system("pause");

		system("cls");

	} while (r == 1);
}