#include "MyForm.h"
#include "table.h"
#include <Windows.h>

using namespace Credit;


int main(void) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}