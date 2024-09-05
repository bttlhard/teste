#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	srand(time(NULL));
	
	int car1[24], car2[24], car3[24], car4[24], car5[24], car6[24], car7[24], car8[24], car9[24], car10[24];
	int a[24], b[24], c, i, j, k, x, z = 1;
	
    for (k = 0; k < 10; k++) {
		do {
		for (i = 0; i < 24; i++) {
			if (i == 0)
			c = 0;
			if (c > 24 || i == 0) {
			for (x = 0; x < 24; x++) {
 			a[x] = (rand() % 99) + 1;
			b[x] = a[x]; }
			}
		
		for (j = 0; j < 24; j++) {
			if (a[i] == b[j])
			c++; }
	}
	if (c == 24) {
		if (k == 0)
		for (x = 0; x < 24; x++)
		car1[x] = a[x];
		
		if (k == 1)
		for (x = 0; x < 24; x++)
		car2[x] = a[x];
		
		if (k == 2)
		for (x = 0; x < 24; x++)
		car3[x] = a[x];
		
		if (k == 3)
		for (x = 0; x < 24; x++)
		car4[x] = a[x];
		
		if (k == 4)
		for (x = 0; x < 24; x++)
		car5[x] = a[x];
		
		if (k == 5)
		for (x = 0; x < 24; x++)
		car6[x] = a[x];
		
		if (k == 6)
		for (x = 0; x < 24; x++)
		car7[x] = a[x];
		
		if (k == 7)
		for (x = 0; x < 24; x++)
		car8[x] = a[x];
		
		if (k == 8)
		for (x = 0; x < 24; x++)
		car9[x] = a[x];
		
		if (k == 9)
		for (x = 0; x < 24; x++)
		car10[x] = a[x];
	}
    } while (c > 24);
}

printf ("A cartela 1:\n");
    for (i = 0; i < 24; i++) 
        printf ("%i\t%i\t%i\t%i\t%i\t%i\t%i\t%i\t%i\t%i\t\n", car1[i], car2[i], car3[i], car4[i], car5[i], car6[i], car7[i], car8[i], car9[i], car10[i]);
	
	return 0;
	
}
