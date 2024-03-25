#include <iostream>
using namespace std;



int main() {
	int sayi;
	double bahisMiktari;
	srand(time(0));
	int randomSayi;
	randomSayi = rand() % 100 + 100;

	cout << "----------------Numara Tahmin Oyununa Hosgeldiniz------------------" << endl << endl;
	cout << "Oyun Kurallari:\n1-Minimum 500 Tl lik miktarla oyuna giris yapabiliyorsunuz\n2-Kaybettiginiz her turda hesabinizdan 500 TL kesilecektir\n";
	cout << "3-Kazandiginiz her turda paraniz ikiye katlanmaktadir\n4-Sayi araligi: 100-200 arasindadir" << endl << endl;


	cout << "Bahis miktarini giriniz(Min sinir: 500 TL): ";
	cin >> bahisMiktari;

	for (int i = 1; i <= 30; i++) {
		cout << "\nLutfen 100-200 arasinda bir sayi giriniz: ";
		cin >> sayi;


		if (sayi > randomSayi) {
			cout << "Girdiginiz sayi belirlenen sayidan buyuktur! " << endl;
			bahisMiktari -= 500;
			cout << "Hesabiniz: " << bahisMiktari << " TL" << endl;
		}

		else if (sayi == randomSayi) {
			cout << "Tebrikler girdiginiz sayi belirlenen sayi ile eslesti! " << endl;
			bahisMiktari = bahisMiktari * 2;
			cout << "Hesabiniz: " << bahisMiktari << " TL" << endl;
		}

		else if (sayi < randomSayi) {
			cout << "Girdiginiz sayi belirlenen sayidan kucuktur! " << endl;
			bahisMiktari -= 500;
			cout << "Hesabiniz: " << bahisMiktari << " TL" << endl;
		}

		if (bahisMiktari <= 0) {
			cout << "Kaybettiniz bir dahaki sefere :) " << endl;
			break;
		}

	}
	



	return 0;
}