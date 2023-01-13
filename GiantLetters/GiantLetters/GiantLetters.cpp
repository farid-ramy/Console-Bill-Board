#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>
using namespace std;

char a[5][5] = { '.','x','x','.','.',
				 'x','.','.','x','.',
				 'x','x','x','x','.',
				 'x','.','.','x','.',
				 'x','.','.','x' ,'.' };
char b[5][5] = { 'x','x','x','.','.',
				 'x','.','.','x','.',
				 'x','x','x','.','.',
				 'x','.','.','x','.',
				 'x','x','x','.','.' };
char c[5][5] = { '.','x','x','x','.',
				 'x','.','.','.','.',
				 'x','.','.','.','.',
				 'x','.','.','.','.',
				 '.','x','x','x' ,'.'};
char d[5][5] = { 'x','x','x','.','.',
				 'x','.','.','x','.',
				 'x','.','.','x','.',
				 'x','.','.','x','.',
				 'x','x','x','.','.' };
char e[5][5] = { 'x','x','x','x','.',
				 'x','.','.','.','.',
				 'x','x','x','.','.',
				 'x','.','.','.','.',
				 'x','x','x','x' ,'.'};
char f[5][5] = { 'x','x','x','x','.',
				 'x','.','.','.','.',
				 'x','x','x','.','.',
				 'x','.','.','.','.',
				 'x','.','.','.','.' };
char g[5][5] = { '.','x','x','x','.',
				 'x','.','.','.','.',
				 'x','.','x','x','.',
				 'x','.','.','x','.',
				 '.','x','x','x','.' };
char h[5][5] = { 'x','.','.','x','.',
				 'x','.','.','x','.',
				 'x','x','x','x','.',
				 'x','.','.','x','.',
				 'x','.','.','x','.' };
char I[5][5] = { '.','x','.','.','.',
				 '.','x','.','.','.',
				 '.','x','.','.','.',
				 '.','x','.','.','.',
				 '.','x','.','.','.' };
char J[5][5] = { '.','.','.','x','.',
				 '.','.','.','x','.',
				 '.','.','.','x','.',
				 'x','.','.','x','.',
				 '.','x','x','.','.' };
char k[5][5] = { 'x','.','.','x','.',
				 'x','.','x','.','.',
				 'x','x','.','.','.',
				 'x','.','x','.','.',
				 'x','.','.','x','.' };
char l[5][5] = { 'x','.','.','.','.',
				 'x','.','.','.','.',
				 'x','.','.','.','.',
				 'x','.','.','.','.',
				 'x','x','x','.','.' };
char m[5][5] = { 'x','.','.','.','x',
				 'x','x','.','x','x',
				 'x','.','x','.','x',
				 'x','.','.','.','x',
				 'x','.','.','.','x'};
char n[5][5] = { 'x','.','.','x','.',
				 'x','x','.','x','.',
				 'x','.','x','x','.',
				 'x','.','.','x','.',
				 'x','.','.','x','.' };
char o[5][5] = { '.','x','x','.','.',
				 'x','.','.','x','.',
				 'x','.','.','x','.',
				 'x','.','.','x','.',
				 '.','x','x','.','.' };
char p[5][5] = { 'x','x','x','.','.',
				 'x','.','.','x','.',
				 'x','x','x','.','.',
				 'x','.','.','.','.',
				 'x','.','.','.','.' };
char q[5][5] = { '.','x','x','.','.',
				 'x','.','.','x','.',
				 'x','.','.','x','.',
				 'x','.','x','x','.',
				 '.','x','x','x','.' };
char r[5][5] = { 'x','x','x','.','.',
				 'x','.','.','x','.',
				 'x','x','x','.','.',
				 'x','.','x','.','.',
				 'x','.','.','x','.' };
char s[5][5] = { '.','x','x','.','.',
				 'x','.','.','.','.',
				 '.','x','x','.','.',
				 '.','.','.','x','.',
				 '.','x','x','.','.' };
char t[5][5] = { '.','x','x','x','.',
				 '.','.','x','.','.',
				 '.','.','x','.','.',
				 '.','.','x','.','.',
				 '.','.','x','.','.' };
char u[5][5] = { 'x','.','.','x','.',
				 'x','.','.','x','.',
				 'x','.','.','x','.',
				 'x','.','.','x','.',
				 'x','x','x','x','.' };
char v[5][5] = { 'x','.','x','.','.',
				 'x','.','x','.','.',
				 'x','.','x','.','.',
				 'x','.','x','.','.',
				 '.','x','.','.','.' };
char w[5][5] = { 'x','.','.','.','x',
				 'x','.','.','.','x',
				 'x','.','.','.','x',
				 'x','.','x','.','x',
				 '.','x','.','x','.'};
char x[5][5] = { 'x','.','x','.','.',
				 'x','.','x','.','.',
				 '.','x','.','.','.',
				 'x','.','x','.','.',
				 'x','.','x','.','.' };
char y[5][5] = { 'x','.','x','.','.',
				 'x','.','x','.','.',
				 'x','x','x','.','.',
				 '.','x','.','.','.',
				 '.','x','.','.','.' };
char z[5][5] = { 'x','x','x','x','.',
				 '.','.','.','x','.',
				 '.','.','x','.','.',
				 '.','x','.','.','.',
				 'x','x','x','x','.' };
char n1[5][5] = { '.','.','x','.','.',
				  '.','x','x','.','.',
				  'x','.','x','.','.',
				  '.','.','x','.','.',
				  '.','.','x','.','.' };
char n2[5][5] = { 'x','x','x','.','.',
				  '.','.','.','x','.',
				  '.','.','x','.','.',
				  '.','x','.','.','.',
				  'x','x','x','x','.' };
