#include "zlab10.h"
#include "LibraryImport.h"
#include <set>
#include <map>

void Zlab10::wektor()
{
	vector<double> wektor;

	wektor.push_back(2.3);
	wektor.push_back(4.5);
	wektor.push_back(-2.3);
	wektor.push_back(0.1);

	cout << "Rozmiar wektora: " << wektor.size() << endl;
	for (double d : wektor)
		cout << d << " ";

	cout << endl << endl;

	for (unsigned long i = 5; i < 10; i++)
		wektor[i] = 3.2;

	cout << "Rozmiar wektora: " << wektor.size() << endl;
	for (double d : wektor)
		cout << d << " ";

	cout << endl << endl;

	wektor.resize(12);
	for (unsigned long i = 5; i < 10; i++)
		wektor[i] = 3.2;

	cout << "Rozmiar wektora: " << wektor.size() << endl;
	for (double d : wektor)
		cout << d << " ";

	cout << endl << endl;

	for (unsigned long i = 0; i < wektor.size(); i++)
		wektor[i] = i;

	cout << "Rozmiar wektora: " << wektor.size() << endl;
	for (double d : wektor)
		cout << d << " ";

	cout << endl << endl;

	for (double& d : wektor)
		d = 3.14;

	for (double d : wektor)
		cout << d << " ";

	cout << endl << endl;

	wektor.clear();
	cout << "Rozmiar wektora: " << wektor.size() << endl;
	for (double d : wektor)
		cout << d << " ";

	cout << endl << endl;
}

void Zlab10::wektor_sortowanie()
{
	vector<int> wektor;
	wektor.resize(13);

	for (int& j : wektor)
		j = GEN::losujOdZeraDo(20);

	cout << "Wektor wygenerowany" << endl;
	for (auto j : wektor)
		cout << j << " ";

	cout << endl << endl;

	cout << "Wektor posortowany" << endl;

	sort(wektor.begin(), wektor.end());
	for (auto j : wektor)
		cout << j << " ";

	cout << endl << endl;

	cout << "Wektor pomieszany" << endl;
	random_shuffle(wektor.begin(), wektor.end(), GEN::losujOdZeraDo);
	for (auto j : wektor)
		cout << j << " ";

	cout << endl << endl;
}

void Zlab10::zbior() {
	set<string> imiona;
	imiona.insert("Adam");
	imiona.insert("Ewa");
	imiona.insert("Maciek");

	for (string s : imiona)
		cout << s << " ";

	cout << endl << endl;

	imiona.insert("Adam");
	imiona.insert("Iwona");
	imiona.insert("Ewa");
	imiona.insert("Beata");
	imiona.insert("Maciek");

	for (string s : imiona)
		cout << s << " ";

	cout << endl << endl;

	set<string>::iterator iter = imiona.begin();
	while (iter != imiona.end()) {
		cout << *iter << endl;
		iter++;
	}
}


void Zlab10::mapa()
{
	map<char, double> pomiary;

	pomiary.insert(pair<char, double>('A', 20));
	pomiary.insert(pair<char, double>('B', 30));
	pomiary.insert(pair<char, double>('C', 50));
	pomiary.insert(pair<char, double>('D', 25));
	pomiary.insert(pair<char, double>('A', 20));
	pomiary.insert(pair<char, double>('A', 40));

	cout << "Wyswietlenie mapy" << endl;
	for (char c : {'A', 'B', 'C'})
		cout << c << "->" << pomiary[c] << endl;

	cout << "Policz A -> " << pomiary.count('A') << endl;

	pomiary.erase('A');
	cout << "Wyswietlenie mapy" << endl;
	for (char c : {'A', 'B', 'C'})
		cout << c << "->" << pomiary[c] << endl;

	cout << "Policz A -> " << pomiary.count('A') << endl;
}