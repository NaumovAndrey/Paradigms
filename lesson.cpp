#include <iostream>
#include <string>

class Dog
{
public:
    Dog(int _age)
	{
		if (_age > 30 || _age < 0)
		{
			std::cerr << "Incorrect age" << std::endl;
		}
		else
		{
			age = _age;
		}
	}

	void setAge(int _age)
	{
		if (_age > 30 || _age < 0)
		{
			std::cerr << "Incorrect age" << std::endl;
		} else
		{
			age = _age;
		}
	}

	int getAge() const
	{
		return age;
	}

private:
	int age;
};

void lesson()
{
	Dog d(10);

	d.setAge(11);
	std::cout << d.getAge();
}