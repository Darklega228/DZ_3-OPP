#include <iostream>
using namespace std;

class Ps3 {
	unsigned short weightPs3 = 3;
	unsigned short heightPs3 = 0.5;
	int games = 3;
	string ColorPs3;
	string BrandPs3;
public:
	Ps3& SetWeightPs3(unsigned int w1);
	unsigned int GetWeightPs3() const;
	Ps3& SetHeightPs3(unsigned int h1);
	unsigned int GetHeightPs3() const;
	Ps3& SetGames(int d);
	int& GetGames();
	void SetPs3(unsigned int w1, unsigned int h1, int g);
	void Print() const;
};

