#include <iostream>
#include <cstdlib>
using namespace std;
char matrica[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char izazivac = 'X';
void Ispisi()
{
	system("cls");
	cout << "IKS_OKS_IGRICA \n" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrica[i][j] << " ";
		}
		cout << endl;
	}cout<<endl;
}
void Unos()
{
	int a;
	cout << "Na potezu je " << izazivac <<", Pritisni broj polja : ";
	cin >> a;

	if (a == 1)
	{
		if (matrica[0][0] == '1')
			matrica[0][0] = izazivac;
		else
		{
			cout << "Zauzeto polje, pokusaj ponovo!" << endl;
			Unos();
		}
	}
	else if (a == 2)
	{
		if (matrica[0][1] == '2')
			matrica[0][1] = izazivac;
		else
		{
			cout << "Zauzeto polje, pokusaj ponovo!" << endl;
			Unos();
		}
	}
	else if (a == 3)
	{
		if (matrica[0][2] == '3')
			matrica[0][2] = izazivac;
		else
		{
			cout << "Zauzeto polje, pokusaj ponovo!" << endl;
			Unos();
		}
	}
	else if (a == 4)
	{
		if (matrica[1][0] == '4')
			matrica[1][0] = izazivac;
		else
		{
			cout << "Zauzeto polje, pokusaj ponovo!" << endl;
			Unos();
		}
	}
	else if (a == 5)
	{
		if (matrica[1][1] == '5')
			matrica[1][1] = izazivac;
		else
		{
			cout << "Zauzeto polje, pokusaj ponovo!" << endl;
			Unos();
		}
	}
	else if (a == 6)
	{
		if (matrica[1][2] == '6')
			matrica[1][2] = izazivac;
		else
		{
			cout << "Zauzeto polje, pokusaj ponovo!" << endl;
			Unos();
		}
	}
	else if (a == 7)
	{
		if (matrica[2][0] == '7')
			matrica[2][0] = izazivac;
		else
		{
			cout << "Zauzeto polje, pokusaj ponovo!" << endl;
			Unos();
		}
	}
	else if (a == 8)
	{
		if (matrica[2][1] == '8')
			matrica[2][1] = izazivac;
		else
		{
			cout << "Zauzeto polje, pokusaj ponovo!" << endl;
			Unos();
		}
	}
	else if (a == 9)
	{
		if (matrica[2][2] == '9')
			matrica[2][2] = izazivac;
		else
		{
			cout << "Zauzeto polje, pokusaj ponovo!" << endl;
			Unos();
		}
	}

}
void Igrac()
{
	if (izazivac == 'X')
		izazivac = 'O';
	else
		izazivac = 'X';
}
char Pobednik()
{
	//AKO JE X POBEDNIK
	if (matrica[0][0] == 'X' && matrica[0][1] == 'X' && matrica[0][2] == 'X')
		return 'X';
	if (matrica[1][0] == 'X' && matrica[1][1] == 'X' && matrica[1][2] == 'X')
		return 'X';
	if (matrica[2][0] == 'X' && matrica[2][1] == 'X' && matrica[2][2] == 'X')
		return 'X';

	if (matrica[0][0] == 'X' && matrica[1][0] == 'X' && matrica[2][0] == 'X')
		return 'X';
	if (matrica[0][1] == 'X' && matrica[1][1] == 'X' && matrica[2][1] == 'X')
		return 'X';
	if (matrica[0][2] == 'X' && matrica[1][2] == 'X' && matrica[2][2] == 'X')
		return 'X';

	if (matrica[0][0] == 'X' && matrica[1][1] == 'X' && matrica[2][2] == 'X')
		return 'X';
	if (matrica[2][0] == 'X' && matrica[1][1] == 'X' && matrica[0][2] == 'X')
		return 'X';

	//AKO JE O POBEDNIK
	if (matrica[0][0] == 'O' && matrica[0][1] == 'O' && matrica[0][2] == 'O')
		return 'O';
	if (matrica[1][0] == 'O' && matrica[1][1] == 'O' && matrica[1][2] == 'O')
		return 'O';
	if (matrica[2][0] == 'O' && matrica[2][1] == 'O' && matrica[2][2] == 'O')
		return 'O';

	if (matrica[0][0] == 'O' && matrica[1][0] == 'O' && matrica[2][0] == 'O')
		return 'O';
	if (matrica[0][1] == 'O' && matrica[1][1] == 'O' && matrica[2][1] == 'O')
		return 'O';
	if (matrica[0][2] == 'O' && matrica[1][2] == 'O' && matrica[2][2] == 'O')
		return 'O';

	if (matrica[0][0] == 'O' && matrica[1][1] == 'O' && matrica[2][2] == 'O')
		return 'O';
	if (matrica[2][0] == 'O' && matrica[1][1] == 'O' && matrica[0][2] == 'O')
		return 'O';

	return '/';
}
int main()
{
	int n = 0;
	Ispisi();
	while (1)
	{
		n++;
		Unos();
		Ispisi();
		if (Pobednik() == 'X')
		{
			cout << "X je pobedio!" << endl;
			break;
		}
		else if (Pobednik() == 'O')
		{
			cout << "O je pobedio!" << endl;
			break;
		}
		else if (Pobednik() == '/' && n == 9)
		{
			cout << "Nereseno!" << endl;
			break;
		}
		Igrac();
	}
	system("pause");
	return 0;
}
