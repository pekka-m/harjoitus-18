/*********************************************************************
Tehtävä: HARJOITUS 18
Tekijä: Pekka Melgin
PVM: 5.11.2013
Kuvaus:
Tee ohjelma, joka kysyy viiden koiran nimet ja iät.
Tiedot tallennetaan tietuetaulukkoon.
a) järjestä tiedot ikä -kentän mukaan suuruusjärjestykseen
(pienimmästä suurimpaan). Ohjelma tulostaa lopuksi
jarjestetyn taulukon näytälle.
b) järjestä tiedot nimi -kentän mukaan aakkosjärjestyksessä
Ohjelma tulostaa lopuksi jarjestetyn taulukon näytolle.

Lajittelu tulee toteuttaa siten, että se toimisi samoin
myäs 50 tai 5000 koiran tapauksssa.
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
	int taulu[MAX_TAULU];
	for (int koira = 0; koira < MAX_TAULU; koira++) {
		cout << "Anna koiran nimi ja ika: ";
		cin >> lkm[koira].nimi >> lkm[koira].ika;
	}
	for (int i = 0; i < (MAX_TAULU-1); i++) {
		for (int j = i+1; j < MAX_TAULU; j++) {
			if (lkm[i].ika > lkm[j].ika) {
				int apu = lkm[j].ika;
				lkm[j].ika = lkm[i].ika;
				lkm[i].ika = apu;
				char apu2[10];
				strcpy_s(apu2, lkm[j].nimi);
				strcpy_s(lkm[j].nimi, lkm[i].nimi);
				strcpy_s(lkm[i].nimi, apu2);
			}
		}
	}
	for (int ind = 0; ind < MAX_TAULU; ind++) {
		cout << lkm[ind].ika << " " << lkm[ind].nimi <<endl;
	}
	*/
	// b)
	KOIRAT lkm[MAX_TAULU];
	int taulu[MAX_TAULU];
	for (int koira = 0; koira < MAX_TAULU; koira++) {
		cout << "Anna koiran nimi ja ika: ";
		cin >> lkm[koira].nimi >> lkm[koira].ika;
	}
	for (int i = 0; i < (MAX_TAULU-1); i++) {
		for (int j = i+1; j < MAX_TAULU; j++) {
			if (lkm[i].nimi > lkm[j].nimi) {
				int apu = lkm[j].ika;
				lkm[j].ika = lkm[i].ika;
				lkm[i].ika = apu;
				char apu2[10];
				strcpy_s(apu2, lkm[j].nimi);
				strcpy_s(lkm[j].nimi, lkm[i].nimi);
				strcpy_s(lkm[i].nimi, apu2);
			}
		}
	}
	for (int ind = 0; ind < MAX_TAULU; ind++) {
		cout << lkm[ind].nimi << " " << lkm[ind].ika <<endl;
	}
cout << endl;
}