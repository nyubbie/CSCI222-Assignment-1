#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <iomanip>
#include <ctime>
using namespace std;

const int MAX = 100;

class Member
{
	public:
	int memberID;
	char memberUser[50];
	char memberPass[50];
	int memberType;
	char memberName[50];
	char memberDob[30];
	char memberAdd[100];
	
}M;

int main()
{
	ofstream afile;
	afile.open("AccountDB.txt",ios::app);
	
	srand(time(NULL));
	
	if (!afile)
	{
		cout << " opened for creation failed" << endl;
		exit (-1);
	}
	
	cout << "Enter member user ID: ";
	cin >> M.memberUser;
	cout << "Enter a password for user: ";
	cin >> M.memberPass;
	cout << "Enter member rank: ";
	cin >> M.memberType;
	cin.clear();
	cin.ignore(MAX,'\n');
	cout << "Enter member name: ";
	cin.getline(M.memberName,MAX);
	cout << "Enter member dob: ";
	cin >> M.memberDob;
	cin.clear();
	cin.ignore(MAX,'\n');
	cout << "Enter member address: ";
	cin.getline(M.memberAdd,MAX);
	
	M.memberID = rand() % 999 + 100; //random accountID assignment from 100-1000

	
	afile << M.memberID << ":" << M.memberUser << ":" << M.memberPass << ":" << M.memberType
		  << ":" << M.memberName << ":" << M.memberDob << ":" << M.memberAdd << "\n";
	
	afile.close();
	
	cout << "Member added" << endl;
	
	
	
}

