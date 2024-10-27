#include "Ps3.h"

Ps3& Ps3::SetWeightPs3(unsigned int w1) {
	if (w1 >= 1 && w1 <= 31) weightPs3 = w1;
	else throw "Ѕыло передано неверное значение в параметр w1. ќжидаетс€ целое число в диапазоне от 1 до 31 включительно.\n";
	return *this;
}

unsigned int Ps3::GetWeightPs3() const {
	return weightPs3;
}

Ps3& Ps3::SetHeightPs3(unsigned int h1) {
	if (h1 >= 1 && h1 <= 30) heightPs3 = h1;
	else throw "Ѕыло передано неверное значение в параметр h1. ќжидаетс€ целое число в диапазоне от 1 до 30 включительно.\n";
	return *this;
}

unsigned int Ps3::GetHeightPs3() const {
	return heightPs3;
}

Ps3& Ps3::SetGames(int g) {
	games = g;
	return *this;
}

int& Ps3::GetGames() {
	return games;
}

void Ps3::SetPs3(unsigned int w1, unsigned int h1, int g) {
	SetWeightPs3(w1);
	SetHeightPs3(h1);
	SetGames(g);
}

void Ps3::Print() const {
	cout << weightPs3 << "кг " << heightPs3 << "высота " << games << "игры " << "\n";
}