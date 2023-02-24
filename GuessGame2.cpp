#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int number;
    int guess;
    int tries;
    bool isGuessed;

    srand(time(0));
    number = rand() % 10;

    isGuessed = false;

    while ((tries < 4) && (!isGuessed))
    {
        cout << "Hermosa!!! Enter a Number Between 0 and 10" << endl;
        cin >> guess;
        cout << endl;

        tries++;

        if (guess == number)
        {
            cout << "You Guessed the Correct Number Beautiful!!! Now Let's Get Married!!!!" << endl;
            isGuessed = true;
        }
        else if (guess < number)
            cout << "Your Guessed is Lower Than That Number. \nGuess Again Prettyful!" << endl;

        else
            cout << "Your Guessed is Higher Than That Number. \nGuess Again Prettyful!" << endl;
        cout << endl; // THIS IS TO MAKE SPACE BETWEEN SENTENCE!!!
    }

    if (!isGuessed)
    {
        cout << "You Loose Mi Love! The Correct Answer is " << number << endl;
    }

    return (0);
}