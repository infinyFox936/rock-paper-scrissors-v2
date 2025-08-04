#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void space(int numberOfTimes)
{
    for (int i = 0; i < numberOfTimes; i++)
    {
        cout << endl;
    }
}



int main()
{
    srand(time(0));

    
    cout << "Rock, Paper, Scrissors" << endl;
    space(3);

    int input, bot = rand() % 3;
    int yScore = 0, bScore = 0; // youScore, botScore


    while(input != 5)
    {
        cout << "select from one of this list:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. paper" << endl;
        cout << "3. Scrissors" << endl;
        cout << "4. Score" << endl;
        cout << "5. Exit";
        space(1);
        cout << "Your option is: ";
        cin >> input;
        space(1);

        if((bot == 1 && input == 1) || (bot == 2 && input == 2) || (bot == 3 && input == 3)) cout << "Bot chose the same thing you chose, so its a draw!" << endl;
        else if(input == 1)
        {
            if(bot == 2)
            {
                cout << "Bot chose paper, so you failed!" << endl;
                bScore++;
            }
            else
            {
                cout << "Bot chose scrissors, so you won!" << endl;
                yScore++;
            }
        }
        else if(input == 2)
        {
            if(bot == 1)
            {
                cout << "Bot chose rock, so you won!" << endl;
                yScore++;
            }
            else
            {
                cout << "Bot chose scrissors, so you failed!" << endl;
                bScore++;
            }
        }
        else if(input == 3)
        {
            if(bot == 1)
            {
                cout << "Bot chose rock, so you failed!" << endl;
                bScore++;
            }
            else
            {
                cout << "Bot chose paper, so you won!" << endl;
                yScore++;
            }
        }
        else if(input == 4)
        {
            cout << "Your Score: " << yScore << "" << endl;
            cout << "Bot's score: " << bScore << "" << endl;

        }
        else if(input == 5) {} // doesnt do anything, the while() does the job; this line is here to prevent error message on lines 90-93
        else
        {
            cout << "ERROR: " << input << " IS NOT A VALID ANSWER" << endl;
        }
        space(2);
    }
    return 0;
}
