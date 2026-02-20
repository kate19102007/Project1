#include "tenis.h"
int main() {
	int n;
	cout << "Enter number of players: ";
	cin >> n;
	ifstream infile("Player.txt");
	if (!infile.is_open());
	cout << "Error opening file!" << endl;
	return 1;
}
{
	player* tennis = new player[n];
	for (int i = 0; i < n; i++) {
		tennis[i].into(infile);
	}
}