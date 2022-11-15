#include <iostream>
using namespace std;


namespace 
{

	int globalVar=311;

}
namespace my_namespace
{
void func()
{
	cout << "This is inside my first_space" << endl;
	int globalVar;
	globalVar=111;
	cout<<globalVar<< endl;;
}
}

using namespace my_namespace;
int main ()
{

func();
int globalVar=12;
cout << "This is outside my first_space" << endl;
std::cout<<globalVar<< endl;;
return 0;
}
