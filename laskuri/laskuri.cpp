#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "finnish");

	while (true) {
		cout << "Laskuri by seikkailija007\n" << endl;
		cout << "[0] Poistu" << endl;
		cout << "[1] Kuinka monta prosenttia" << endl;
		cout << "[2] Muutos" << endl;
		cout << "[3] Vertailu" << endl;
		cout << "[4] Prosenttiarvo" << endl;
		cout << "Tila: ";
		char mode;
		cin >> mode;
		if (mode == '0') {
			system("clear");
			break;
		}
		else if (mode == '1') {
			system("clear");
			while (true) {
				int total;
				int other;
				cout << "Yhteens�: ";
				cin >> total;
				cout << "v�hemmist�: ";
				cin >> other;
				float total1 = static_cast<float>(total);
				float other1 = static_cast<float>(other);
				float answer = other1 / total1 * 100.0;
				int ans = static_cast<int>(answer);
				if (ans < 0) {
					ans = abs(ans);
				}
				cout << "Vastaus on: " << ans << "%" << endl;
				cout << "Haluatko laskea uudestaan [y] kyll� [n] ei: ";
				char tum;
				cin >> tum;
				if (tum == 'y') {
					system("clear");
				}
				else if (tum == 'n') {
					system("clear");
					break;
				}
			}
		}
		else if (mode == '2') {
			system("clear");
			while (true) {
				cout << "Alkuper�inen arvo: ";
				int original;
				cin >> original;
				cout << "Uusi arvo: ";
				int after;
				cin >> after;
				float orig = static_cast<float>(original);
				float aft = static_cast<float>(after);
				float change = orig - aft;
				float answer = change / orig * 100.0;
				int ans = static_cast<int>(answer);
				if (ans < 0) {
					ans = abs(ans);
				}
				cout << "Vastaus on " << ans << "%" << endl;
				cout << "Haluatko laskea uudestaan [y] kyll� [n] ei: ";
				char tum;
				cin >> tum;
				if (tum == 'y') {
					system("clear");
				}
				else {
					system("clear");
					break;
				}
			}
		}
		else if (mode == '3') {
			system("clear");
			while (true) {
				cout << "Vertaava arvo: ";
				float first;
				cin >> first;
				cout << "Verrattava arvo: ";
				float second;
				cin >> second;
				float diff = first - second;
				float answer = diff / second * 100;
				int ans = static_cast<int>(answer);
				if (ans < 0) {
					ans = abs(ans);
				}
				cout << "vastaus on " << ans << "%" << endl;
				cout << "Haluatko laskea uudestaan [y] kyll� [n] ei: ";
				char tum;
				cin >> tum;
				if (tum == 'y') {
					system("clear");
				}
				else {
					system("clear");
					break;
				}
			}
		}
		else if (mode == '4') {
			system("clear");
			while (true) {
				cout << "Prosentit: ";
				float percentage;
				cin >> percentage;
				cout << "Arvo: ";
				float value;
				cin >> value;
				float answer = percentage / 100 * value;
				int ans = static_cast<int>(answer);
				if (ans < 0) {
					ans = abs(ans);
				}
				cout << "Vastaus on: " << ans << endl;
				cout << "Haluatko laskea uudestaan [y] kyll� [n] ei: ";
				char tum;
				cin >> tum;
				if (tum == 'y') {
					system("clear");
				}
				else {
					system("clear");
					break;
				}
			}
		}
		else {
			system("clear");
		}
	}

	return 0;
}