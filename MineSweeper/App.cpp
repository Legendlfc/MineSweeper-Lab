#include "App.h"
#include "Main.h"

wxIMPLEMENT_APP(App);

App::App()
{

}
App::~App()
{

}

bool App::OnInit()
{
	mainWindow = new Main();
	mainWindow->Show();
	return true;
}