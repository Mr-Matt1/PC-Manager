#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <WinUser.h>
#include "categories.h"
using namespace std;

int main()
{
	for (;;)
	{
		Categories Menu;
		Menu.menu();
		Menu.admin_tools();
		Menu.network();
		Menu.xlog();
	}



	return 0;
}
