/**
 * Demo for Family Tree
 * 
 * First version by Adam Lev-Ari
 */

#include "FamilyTree.hpp"

int main()
{
	FamilyTree T;

	T.addNew("adam", 'm');
	T.addNew("hava", 'f', 'w', "adam");
	T.addNew("shem", 'm', 'c', "adam");
	T.addNew("ham", 'm', 'c', "hava");
	T.addNew("yefet", 'm', 's', "ham");
	T.addNew("kar", 'f', 'w', "ham");
	T.addNew("posher", 'm', 'c', "ham");
	T.display(T.start);

	//"Find relation with relation assign (Father/Mother/Wife/Sibling/Cousin/Uncle/Aunt/Grandparent)"
	T.findRelation("adam", 'f');
	T.findRelation("posher", 'u');
	T.findRelation("posher", 'g');
	T.findRelation("yefet", 's');

	//finds relation between 2 nodes in the tree
	cout << "\n\nRelations:" << endl;
	cout << T.find("ham", "posher") << endl;
	cout << T.find("ham", "kar") << endl;
	cout << T.find("posher", "shem") << endl;
	cout << T.find("yefet", "posher") << endl;
	cout << T.find("adam", "posher") << endl;
	cout << T.find("posher", "adam") << endl;

    return 0;
}
