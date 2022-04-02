#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    char     buffer[200], s[] = "computer", c = 'l';
    int      i = 35, j;
    float    fp = 1.7320534f;

    // Format and print various data:
    j = _sprintf_p(buffer, 200, "   String:    %s\n", s);
    j += _sprintf_p(buffer + j, 200 - j, "   Character: %c\n", c);
    j += _sprintf_p(buffer + j, 200 - j, "   Integer:   %d\n", i);
    j += _sprintf_p(buffer + j, 200 - j, "   Real:      %f\n", fp);

    printf("Output:\n%s\ncharacter count = %d\n", buffer, j);

    _getch();
    return 0;
}