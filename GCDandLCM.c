#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	int a, b, m, n;
	scanf ("%d", &t);

	while (t--) {
	    scanf ("%d %d", &a, &b);
	    m = a;
	    n = b;

	    while (n) {
	        m = m % n;
	        m ^= n ^= m ^= n;
	    }

	    printf ("%d %d\n", m, (a * b) / m);
	}
	return 0;
}
