#include <iostream>
#include <string>

class Animal
{
public:
	void setAge(int _age)
	{
		if (_age >= 0 && _age < 30)
			age = _age;
		else
			std::cerr << "Incorrect age" << std::endl;
	}

	int getAge()
	{
		return age;
	}

	void setName(std::string _name)
	{
		name = _name;
	}

	std::string getName()
	{
		return name;
	}

protected:
	std::string name;
	int age;
};

class Dog: virtual public Animal
{
public:
Dog() {};
Dog(int _age, std::string _name)
{
	name = _name;
	if (_age >= 0 && _age < 30)
		age = _age;
	else
		std::cerr << "Incorrect age" << std::endl;
	}

void barkAge()
{
	for (size_t i = 0; i < age; i++)
		std::cout << "Bark!";
	std::cout << std::endl;
}
private:
	
};

class Cat : virtual public Animal
{
	public:
	Cat() {};
	Cat(int _age, std::string _name)
	{
		name = _name;
		if (_age >= 0 && _age < 30)
			age = _age;
		else
			std::cerr << "Incorrect age" << std::endl;
	}

	void meowAge()
	{
		for (size_t i = 0; i < age; i++)
			std::cout << "Meow!";
		std::cout << std::endl;
	}
};

class CatDog : public Dog, public Cat
{
	public:
	CatDog(int _age, std::string _name)
	{
		name = _name;
		if (_age >= 0 && _age < 30)
			age = _age;
		else
			std::cerr << "Incorrect age" << std::endl;
	}

};


void lesson()
{
	CatDog d(2, "Balu");
	d.barkAge();
	d.setAge(5);
	d.meowAge();
}