char n3[5][5] = { 'x','x','x','.','.',
				  '.','.','.','x','.',
				  '.','x','x','.','.',
				  '.','.','.','x','.',
				  'x','x','x','.','.' };
char n4[5][5] = { '.','.','x','x','.',
				  '.','x','.','x','.',
				  'x','.','.','x','.',
				  'x','x','x','x','.',
				  '.','.','.','x','.' };
char n5[5][5] = { '.','x','x','x','.',
				  'x','.','.','.','.',
				  'x','x','x','.','.',
				  '.','.','.','x','.',
				  'x','x','x','.','.' };
char n6[5][5] = { '.','x','x','.','.',
				  'x','.','.','.','.',
				  'x','x','x','.','.',
				  'x','.','.','x','.',
				  '.','x','x','.','.' };
char n7[5][5] = { 'x','x','x','x','.',
				  '.','.','.','x','.',
				  '.','.','x','.','.',
				  '.','x','.','.','.',
				  '.','x','.','.','.' };
char n8[5][5] = { '.','x','x','.','.',
				  'x','.','.','x','.',
				  '.','x','x','.','.',
				  'x','.','.','x','.',
				  '.','x','x','.','.' };
char n9[5][5] = { '.','x','x','.','.',
				  'x','.','.','x','.',
				  '.','x','x','x','.',
				  '.','.','.','x','.',
				  '.','x','x','.','.' };
char n0[5][5] = { '.','x','x','x','.',
				  'x','.','.','x','.',
				  'x','x','x','x','.',
				  'x','.','x','x','.',
				  '.','x','x','.','.' };



void switchCase(int i , char name , char symbol) {
	switch (name) {
	case('a'):
		for (int j = 0; j < 5; j++) {
			if (a[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('b'):
		for (int j = 0; j < 5; j++) {
			if (b[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('c'):
		for (int j = 0; j < 5; j++) {
			if (c[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('d'):
		for (int j = 0; j < 5; j++) {
			if (d[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('e'):
		for (int j = 0; j < 5; j++) {
			if (e[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('f'):
		for (int j = 0; j < 5; j++) {
			if (f[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('g'):
		for (int j = 0; j < 5; j++) {
			if (g[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('h'):
		for (int j = 0; j < 5; j++) {
			if (h[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('i'):
		for (int j = 0; j < 5; j++) {
			if (I[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('j'):
		for (int j = 0; j < 5; j++) {
			if (J[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('k'):
		for (int j = 0; j < 5; j++) {
			if (k[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('l'):
		for (int j = 0; j < 5; j++) {
			if (l[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('m'):
		for (int j = 0; j < 5; j++) {
			if (m[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('n'):
		for (int j = 0; j < 5; j++) {
			if (n[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('o'):
		for (int j = 0; j < 5; j++) {
			if (o[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('p'):
		for (int j = 0; j < 5; j++) {
			if (p[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('q'):
		for (int j = 0; j < 5; j++) {
			if (q[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('r'):
		for (int j = 0; j < 5; j++) {
			if (r[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('s'):
		for (int j = 0; j < 5; j++) {
			if (s[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('t'):
		for (int j = 0; j < 5; j++) {
			if (t[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('u'):
		for (int j = 0; j < 5; j++) {
			if (u[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('v'):
		for (int j = 0; j < 5; j++) {
			if (v[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('w'):
		for (int j = 0; j < 5; j++) {
			if (w[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('x'):
		for (int j = 0; j < 5; j++) {
			if (x[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('y'):
		for (int j = 0; j < 5; j++) {
			if (y[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('z'):
		for (int j = 0; j < 5; j++) {
			if (z[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case(' '):
		for (int j = 0; j < 3; j++) {
			cout << " ";
		}
		break;
	case('1'):
		for (int j = 0; j < 5; j++) {
			if (n1[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('2'):
		for (int j = 0; j < 5; j++) {
			if (n2[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('3'):
		for (int j = 0; j < 5; j++) {
			if (n3[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('4'):
		for (int j = 0; j < 5; j++) {
			if (n4[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('5'):
		for (int j = 0; j < 5; j++) {
			if (n5[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('6'):
		for (int j = 0; j < 5; j++) {
			if (n6[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('7'):
		for (int j = 0; j < 5; j++) {
			if (n7[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('8'):
		for (int j = 0; j < 5; j++) {
			if (n8[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('9'):
		for (int j = 0; j < 5; j++) {
			if (n9[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	case('0'):
		for (int j = 0; j < 5; j++) {
			if (n0[i][j] == '.') {
				cout << " ";
			}
			else {
				cout << symbol;
			}
		}
		break;
	}




}

int main()
{
	cout << "<< NO CAPITAL LETTERS  - NO SPECIAL CHARACTERS >>" << endl;

	string sentence , symbol;
	cout << "enter your name :";
	getline(cin, sentence);
	cout << " choose a symbol :";
	cin >> symbol;

	int w = 1 ,speed = 10 , move = 110 - (sentence.length() * 5);
	bool xx = true;


	while (true) {

		Sleep(speed);
		system("CLS");


		if (w < move && xx) {
			w++;
			if(w == move) 
				xx = false;
		}
		else {
			w--;
			if (w == 5)
				xx = true;
		}
		

		for (int i = 0; i < 40; i++)
			cout << "-+-";

		cout << endl << endl << endl ;
		
		for (int i = 0; i < 5; i++)
		{
			cout << setw(w) << " ";

			for (int j = 0; j < sentence.length(); j++)
			{
				if (symbol == "symbol")
					switchCase(i, sentence[j], sentence[j]);
				else
					switchCase(i, sentence[j], symbol[0]);

				cout << " ";
			}
			cout << endl;
		}

		cout << endl << endl << endl;
		for (int i = 0; i < 40; i++)
			cout << "-+-";
	}
}