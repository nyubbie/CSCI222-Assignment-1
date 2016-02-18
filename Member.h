#ifndef MEMBER_H
#define MEMBER_H

#include <string>

// Should inherit from User Class
class Member : public User {

private:

	// Save entire member details as text string (requires delimiter)
	std:string memberParticulars;

protected:

public:

	// Constructor
	Member();

	// Destructor (?)
	~Member();

	// Validate member login
	validateMemberUser(); 

	// Get member details based on ID
	getMember(int);

	// Allows member to change name (set name)
	setMemberName(std:string);

	// Allows member to change password (set password)
	setMemberPassword(std:string);

	// Allows member to change particulars (set particulars)
	setMemberParticulars(std:string);

}

#endif
