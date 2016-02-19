#include "LoginView.h"

using namespace std;

using namespace System;
using namespace System::Windows::Forms;

[STAThread]//leave this as is
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CSCI222_Assn2::LoginView loginView;
	Application::Run(%loginView);
}