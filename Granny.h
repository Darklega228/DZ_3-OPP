#include <iostream>
using namespace std;

class Granny {
	unsigned short weightG = 60;
	unsigned short heightG = 160;
	int years = 70;
	string Name;
	string Home;
public:
	Granny& SetWeightG(unsigned int w1);
	unsigned int GetWeightG() const;
	Granny& SetHeightG(unsigned int h1);
	unsigned int GetHeightG() const;
	Granny& SetYears(int y);
	int& GetYears();
	void SetGranny(unsigned int w1, unsigned int h1, int y);
	void Print() const;
};

