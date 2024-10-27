#include "Flashlight.h"

Flashlight& Flashlight::SetWeightFlash(unsigned int w1) {
	if (w1 >= 1 && w1 <= 31) weightFlash = w1;
	else throw "���� �������� �������� �������� � �������� w1. ��������� ����� ����� � ��������� �� 1 �� 31 ������������.\n";
	return *this;
}

unsigned int Flashlight::GetWeightFlash() const {
	return weightFlash;
}

Flashlight& Flashlight::SetHeightFlash(unsigned int h1) {
	if (h1 >= 1 && h1 <= 30) heightFlash = h1;
	else throw "���� �������� �������� �������� � �������� w2. ��������� ����� ����� � ��������� �� 1 �� 30 ������������.\n";
	return *this;
}

unsigned int Flashlight::GetHeightFlash() const {
	return heightFlash;
}

Flashlight& Flashlight::SetDistance(int d) {
	distance = d;
	return *this;
}

int& Flashlight::GetDistance() {
	return distance;
}

void Flashlight::SetFlashlight(unsigned int w1, unsigned int h1, int d) {
	SetWeightFlash(w1);
	SetHeightFlash(h1);
	SetDistance(d);
}

void Flashlight::Print() const {
	cout << weightFlash << "�� " << heightFlash << "������ " << distance << "��������� " << "\n";
}