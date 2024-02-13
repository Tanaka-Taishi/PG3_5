#include<stdio.h>
#include<vector>
#include<iostream>
#include<list>

using namespace std;
int main() {
//	vector<int> b;
//	b.push_back(40);
//	b.pop_back();
//	//system("pause");
//
//	vector<float> c = { 0.0f,1.0f,2.0f };
//	printf(" %f", c[1]);
//	c[1] = -1.5f;
//	printf("%f", c[1]);
//
//	vector<int> d;
//	d.resize(10);
//	int size = d.size();
//	for (int i = 0; i < size; i++) {
//		printf("%d", d[1]);
//	}
//
//	vector<int> e = { 1,2,3 };
//	vector<int>::iterator it;
//	it = e.begin();
//	cout << *it << endl;
//	it++;
//	cout << *it << endl;

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
	/*std::list<char> list{ 1,3,5,7,10 };*/

	//vector<int> g = { 1,2,3 };
	//g.erase(g.begin() + 1);
	//g.pop_back();

	//std::list<int> list{1,3,5,7,10};
		
	//for (auto itr = lst.begin(); itr != list.end(); ++itr) {
	//	std::cout << *itr << "\n";
	//}

	//for (std::list<int>::iterator itr = list.begin(); itr != list.end(); ++itr) {
	//	itr = list.insert(itr, 0);
	//	++itr;
	//}

	return 0;
}