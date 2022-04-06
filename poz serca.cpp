/*
	Zadanie z platformy szkopul.edy.pl
	Nazwa zadania: Poziome Serca
	Link do zadania: https://szkopul.edu.pl/problemset/problem/lw5UT-NoSzVkV5rZdEG7QRuP/site/?key=submissions
	Wymik: 100/100
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int liczba_serc, i;
	
	cin >> liczba_serc;

	vector<string> serce;
	serce.push_back(" @@@   @@@  ");
	serce.push_back("@   @ @   @ ");
	serce.push_back("@    @    @ ");
	serce.push_back("@         @ ");
	serce.push_back(" @       @  ");
	serce.push_back("  @     @   ");
	serce.push_back("   @   @    ");
	serce.push_back("    @ @     ");
	serce.push_back("     @      ");
	
	for(auto it = serce.begin(); it != serce.end(); it++)
	{
		for(i = 0; i < liczba_serc; i++)
			cout << *it;
		cout << endl;
	}
	return 0;
}
