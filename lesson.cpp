#include <iostream>
#include <string>
#include <vector>

class Talent
{
public:
	virtual void show() const = 0;
};

class Swimming : public Talent
{
	public:
	void show() const override
	{
		std::cout << "Умение плавать" << std::endl;
	}
};

class Dancing : public Talent
{
	public:
	void show() const override
	{
		std::cout << "Умение танцевать" << std::endl;
	}
};

class Counting : public Talent
{
	public:
	void show() const override
	{
		std::cout << "Умение считать" << std::endl;
	}
};

class Animal
{
public:
	virtual void voice() = 0;
};

class Dog : public Animal
{
	private:
	std::string name;
	std::vector<Talent*> talents;

	public:
	Dog(const std::string& name) : name(name) {}

	void addTalent(Talent* talent)
	{
		talents.push_back(talent);
	}

	void show_talents() const
	{
		std::cout << "У " << name << " имеются таланты:" << std::endl;
		for (const auto& talent : talents)
		{
			talent->show();
		}
	}

	virtual void voice() 
	{
		std::cout << "Гав!" << std::endl;
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
	Animal* d = new Dog("Nala");
	Dog dog_steve("Nala");
	
	d->voice();
	
	dog_steve.addTalent(new Dancing());
	dog_steve.addTalent(new Swimming());

	dog_steve.show_talents();
}