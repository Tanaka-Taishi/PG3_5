#include<stdio.h>
#include<vector>
#include<iostream>
#include<list>

using namespace std;
int main() {
	std::list<string> Yamanote_Sen
	{ "\nTokyo","Takada","Akihabara","Okachimachi","Ueno",
		"Uguisudani","Nippori",/*"Nishi-Nippori",*/"Tabata","Komagome",
	"Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba",
	"Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
	"Ebisu","Meguro","Gotanda","Osaki","Shinagawa",/*"Takanowa Gateway",*/
	"Tamachi","Hamamatucho","Shimbashi","Yurakucho\n" };

	printf("1970îN");
	for (list<string>::iterator it_Yamanote_Sen = Yamanote_Sen.begin(); it_Yamanote_Sen != Yamanote_Sen.end(); it_Yamanote_Sen++) {

		cout << *it_Yamanote_Sen << endl;
	}
	for (std::list<string>::iterator it_Yamanote_Sen = Yamanote_Sen.begin(); it_Yamanote_Sen != Yamanote_Sen.end(); ++it_Yamanote_Sen) {
		if (*it_Yamanote_Sen == "Tabata") {
			it_Yamanote_Sen = Yamanote_Sen.insert(it_Yamanote_Sen, "Nishi-Nippori");
			++it_Yamanote_Sen;
		}
	}
	printf("2019îNÅ`");
	for (list<string>::iterator it_Yamanote_Sen = Yamanote_Sen.begin(); it_Yamanote_Sen != Yamanote_Sen.end(); it_Yamanote_Sen++) {

		cout << *it_Yamanote_Sen << endl;
	}
	for (std::list<string>::iterator it_Yamanote_Sen = Yamanote_Sen.begin(); it_Yamanote_Sen != Yamanote_Sen.end(); ++it_Yamanote_Sen) {
		if (*it_Yamanote_Sen == "Tamachi") {
			it_Yamanote_Sen = Yamanote_Sen.insert(it_Yamanote_Sen, "Takanowa Gateway");
			++it_Yamanote_Sen;
		}
	}
	printf("2022îNÅ`");
	for (list<string>::iterator it_Yamanote_Sen = Yamanote_Sen.begin(); it_Yamanote_Sen != Yamanote_Sen.end(); it_Yamanote_Sen++) {

		cout << *it_Yamanote_Sen << endl;
	}

	return 0;
}