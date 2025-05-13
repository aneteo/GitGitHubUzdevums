#include <iostream>
#include "Name.h"
using namespace std;

class Anete: public Name
{
	public:
		Anete(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
