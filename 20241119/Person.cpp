#include "Person.h"
#include <string>
using namespace std;

//Constructor, 建構子，建構函式
/*Person::Person(const string& id, const string& lastName, const string& firstName, const string& grnder, const string& birthDate)
{
	this->id = id;
	this->lastName = lastName;
	this->firstName = firstName;
	this->gender = grnder;
	this->birthDate = birthDate;
}*/

Person::Person(const string& id, const string& lastName, const string& firstName, const string& grnder, const string& birthDate) : id(id), lastName(lastName), firstName(firstName), gender(gender), birthDate(birthDate)
{
}

Person::Person()
{
}

string Person::getId() const
{
	return id;
}
string Person::getLastName() const
{
	return lastName;
}
string Person::getFirstName() const
{
	return firstName;
}
string Person::getGender() const
{
	return gender;
}
string Person::getBirthDate() const
{
	return birthDate;
}
