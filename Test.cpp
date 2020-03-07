
#include "Test.h"

int main() {

	FamilyTree T;

	T.addNew("adam", 'm');
	T.addNew("hava", 'f', 'w', "adam");
	T.addNew("shem", 'm', 'c', "adam");
	T.addNew("ham", 'm', 'c', "hava");
	T.addNew("yefet", 'm', 's', "ham");
	T.addNew("kar", 'f', 'w', "ham");
	T.addNew("posher", 'm', 'c', "ham");

	T.find("adam", "posher");
	T.display(T.start);
	
	badkan::TestCase testcase;
	testcase.setname("My tests")
		.CHECK_OUTPUT(T.findRelation("posher", 'g'), "adam")
		.CHECK_OUTPUT(T.findRelation("posher", 'u'), "yefet")
		.CHECK_OUTPUT(T.find("ham", "posher"), "father")
		.CHECK_OUTPUT(T.find("adam", "hava"), "husband")
		.CHECK_OUTPUT(T.find("adam", "posher"), "grandfather")
		.print();

	return 0;
}
