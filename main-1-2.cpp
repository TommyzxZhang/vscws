#include "Musician.h"
#include "Orchestra.h"
int main() {
	Musician fuckkk("Van", 114514);
	Musician fuck1("", 114514);
	Musician fuck2("", 114514);
	Musician fuck3("", 114514);
	Orchestra fuck(3);
	fuck.add_musician(fuck1);
	fuck.add_musician(fuck2);
	fuck.add_musician(fuckkk);
	fuck.get_current_number_of_members();
	std::cout<<fuck.has_instrument("Van")<<std::endl;
	fuck.add_musician(fuck3);
	
}