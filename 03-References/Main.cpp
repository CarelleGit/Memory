#include<iostream>
#include "Functions.h"
using std::cout;
using std::cin;


int main()
{

	//Closed 1
	cout << "Closed-Q 1:\n\n";
	int val = 100;
	float val2 = 10.50f;
	bool val3 = true;
	char val4 = 'Y';
	int &pizza = val;
	float &cookie = val2;
	bool &food = val3;
	char &chocolate = val4;
	cout << "Pizza: " << val << "\n" << "Cookie: " << val2 << "\n" << "Food: " << val3 << "\n" << "Chocolate: " << val4 << "\n";
	//2
	cout << "Q 2:\n\n";
	float a = 1.5;
	float b = 3;
	float c = 23;

	Product(a, b, c);
	cout << c << "\n";
	//Open 1
	cout << "Open-Q 1:\n\n";
	cout << "A = " << a << "\n" << "B = " << b << "\n\n";
	Swap(a, b);
	cout << "A = " << a << "\n" << "B = " << b << "\n\n";
	//2
	cout << "Q 2:\n\n";
	/*Aussiegochi Zai{ 100,100,100,100}; uncomnent to test
	cout << "Zai current stats:\nHappieness: " << Zai.happiness << "\t Sanity: " << Zai.sanity << "\nHunger: " << Zai.hunger << "\tThirst: " << Zai.thirst << "\n";
	cout << "[F]eed\t[G]ive Water\n[H]old\t[C]old\n\n\n";
	char user;
	bool Alive = true;
	cin >> user;
	while (Alive = true)
	{
		switch (user)
		{
		case 'f':
			feedAussie(Zai);
			cout << "Zai has been feed =D\n";
			cout << "Zai current stats:\nHappieness: " << Zai.happiness << "\t Sanity: " << Zai.sanity << "\nHunger: " << Zai.hunger << "\tThirst: " << Zai.thirst << "\n\n";
			system("pause");
			cout << "[F]eed\t[G]ive Water\n[H]old\t[C]old\n\n\n";
			cin >> user;
			if (Zai.happiness <= -1 || Zai.sanity < -1)
			{
				cout << "Zai has ripped your throat out\n";
				Alive = false;
				system("pause");
			}
			break;
		case 'g':
			waterAussie(Zai);
			cout << "Zai drank water =D\n";
			cout << "Zai current stats:\nHappieness: " << Zai.happiness << "\t Sanity: " << Zai.sanity << "\nHunger: " << Zai.hunger << "\tThirst: " << Zai.thirst << "\n\n";
			system("pause");
			cout << "[F]eed\t[G]ive Water\n[H]old\t[C]old\n\n\n";
			cin >> user;
			if (Zai.happiness <= -1 || Zai.sanity < -1)
			{
				cout << "Zai has ripped your throat out\n";
				Alive = false;
				system("pause");
			}
			break;
		case 'h':
			coddleAussie(Zai);
			cout << "Zai has been held =D\n";
			cout << "Zai current stats:\nHappieness: " << Zai.happiness << "\t Sanity: " << Zai.sanity << "\nHunger: " << Zai.hunger << "\tThirst: " << Zai.thirst << "\n\n";
			system("pause");
			cout << "[F]eed\t[G]ive Water\n[H]old\t[C]old\n\n\n";
			cin >> user;
			if (Zai.happiness < -1 || Zai.sanity <= -1)
			{
				cout << "Zai has ripped your throat out\n";
				Alive = false;
				system("pause");
			}
			break;
		case 'c':
			abuseAussie(Zai);
			cout << "You where cold to Zai, prepare to die =D\n";
			cout << "Zai current stats:\nHappieness: " << Zai.happiness << "\t Sanity: " << Zai.sanity << "\nHunger: " << Zai.hunger << "\tThirst: " << Zai.thirst << "\n\n";
			system("pause");
			cout << "[F]eed\t[G]ive Water\n[H]old\t[C]old\n\n\n";
			cin >> user;
			if (Zai.happiness < -1 || Zai.sanity <= -1)
			{
				cout << "Zai has ripped your throat out\n";
				Alive = false;
				system("pause");
			}
			break;
		default:
			break;
		}
		if (Zai.happiness < -1 || Zai.sanity <= -1)
		{
			cout << "Zai has ripped your throat out\n";
			Alive = false;
			system("pause");
		}
	}*/
	cout << "Q 3:\n\n";
	Track songs[5];
	songs[0].trackName = "I Want Food";
	songs[0].playtime = 2.40f;
	songs[1].trackName = "Kill The Lights";
	songs[1].playtime = 1.40f;
	songs[2].trackName = "Kill The Lights";
	songs[2].playtime = 3.40f;
	songs[3].trackName = "nier: automata";
	songs[4].playtime = 2.40f;
	Playlist iPod = { "songs", songs, 5 };
	printPlaylist(iPod);
	cout << "Shuffled\n";
	shufflePlaylist(iPod);
	dedupePlaylist(iPod);
	while (true){}
}