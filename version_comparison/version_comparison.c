#include <stdio.h>
#include <string.h>

int compare(char* v1, char* v2)
{
    int vnum1 = 0, vnum2 = 0;
    for (int i=0,j=0; (i<strlen(v1) || j<strlen(v2)); )
    {
        while (i < strlen(v1) && v1[i] != '.')
        {
            vnum1 = vnum1 * 10 + (v1[i] - '0');
            i++;
        }
        while (j < strlen(v2) && v2[j] != '.')
        {
            vnum2 = vnum2 * 10 + (v2[j] - '0');
            j++;
        }
        if (vnum1 > vnum2)
            return 1;
        else if (vnum2 > vnum1)
            return -1;
        vnum1 = vnum2 = 0;
        i++;
        j++;
    }
    return 0;
}

int main()
{
	char v1[] = "3.5.10";
	char v2[] = "3.5.10";
	int a = compare(v1, v2);
	printf("%d\n", a);
	return 0;
}