// Format for facilityDB
// name:rate:timeslot
// timeslot eg 0800-1000,1000-1200,1200-1400  // use 24hrs, each session is 2hrs 
//  eg. monday offpeak 0800-0900,tuesday peak 1800-2000
//
// opening hrs for use of facility is 0800-2000 everyday


#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>
using namespace std;

class Facility
{
	public:
	char F_name[20];//facility name
	double Rate_peak;// rate of particular facility
	double Rate_nonpeak;
	char Days[10];
	char Time_slot[100];// array of timeslot

}F;
enum period {peak,offpeak};


//typedef enum wkday_peakhrs {1200-1400,1800-2000};
//typedef enum wd_non-peakhrs{0800-1000,1000-1200,1400-1600,1600-1800};

//typedef enum wkend_peakhrs {1000-1200,1200-1400,1400,1600,1600-1800};
//typedef enum wkend_non-peakhrs {0800-1000,1800-2000};


int main()
{
	ofstream afile;
 	afile.open("facilityDB.txt",ios::app);
	
	if (!afile)
	{
		cout << " opened for creation failed" << endl;
		exit (-1);
	}
	
	
	cout << "Enter facility name: ";
	cin.getline(F.F_name,100);
	afile <<  F.F_name;
	
	cout << "\nEnter peak rates:";
	cin >> F.Rate_peak;
	cout << "\nEnter non-peak rates:";
	cin >> F.Rate_nonpeak;
	afile << ":" << fixed << showpoint << setprecision(2) << F.Rate_peak << "," << F.Rate_nonpeak << ":" ; //cout to out file with a delimeter
	
	int slotnum;
	cout << "Enter number of timeslot available: ";
	cin >> slotnum;
	
	for(int i=1; i<=slotnum;i++)
	{
		cout << "\nEnter timeslot:";
		cin >> F.Time_slot;
		
		if ( i == slotnum) // print out last timeslot
		{	 afile << F.Time_slot; }
		
		else
		afile << F.Time_slot<< ","; // delimiter for timeslot
	}
	
	afile << "\n";
	
	afile.close();
	
	cout << "\nEntry added" << endl;
	
	
	
}

