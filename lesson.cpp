#include <iostream>
#include <string>

class Animal
{
public:
	virtual void voice() = 0;
};

class Dog: public Animal
{
public:
	virtual void voice()
	{
		std::cout << "Гаф!" << std::endl;
	}
};

class Cat : public Animal
{
public:
	virtual void voice()
	{
		std::cout << "Мяу!" << std::endl;
	}
};

void lesson()
{
	Animal* c = new Cat();
	Animal* d = new Dog();

	c->voice();
	d->voice();
}