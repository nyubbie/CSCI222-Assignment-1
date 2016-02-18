#ifndef ADMIN_H
#define ADMIN_H

#include <string>

// Should inherit from User Class
class Admin : public User {

private:

	// Inherited variables from User class
	// int userID;
	// std::string userPassword;

protected:

public:

	// Constructor
	Admin();

	// Destructor (?)
	~Admin();

	// Validate member login
	validateAdminUser();

	// Get member details based on Member object
	getMember(Member);

	

}

#endif
