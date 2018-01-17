#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>


using namespace std;

int fib[200]; // pierwszy krok : definiujemy tablice
int n; // drugi krok: pytamy usera ile liczb ciagu chce wyznaczyc

int main()
{
    cout << "Fibonacci! Illuminatti" << endl;
    Sleep(2000);
    cout << "ile liczb ciagu fibonacciego chcesz wyznaczyc? " << endl;
    cin >> n;

    fib[0]=1;
    fib[1]=1;

    for (int i = 2 ; i<n ; i++) // i<n (równego np. 20), tablica fib[200] ma indexy od 0 do 199, czyli pierwsze wykonanie pętli (int i =2) będzie dotyczyć tzreciej szufladki, a 19 wykonanie petli będzie dotyczyć 20 indekxu
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

for (int i=0; i<n ;i++)
{
    cout << "wyraz  " << i+1 << "  ma wartosc =  " << fib[i] << endl;
}


    return 0;
}
