#include "../ECore/EGraphics.h"
#include "../EEngine/EWindow.h"
#include "../EEngine/EMeshUtil.h"
#include "../ECore/EUtil.h"
#include "EGame.h"
#include "res/resource.h"

using namespace E3D;

int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow
)
{
	std::cout << "hello";
	InitLog("Init Graphics");
	EGraphics::initGraphics(hInstance);
	Log("Graphics Load Successed!");
	Log("Graphics Load Successed!");
	Log("Graphics Load Successed!");
	Log("Graphics Load Successed!");
	Log("Graphics Load Successed!");
	Log("Graphics Load Successed!");
	EGameWindow::GWindow = new EGameWindow("E3D [3D TankWar]", hInstance);
	Log("Window Load Successed!");
	EGameWindow::GWindow->showWindow(true);
	Log("Window2 Load Successed!");
	HWND hwnd = EGameWindow::GWindow->getHWnd();
	LONG iconID = (LONG)LoadIcon(::GetModuleHandle(0), MAKEINTRESOURCE(IDI_ICON_TANKWAR));
	Log("Window3 Load Successed!");
	Log("Window3 Load Successed!");
	Log("Window3 Load Successed!");
	Log("Window3 Load Successed!");
	::SetClassLong(hwnd, GCL_HICON, iconID);
	EGame *game = new EGame;
	Log("Window4 Load Successed!");
	EGameWindow::GWindow->setCanvasListener(game);
	Log("Window5 Load Successed!");
	EGameWindow::GWindow->addInputListener(game);
	Log("Window6 Load Successed!");
	EGameWindow::GWindow->startLoop();
	Log("Window7 Load Successed!");


	Log("Shutdown Graphics...");
	EGraphics::shutdownGraphics();

	CloseLog();
	return 0;
}