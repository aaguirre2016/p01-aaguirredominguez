//Author: Alfredo Aguirre Dominguez

    #include <iostream>
    #include <cstdlib>
    #include <ctime> 

 using namespace std;


    int main()
{   
   srand ( time(NULL));

   int randomNumber;
   int guess;


   randomNumber = rand() % 10 + 1; 

   cout << "Guess the computer's number between 1 and 10: " << endl; 
   cin >> guess;
   cout << "Random Number: " << randomNumber << endl;

if ( guess == randomNumber ) 
    {
    cout << "Your guess is correct! You win! " << endl;
    }
else
    {
    cout << "You were off by " << abs( randomNumber - guess) << " Sorry, you lose." << endl;
    }
  

    return 0;
}
