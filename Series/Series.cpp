#include "stdafx.h"  //________________________________________ Series.cpp
#include "Series.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Series app;
	return app.BeginDialog(IDI_Series, hInstance);
}

void Series::Window_Open(Win::Event& e)
{

}
int Series::calcularX(int n)
{
	if (n== 0)
	{
		return 0 + 2;
	}
	else
	{
		if (n % 2 == 0)
		{
			return n + 2;
		}
		else
		{
			return n + 1;
		}
	}
}
int Series::calcularY(int n)
{
	if (n == 0)
	{
		return 0 + 1;
	}
	else
	{
		if (n % 2 == 0)
		{
			return n + 1;
		}
		else
		{
			return n + 2;
		}
	}
}

void Series::tbxEntrada_Change(Win::Event& e)
{
	const int n = tbxEntrada.IntValue;
	tbxX.IntValue = calcularX(n);
	tbxY.IntValue = calcularY(n);

}

