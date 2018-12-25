#include <stdio.h>
void CETAK ();
int main()
{
    int A, B, T;
    A=5 ; B=2 ;
    T = A+B ;
}
void CETAK ()
{
printf("%d",T); //terjadi error, T tidak dikenal
}
