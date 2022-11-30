#include <stdio.h>
#include <math.h>

int main()
{
char k;
int  t;
t=0;

while( scanf( "%c", &k ) == 1 )
	{
		if ( k == 'C'  )
		t++;
	}

printf( "The content of C is %d\n", t);
}
