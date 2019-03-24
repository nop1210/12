#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
	while (1) {
		srand(time(0));
		string Vvid, Vyvid;
		int b;
		cout << "Enter Rock, Scissors or Paper:" << endl;
		cin >> Vvid;

		b = rand() % 3 + 1;

		if (b == 1) {
			Vyvid = "Rock";
			cout << Vyvid << endl;
		}

		if (b == 2) {
			Vyvid = "Scissors";
			cout << Vyvid << endl;
		}

		if (b == 3) {
			Vyvid = "Paper";
			cout << Vyvid << endl;
		}

		if (Vvid == "Rock" && b == 1)
			cout << "Draw" << endl;

		if (Vvid == "Rock" && b == 2)
			cout << "You win" << endl;

		if (Vvid == "Rock" && b == 3)
			cout << "You lose" << endl;

		if (Vvid == "Scissors" && b == 1)
			cout << "You lose" << endl;

		if (Vvid == "Scissors" && b == 2)
			cout << "Draw" << endl;

		if (Vvid == "Scissors" && b == 3)
			cout << "You win" << endl;

		if (Vvid == "Paper" && b == 1)
			cout << "You win" << endl;

		if (Vvid == "Paper" && b == 2)
			cout << "You lose" << endl;

		if (Vvid == "Paper" && b == 3)
			cout << "Draw" << endl;

	}
	system("pause");
}