#pragma once
#include <string>
#include <random>
#include <ctime>
struct Aussiegochi
{
	float happiness;
	float hunger;
	float thirst;
	float sanity;
};


void Product(float a, float b, float &c);
void Swap(float &a, float &b);

void feedAussie(Aussiegochi &aus);
void waterAussie(Aussiegochi &aus);
void abuseAussie(Aussiegochi &aus);
void coddleAussie(Aussiegochi &aus);
struct Track
{
	std::string trackName; // name of track
	float playtime;        // track runtime
};

struct Playlist
{
	std::string playlistName; // name of playlist
	Track * trackList;        // pointer to array of tracks
	int trackCount;           // number of tracks
};

void printPlaylist(const Playlist& pl);
void shufflePlaylist(Playlist& pl);
void dedupePlaylist(Playlist& pl);



