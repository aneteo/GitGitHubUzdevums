#include <iostream>
#include "Name.h"
#include "Anete.h"

using namespace std;

Anete::Anete(string n)
{
	name=n;
}

void Anete::setName(string n)
{
	name=n;
}

void Anete::Print() const
{
	cout << name << endl;
}


