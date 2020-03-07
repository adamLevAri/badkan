
#include "doctest.h"
#include "FamilyTree.hpp"
//using namespace ariel;

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
		
    
}

TEST_CASE("Test case 2") {
    FamilyTree T2;

	T2.addNew("adam", 'm');
	T2.addNew("hava", 'f', 'w', "adam");
	T2.addNew("shem", 'm', 'c', "adam");
	T2.addNew("ham", 'm', 'c', "hava");
	T2.addNew("yefet", 'm', 's', "ham");
	T2.addNew("kar", 'f', 'w', "ham");
	T2.addNew("posher", 'm', 'c', "ham");
	
		CHECK(T2.findRelation("posher", 'g') == string("adam"));
		CHECK(T2.findRelation("posher", 'u') == string("yefet"));
		CHECK(T2.find("ham", "posher") == string("father"));
		CHECK(T2.find("adam", "hava") == string("husband"));
		CHECK(T2.find("adam", "posher") == string("grandfather"));
		
		CHECK(T2.findRelation("posher", 'g') == string("adam"));
		CHECK(T2.findRelation("posher", 'u') == string("yefet"));
		CHECK(T2.find("ham", "posher") == string("father"));
		CHECK(T2.find("adam", "hava") == string("husband"));
		CHECK(T2.find("adam", "posher") == string("grandfather"));
	
}
