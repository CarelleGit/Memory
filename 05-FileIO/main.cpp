#include <fstream>
#include <iostream>
#include <string>
#include "Functions.h"
using std::cout;
using std::cin;
using std::string;
using std::fstream;



void main2()
{
	string inputBuffer;

	cout << "Where to save?\n";
	getline(cin, inputBuffer);
	fstream profile;
	profile.open(inputBuffer.c_str());
	if (profile.fail())
	{
		cout << "Sorry\n";
		return;
	}
	cin.ignore(1000, '\n');

	cout << "Name?\n";
	getline(cin, inputBuffer);
	profile << inputBuffer << "\n";
	cin.ignore(1000, '\n');
	cout << "Age?\n";
	getline(cin, inputBuffer);
	profile << inputBuffer << "\n";
	cin.ignore(1000, '\n');
	cout << "Favorite Color?\n";
	profile << inputBuffer << "\n";
	cin.ignore(1000, '\n');
	profile.flush();
	profile.close();
	cout << "thanks =D\n";
}

int main()
{
	fstream file;
	//
	//
	//	file.open("text.txt");
	//
	//
	//	if (file.fail())
	//	{
	//		cout << "file not found.\n";
	//		return -1;
	//	}
	//	//reading from file
	//
	string buffer;
	//	while (std::getline(file, buffer))
	//	{
	//		cout << buffer << "\n";
	//	}
	//
	//	file.clear();// reseting the error flag
	//
	//	file.seekp(0, std::ios_base::end); // move my cursor to the end
	////writing to file
	//	file << "\n" << "Sleep\n";
	//	file.flush();
	//
	//	file.close();
	//
	//	//let's make another thing
	//	fstream autogen;
	//	autogen.open("NewFile.txt", std::ios::out);
	//	if (autogen.fail())
	//	{
	//		cout << "something is wrong\n";
	//		return -1;
	//	}
	//	autogen.close();
	
	/*while (true)
	{
		string User;
		cout << "What file would you like to read\n>";
		cin >> User;
		file.open(User);
		if (file.fail())
		{
			cout << "Sorry this file does not exsit\n";
			continue;
		}
		while (std::getline(file, User))
		{
			cout << User << "\n";
	
		}
		file.close();
		break;
	}*/
	//main2();
	fstream EnitiyStream;
	EnitiyStream.open("monster.txt");

	if (EnitiyStream.fail())
	{
		cout << "Sorry not found\n";
	}
	int entityCount = 0;
	Entity Monster[100];

	while (true)
	{
		string buf;
		bool found = false;
		while (getline(EnitiyStream, buf))
		{
			if (buf[0] == '@') 
			{ 
				found = true;
				break;
			}
		}
		if ( !found)
		{
			break;
		}
		Entity &curEntity = Monster[entityCount];
		getline(EnitiyStream, buf);
		curEntity.hitp = stof(buf);

		getline(EnitiyStream, buf);
		curEntity.armor = stof(buf);

		getline(EnitiyStream, buf);
		curEntity.str = stof(buf);

		getline(EnitiyStream, buf);
		curEntity.def = stof(buf);

		getline(EnitiyStream, buf);
		curEntity.adi = stof(buf);

		getline(EnitiyStream, buf);
		curEntity.luck = stof(buf);
		
		entityCount++;
		if (entityCount >= 100)
		{
			break;
		}
	}


	while (true) {}
}