#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, s;

	scanf ("%d", &t);

	while (t--) {
	    scanf ("%d", &n);
	    s = 0;
	    while (n) {
	        s += n % 10;
	        n /= 10;
	    }
	    printf ("%d\n", s);
	}
	return 0;
}
