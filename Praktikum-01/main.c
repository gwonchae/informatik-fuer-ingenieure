/* Gwonchae Youn 945010 */
#include <stdio.h>

int main()
{
	int a;

	printf("Willkommen bei meinem ersten Programm, geschrieben in der "
	       "Programmiersprache C!");
	printf("Bitte geben Sie Ihr Alter ein: ");
	scanf("%i", &a);
	if (a > 10)
	{
		printf("Sie sind %d Jahre alt.\n", a);
	}
	else
	{
		printf("Bei dem Alter darf ich noch Du sagen.\n");
	}
	printf("Auf Wiedersehen.\n");

	return 0;
}
