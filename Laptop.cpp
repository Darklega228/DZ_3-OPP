#include "Laptop.h"

Laptop& Laptop::SetWeightNout(unsigned int w1) {
	if (w1 >= 1 && w1 <= 10) weightNout = w1;
	else throw "Ѕыло передано неверное значение в параметр w1. ќжидаетс€ целое число в диапазоне от 1 до 10 включительно.\n";
	return *this;
}

unsigned int Laptop::GetWeightNout() const {
	return weightNout;
}

Laptop& Laptop::SetHeigthNout(unsigned int h1) {
	if (h1 >= 1 && h1 <= 3) heightNout = h1;
	else throw "Ѕыло передано неверное значение в параметр w2. ќжидаетс€ целое число в диапазоне от 1 до 3 включительно.\n";
	return *this;
}

unsigned int Laptop::GetHeigthNout() const {
	return heightNout;
}

Laptop& Laptop::SetHertz(int h2) {
	hertz = h2;
	return *this;
}

int& Laptop::GetHertz() {
	return hertz;
}

void Laptop::SetLaptop(unsigned int w1, unsigned int h1, int h2) {
	SetWeightNout(w1);
	SetHeigthNout(h1);
	SetHertz(h2);
}

void Laptop::Print() const {
	cout << weightNout << "кг " << heightNout << "высота " << hertz << "гц " << "\n";
}