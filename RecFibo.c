#include<stdio.h>
void fibonacci(int);
int main(){
int n;
printf("Enter Total terms:\n");
scanf("%d", &n);
fibonacci(n);
}
void fibonacci(int a){
  int i;
  int t1 = 0, t2 = 1;
  int nextterm = t1 + t2;
  printf ("Fibonancii Series = %d, %d, ", t1, t2);
  for (i = 3; i <= a; ++i)
    {
      printf ("%d, ", nextterm);
      t1 = t2;
      t2 = nextterm;
      nextterm = t1 + t2;
    }
}