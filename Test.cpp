
#include "doctest.h"

int main() {
	
	TEST_CASE("Test case 1") {
   	FamilyTree T;

	T.addNew("adam", 'm');
	T.addNew("hava", 'f', 'w', "adam");
	T.addNew("shem", 'm', 'c', "adam");
	T.addNew("ham", 'm', 'c', "hava");
	T.addNew("yefet", 'm', 's', "ham");
	T.addNew("kar", 'f', 'w', "ham");
	T.addNew("posher", 'm', 'c', "ham");

    		CHECK(T.findRelation("posher", 'g') == string("adam"));
		CHECK(T.findRelation("posher", 'u') == string("yefet"));
		CHECK(T.find("ham", "posher") == string("father"));
		CHECK(T.find("adam", "hava") == string("husband"));
		CHECK(T.find("adam", "posher") == string("grandfather"));
		
		CHECK(T.findRelation("posher", 'g') == string("adam"));
		CHECK(T.findRelation("posher", 'u') == string("yefet"));
		CHECK(T.find("ham", "posher") == string("father"));
		CHECK(T.find("adam", "hava") == string("husband"));
		CHECK(T.find("adam", "posher") == string("grandfather"));
		
		CHECK(T.findRelation("posher", 'g') == string("adam"));
		CHECK(T.findRelation("posher", 'u') == string("yefet"));
		CHECK(T.find("ham", "posher") == string("father"));
		CHECK(T.find("adam", "hava") == string("husband"));
		CHECK(T.find("adam", "posher") == string("grandfather"));
		
		CHECK(T.findRelation("posher", 'g') == string("adam"));
		CHECK(T.findRelation("posher", 'u') == string("yefet"));
		CHECK(T.find("ham", "posher") == string("father"));
		CHECK(T.find("adam", "hava") == string("husband"));
		CHECK(T.find("adam", "posher") == string("grandfather"));
    /* Add more tests here */
}
