#include <stdio.h>
#include<conio.h>
void main()
{
  int i, a;
  int t1 = 0, t2 = 1;
  int nextterm = t1 + t2;
  printf ("Enter The  number of terms : ");
  scanf ("%d", &a);
  printf ("Fibonancii Series = %d, %d, ", t1, t2);
  for (i = 3; i <= a; ++i)
    {
      printf ("%d, ", nextterm);
      t1 = t2;
      t2 = nextterm;
      nextterm = t1 + t2;
    }
  
}
