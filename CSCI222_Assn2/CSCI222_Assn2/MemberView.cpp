#include <iostream>
#include <string>
#include <fstream>

#include "MemberView.h"

using namespace std;

// Function to read Member Database (MemberDB.txt)
string readMemberFile() {

// Read member file
ifstream myfile("MemberDB.txt");

string line;
if (myfile.is_open())
{
	while (getline(myfile, line))
	{
		return line;
	}
	myfile.close();
}
}
