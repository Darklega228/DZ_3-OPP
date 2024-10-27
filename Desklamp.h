#include <iostream>
using namespace std;

class Desklamp {
	unsigned short weight = 5;
	unsigned short width = 2;
	int Brightness = 4;
	string Color;
	string Brand;
public:
	Desklamp& SetWeight(unsigned int w1);
	unsigned int GetWeight() const;
	Desklamp& SetWidth(unsigned int w2);
	unsigned int GetWidth() const;
	Desklamp& SetBrightness(int b);
	int& GetBrightness();
	void SetDesklamp(unsigned int w1, unsigned int w2, int b);
	void Print() const;
};
