#include <iostream>
#include <cstring>
#include "golf.h"
void setgolf (golf & g, const char * name, int hc) {
	strcpy(g.fullname, name);
	g.handicap = hc;
}
int setgolf (golf & g) {
	using namespace std;
	char name[Len];
	int nhc;

	cin.getline(name,Len);
	strcpy(g.fullname, name);

	if (strlen(name) == 0 || strlen(name) > Len) {

		return 0;

	} else {
		cin >> nhc;
		cin.get();
		g.handicap = nhc;
		return 1;
	}

}
void handicap (golf & g, int hc) {
	g.handicap = hc;
}
void showgolf (const golf & g) {
	using namespace std;
	cout << g.fullname << endl;
	cout << g.handicap << endl;
}
