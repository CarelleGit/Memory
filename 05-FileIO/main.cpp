#include <fstream>
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::fstream;



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
	string User;
	cout << "What file would you like to read\n>";
	cin >> User;
	file.open(User);
	if (file.fail())
	{
		cout << "Sorry this file does not exsit\n";
	}
	while (std::getline(file, User))
	{
		cout << User << "\n";
	}
	file.close();
	cout << "save file\n>";
	cin >> User;
	file.open(User);
	if (file.fail())
	{
		cout << "Sorry this file does not exsit\n";
		return 0;
	}
	cout << "Name?\n>";
	cin >> User;
	file << "Name: " << User << "\n";

	cout << "Age\n>";
	cin >> User;
	file << "Age: " << User << "\n";

	cout << "Favorite color\n>";
	cin >> User;
	file << "Favorite color: " << User << "\n";
	file.close();



	while (true) {}
}