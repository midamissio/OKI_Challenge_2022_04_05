/*
	Zadanie z platformy usaco.org
	Nazwa zadania: Cow Jog
	Link do zadania: http://usaco.org/index.php?page=viewproblem2&cpid=489
	Wynik: 100/100
*/
#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

//unsigned long int predkosc[10 ^ 6];
#pragma warning(disable : 4996)
int main() {
	unsigned long int minimum, nie_potrzebna_dana, ile_grup, licznik = 1, i = 0;
	//FILE* input;
	ifstream input;

	char znak;
	//errno_t err = fopen_s(&input, "cowjog.in", "r");
	input.open("cowjog.in");
	input >> ile_grup;
	unsigned long int predkosc[ile_grup];
	do
	{
		long long int x;
		input >> x >> predkosc[i];
		i++;
	} while (i < ile_grup);

	input.close();
	minimum = predkosc[ile_grup - 1];

	for (i = ile_grup - 1; i > 0; i--)
		if (predkosc[i - 1] <= minimum)
		{
			minimum = predkosc[i - 1];
			licznik++;
		}

	ofstream output;
	output.open("cowjog.out", fstream::out | ofstream::app);
	//ofstream output("cowjog.out");
	output << licznik;
	output.close();
	cout << licznik;
	return 0;
}
