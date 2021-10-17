#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n; // A number upto which we want the sieve to be generated

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));  // initially all the numbers are considred as prime so all are marekd true

    int firstFactor[n + 1] ; // firstfactor array is to store the firstfactor of all the numbers other than 1
    memset(firstFactor, -1, sizeof(firstFactor));

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)  // Here the numbers which are already prime will go ad all other will get filter out
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                prime[j] = false;
                if(firstFactor[j] ==-1){  //this check is for numbers which have multiple multiples so that only the first one will be entered
                    firstFactor[j]= i;
                }
            }
        }
    }
    for(int i = 2 ; i<=n ; i++){
        if(prime[i]){  // as the prime numbers all are not traversed above we check them here ,prime numbers will have factors only them
            firstFactor[i] = i;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        cout << firstFactor[i] << " ";
    }
}
