#include "MainForm.h"

using namespace ClientRegistration;
[STAThreadAttribute]
int main(array<System::String ^> ^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ClientRegistration::MainForm MForm;

	Application::Run(%MForm);


	return 0;
}