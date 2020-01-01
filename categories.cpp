#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <WinUser.h>
#include "categories.h"

using namespace std;

void Categories::menu()
{

    cout << "PC-Manager v.1.0\n\n" << endl;

    cout << "-----------------------------------" << endl;
    cout << "|" << "  1. ADMINISTRATOR TOOLS         |" << endl;
    cout << "|" << "  2. NETWORK                     |" << endl;
    cout << "|" << "  3. EXIT                        |" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Your choice: "; cin >> choice;
}
void Categories::admin_tools()
{
    if (choice == 1)
    {
        cout << endl;
        cout << "1. List of Active Processes" << endl;
        cout << "2. Computer Management" << endl;
        cout << "3. Check Disk Utility" << endl;
        cout << "4. System Information" << endl;
        cout << "5. List of active Windows Services" << endl;
        cout << "6. Windows Services Manager" << endl;
        cout << "7. Policy settings for computer" << endl;
        cout << "8. Certificate Manager" << endl;
        cout << "9. Local Users and Groups" << endl;
        cout << "10. Registry Editor" << endl;
        cout << "11. System Configuration Utility" << endl;
        cout << "12. CleanUP Temp File" << endl;  
        cout << "Your choice: "; cin >> choice;
       
        if (choice == 1)
        {
            system("tasklist\n");
            Sleep(1000);
            system("\n\npause\n");
            
        }
        if (choice == 2)
        {
            system("compmgmt.msc\n");
            Sleep(1000);
            system("\n\npause\n");
        
        }
        if (choice == 3)
        {
            system("chkdsk\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 4)
        {
            system("systeminfo\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 5)
        {
            system("net start\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 6)
        {
            system("services.msc\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 7)
        {
            system("gpresult /Z\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 8)
        {
            system("certmgr.msc\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 9)
        {
            system("lusrmgr.msc\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 10)
        {
            system("regedit\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 11)
        {
            system("msconfig\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 12)
        {
            system("cleanmgr\n");
            Sleep(1000);
            system("\n\npause\n");
        }
    }

}
void Categories::network()
{
    if (choice == 2)
    {
        cout << endl;
        cout << "1. Network Adapter's Informations" << endl;
        cout << "2. Local Network Status" << endl;
        cout << "3. Network Status" << endl;
        cout << "4. Show Mac Address" << endl;
        cout << "5. Active Connections" << endl;
        cout << "6. Converting Domain Name to Ip Address (Use exit to leave this mode)" << endl;
        cout << "7. DNS flush" << endl;
        cout << "Your choice: "; cin >> choice;
        if (choice == 1)
        {
            system("ipconfig /all\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 2)
        {
            system("ping -n 5 localhost\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 3)
        {
            system("ping -n 10 google.com\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 4)
        {
            system("getmac\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 5)
        {
            system("netstat -a\n\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 6)
        {
            system("nslookup\n");
            Sleep(1000);
            system("\n\npause\n");
        }
        if (choice == 7)
        {
            system("ipconfig /flushdns\n");
            Sleep(1000);
            system("\n\npause\n");
        }
    }
}
void Categories::xlog()
{
    if (choice == 3)
    {
        exit(0);
    }
}
