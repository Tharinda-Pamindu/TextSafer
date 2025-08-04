#include <cstdlib>
#include "DashBoard.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew TextSafer::DashBoard());

	return EXIT_SUCCESS;
}