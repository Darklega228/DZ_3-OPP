#include <iostream>
using namespace std;

class Laptop {
	unsigned short weightNout = 3;
	unsigned short heightNout = 1.5;
	int hertz = 144;
	string ColorNout;
	string BrandNout;
public:
	Laptop& SetWeightNout(unsigned int w1);
	unsigned int GetWeightNout() const;
	Laptop& SetHeigthNout(unsigned int h1);
	unsigned int GetHeigthNout() const;
	Laptop& SetHertz(int h2);
	int& GetHertz();
	void SetLaptop(unsigned int w1, unsigned int h1, int h2);
	void Print() const;
};

