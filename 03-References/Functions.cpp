#include "Functions.h"
#include <iostream>
using std::cout;
using std::cin;


void Product(float a, float b, float & c)
{
	c = a * b;
}

void Swap(float & a, float & b)
{
	float c;
	c = a;
	a = b;
	b = c;
}

void feedAussie(Aussiegochi &aus)
{
	aus.hunger = aus.hunger + 3;
}

void waterAussie(Aussiegochi &aus)
{
	aus.thirst = aus.thirst + 3;
}

void abuseAussie(Aussiegochi &aus)
{
	aus.happiness = aus.happiness - 100;
	aus.sanity = aus.sanity - 100;
}

void coddleAussie(Aussiegochi &aus)
{
	aus.happiness = aus.happiness + 100;
	aus.sanity = aus.sanity + 100;
}

void printPlaylist(const Playlist & pl)
{

	for (int i = 0; i < pl.trackCount; i++)
	{
		cout << pl.trackList[i].trackName << "\n";
		cout << (int)pl.trackList[i].playtime << ":" << (pl.trackList[i].playtime - (int)pl.trackList[i].playtime) * 100 << "\n";
	}

}

void shufflePlaylist(Playlist & pl)
{
	srand(time(NULL));
	int counter = rand() % 100;
	Track temp;
	while (counter > 0)
	{
		int bogo = rand() % (pl.trackCount - 1);
		temp = pl.trackList[bogo];
		pl.trackList[bogo] = pl.trackList[bogo + 1];
		pl.trackList[bogo + 1] = temp;
		counter--;
	}

}

void dedupePlaylist(Playlist & pl)
{

	for (int i = 0; i < pl.trackCount; i++)
	{
		for (int j = i + 1; j < pl.trackCount; j++)
		{
			if (pl.trackList[i].trackName == pl.trackList[j].trackName)
			{
				
				pl.trackList[j].trackName = " ";
			    pl.trackList[i].trackName << "\n";
			}

		}
	}

}
