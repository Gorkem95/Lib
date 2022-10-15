#include "Dog.h"

Dog::Dog() {
	this->type = "Dog";
	brain = new Brain();
	cout << "Dog constructor called" << endl;
}

Dog::Dog(const Dog& dog) {
	*this = dog;
	cout << "Dog copy constructor called" << endl;
}

Dog& Dog::operator=(const Dog& dog) {
	if (this == &dog)
		return *this;
	this->type = dog.type;
	this->brain = new Brain();
	*this->brain = *dog.brain;
	cout << "Dog assignation operator called" << endl;
	return *this;
}

void Dog::makeSound() const {
	cout << "Dog hav hav hav" << endl;
}

Dog::~Dog() {
	delete brain;
	cout << "Dog destructor called" << endl;
}