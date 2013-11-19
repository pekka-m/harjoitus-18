/*********************************************************************
Teht�v�: HARJOITUS 18
Tekij�: Pekka Melgin
PVM: 19.11.2013
Kuvaus:
Tee ohjelma, joka kysyy viiden koiran nimet ja i�t.
Tiedot tallennetaan tietuetaulukkoon.
a) j�rjest� tiedot ik� -kent�n mukaan suuruusj�rjestykseen
(pienimm�st� suurimpaan). Ohjelma tulostaa lopuksi
jarjestetyn taulukon n�yt�lle.
b) j�rjest� tiedot nimi -kent�n mukaan aakkosj�rjestyksess�
Ohjelma tulostaa lopuksi jarjestetyn taulukon n�ytolle.

Lajittelu tulee toteuttaa siten, ett� se toimisi samoin
my�s 50 tai 5000 koiran tapauksssa.
*********************************************************************/
#include <iostream> 
using namespace std;
const int MAX_TAULU = 5;
struct KOIRAT {
	char nimi[10];
	int ika;
};
int main()
{
	/* //a)
	KOIRAT lkm[MAX_TAULU];
	KOIRAT apu[1];
	for (int koira = 0; koira < MAX_TAULU; koira++) {
		cout << "Anna koiran nimi ja ika: ";
		cin >> lkm[koira].nimi >> lkm[koira].ika;
	}
	for (int i = 0; i < (MAX_TAULU-1); i++) {
		for (int j = i+1; j < MAX_TAULU; j++) {
			if (lkm[i].ika > lkm[j].ika) {
				apu[0] = lkm[i];
				lkm[i] = lkm[j];
				lkm[j] = apu[0];
			}
		}
	}
	for (int ind = 0; ind < MAX_TAULU; ind++) {
		cout << lkm[ind].ika << " " << lkm[ind].nimi <<endl;
	}
	*/
	// b)
	KOIRAT lkm[MAX_TAULU];
	KOIRAT apu[1];
	for (int koira = 0; koira < MAX_TAULU; koira++) {
		cout << "Anna koiran nimi ja ika: ";
		cin >> lkm[koira].nimi >> lkm[koira].ika;
	}
	for (int i = 0; i < (MAX_TAULU-1); i++) {
		for (int j = i+1; j < MAX_TAULU; j++) {
			if (strcmp(lkm[i].nimi, lkm[j].nimi) > 0) {
				apu[0] = lkm[i];
				lkm[i] = lkm[j];
				lkm[j] = apu[0];
			}
		}
	}
	for (int ind = 0; ind < MAX_TAULU; ind++) {
		cout << lkm[ind].nimi << " " << lkm[ind].ika <<endl;
	}
cout << endl;
}