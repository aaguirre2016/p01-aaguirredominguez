//Author: Alfredo Aguirre Dominguez

    #include <iostream>
    #include <cstdlib>
    #include <ctime> 

 using namespace std;


    int main()
{   
   srand ( time(NULL));

   int randomNumber; //holds random number
   int guess;
   int offbynumber;

  
   randomNumber = rand() % 10 + 1; 
   offbynumber = (randomNumber - guess);

   cout << "Guess the computer's number: " << endl; 
   cin >> guess;
   cout << "Random Number: " << randomNumber << endl;

if ( guess == randomNumber ) 
    {
    cout << "Your guess is correct!" << endl;
    }
else
    {
    cout << "You were off by " << offbynumber << endl;
    } 

   return 0;
}
