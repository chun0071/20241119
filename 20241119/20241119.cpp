﻿#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    Person person1("A123456789", "chen", "Jason", "M", "1999-01-01");

    Person* person2 = new Person();
    person2->setLastName("Wang");
    person2->setFirstName("David");
    person2->setGender("M");
    person2->setBirthDate("1999-12-31");

    person1.display();
    cout << endl;
    person2->display();
}

