#include <iostream>
using namespace std;

class Flashlight {
	unsigned short weightFlash = 3;
	unsigned short heightFlash = 1.5;
	int distance = 3;
	string ColorFlash;
	string BrandFlash;
public:
	Flashlight& SetWeightFlash(unsigned int w1);
	unsigned int GetWeightFlash() const;
	Flashlight& SetHeightFlash(unsigned int h1);
	unsigned int GetHeightFlash() const;
	Flashlight& SetDistance(int d);
	int& GetDistance();
	void SetFlashlight(unsigned int w1, unsigned int h1, int d);
	void Print() const;
};
