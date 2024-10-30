
#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void Voice() {}
	virtual ~Animal(){}
};

class dog : public Animal
{
	void Voice() override
	{
		cout << "Dogge says: woof!" << endl;
	}
};

class cat : public Animal
{
	void Voice() override
	{
		cout << "Cat says: meow!" << endl;
	}
};

class wolf : public Animal
{
	void Voice() override
	{
		cout << "Wolf says: AUF!" << endl;
	}
};

int main()
{
	const int size = 3;
	Animal* Animals[size] = { new dog, new cat, new wolf };
	for (int i = 0; i < size; i++)
	{
		Animals[i]->Voice();
		delete Animals[i];
	}
	return 0;
}

