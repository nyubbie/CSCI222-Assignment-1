#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

const int MAX_CHARS_PER_LINE = 512;
const int MAX_TOKENS_PER_LINE = 50;
const char* const DELIMITER = ":";
const int MAX = 100;

struct User
{
	char accountID[MAX];
	char accountUser[MAX];
	char accountPass[MAX];
	char memberType[MAX];
	char name[MAX];
	char dob[MAX];
	char address[MAX];
	
};
int main()
{
  // create a file-reading object
  ifstream afile;
  afile.open("AccountDB.txt"); // open a file
  User s[MAX];
  if (!afile.good()) 
    return 1; // exit if file not found
  
  // read each line of the file
  int j = 0;
  while (!afile.eof())
  {
    // read an entire line into memory
    char buf[MAX_CHARS_PER_LINE];
    afile.getline(buf, MAX_CHARS_PER_LINE);
    
    // parse the line into blank-delimited tokens
    int n = 0; // a for-loop index
    
    // array to store memory addresses of the tokens in buf
    const char* token[MAX_TOKENS_PER_LINE] = {}; // initialize to 0
    
    // parse the line
    token[0] = strtok(buf, DELIMITER);// first token
    if (token[0]) // zero if line is blank
    {
      for (n = 1; n < MAX_TOKENS_PER_LINE; n++)
      {
        token[n] = strtok(0, ":"); // subsequent tokens
        if (!token[n]) break; // no more tokens
      }
	  strcpy(s[j].accountID,token[0]);
	  strcpy(s[j].accountUser,token[1]);
	  strcpy(s[j].accountPass,token[2]);
	  strcpy(s[j].memberType,token[3]);
	  strcpy(s[j].name,token[4]);
	  strcpy(s[j].dob,token[5]);
	  strcpy(s[j].address,token[6]);
	  j++;
    }

    // process (print) the tokens
    for (int i = 0; i < n; i++) // n = #of tokens
      cout << "Token[" << i << "] = " << token[i] << endl;
    cout << endl;
	
  }
  cout << s[0].address << endl;
  cout <<  s[1].address << endl;
  cout << s[2].address << endl;
}

