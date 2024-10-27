#include "Granny.h"

Granny& Granny::SetWeightG(unsigned int w1) {
	if (w1 >= 1 && w1 <= 31) weightG = w1;
	else throw "Ѕыло передано неверное значение в параметр w1. ќжидаетс€ целое число в диапазоне от 1 до 31 включительно.\n";
	return *this;
}

unsigned int Granny::GetWeightG() const {
	return weightG;
}

Granny& Granny::SetHeightG(unsigned int h1) {
	if (h1 >= 1 && h1 <= 30) heightG = h1;
	else throw "Ѕыло передано неверное значение в параметр h1. ќжидаетс€ целое число в диапазоне от 1 до 30 включительно.\n";
	return *this;
}

unsigned int Granny::GetHeightG() const {
	return heightG;
}

Granny& Granny::SetYears(int y) {
	years = y;
	return *this;
}

int& Granny::GetYears() {
	return years;
}

void Granny::SetGranny(unsigned int w1, unsigned int h1, int y) {
	SetWeightG(w1);
	SetHeightG(h1);
	SetYears(y);
}

void Granny::Print() const {
	cout << weightG << "вес " << heightG << "рост " << years << "лет " << "\n";
}