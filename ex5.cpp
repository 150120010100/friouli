#include <iostream>
using namespace std;

class  Animal {

public:
	const char* name;
	int age;
	Animal ( const char * myname  ) : name (myname){};

	void set_value(int age_value){
        age = age_value;
        };	
};

class Zebra : public Animal{
public:
	const char* origin;
	Zebra ( const char * myname, const  char * myorigin) : Animal (myname), origin (myorigin){}; 

	void display_info(){
        cout << "I am   "<< name <<" , "<< "  my age is: " << age <<" and "<<"  I m from: "<< origin<< endl;
        };

};

class Dolphin : public Animal{
public:
	const char* origin;
	Dolphin ( const char * myname, const  char * myorigin) : Animal (myname), origin (myorigin){}; 
	void display_info(){
        cout << "I am   "<< name <<" , "<< "  my age is: " << age <<" and "<<"  I m from: "<< origin<< endl;
        };

};

int main()
{	
	const char* name = "zalata";
	const char* origin = "colombya";
	Zebra zeb(name, origin);
	zeb.set_value(23);
	zeb.display_info();
    const char* name1 = "dorita";
	const char* origin1 = "colombya";
    Dolphin dol(name1, origin1);
    dol.set_value(23);
	dol.display_info();
	return 0;
}