#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
char seq[5000];
int i, length;
float GC;
GC=0;

scanf("%s", seq);
length = strlen( seq );

for (i=0; i<length; i++);
	{
		if ( seq[i] == 'G' || seq[i] == 'C' )
		{ GC++; }
	}

printf("GC content is %f\n", 100*GC/length);
}
