// this program keeps display in the prime summe of prime numbers

#include <iostream>

// this function check if a number is prime or not
bool isPrime(unsigned long long n)
{
    for (unsigned long long i = 2; i <= sqrt(n); i++) // using sqrt() function gives faster compile time add <cmath> library
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;

}


int main()
{
    unsigned long long sum = 0, nbr = 2, nbrprime = 0;

    while (true) 
    {
            if (isPrime(nbr))
            {
                nbrprime++; //this is how many prime numbers we add it so it gives us a prime number
                sum += nbr; // add the prime number to sum
                std::cout << "\n\n\tnbr prime = " << nbrprime;
                if (isPrime(sum))
                {
                    std::cout << "\n\n\tPrime somme  = " << sum;
                }
            }

            nbr++; // incrimant nbr to test a nother number 
    }
  
    std::cin.get();
}
