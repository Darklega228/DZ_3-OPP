#include "Desklamp.h"

Desklamp& Desklamp::SetWeight(unsigned int w1) {
	if (w1 >= 1 && w1 <= 31) weight = w1;
	else throw "���� �������� �������� �������� � �������� w1. ��������� ����� ����� � ��������� �� 1 �� 31 ������������.\n";
	return *this;
}

unsigned int Desklamp::GetWeight() const {
	return weight;
}

Desklamp& Desklamp::SetWidth(unsigned int w2) {
	if (w2 >= 1 && w2 <= 30) width = w2;
	else throw "���� �������� �������� �������� � �������� w2. ��������� ����� ����� � ��������� �� 1 �� 30 ������������.\n";
	return *this;
}

unsigned int Desklamp::GetWidth() const {
	return width;
}

Desklamp& Desklamp::SetBrightness(int b) {
	Brightness = b;
	return *this;
}

int& Desklamp::GetBrightness() {
	return Brightness;
}

void Desklamp::SetDesklamp(unsigned int w1, unsigned int w2, int b) {
	SetWeight(w1);
	SetWidth(w2);
	SetBrightness(b);
}

void Desklamp::Print() const {
	cout << weight << "�� " << width << "������ " << Brightness << "������� " << "\n";
}