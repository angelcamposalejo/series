#include "stdafx.h"  //________________________________________ Series.cpp
#include "Series.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Series app;
	return app.BeginDialog(IDI_Series, hInstance);
}

void Series::Window_Open(Win::Event& e)
{
}

