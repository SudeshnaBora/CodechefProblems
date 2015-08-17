#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i;
	char s[16];

	scanf ("%d", &t);

	while (t--) {
	   scanf ("%s", s);

	   for (i = 0; s[i]; ++i);

	   if (i == 1)
	    printf ("%d\n", s[0] - '0');
	   else
	    printf ("%d\n", s[0] + s[i-1] - 96);
	}
	return 0;
}
