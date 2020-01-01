#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <WinUser.h>
using namespace std;

class Categories {
public:
	int choice;
	
	void menu();
	void admin_tools();
	void network();
	void xlog();
};