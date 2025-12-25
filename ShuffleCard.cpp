#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int row, column;
    const char *card[] = {"Spade", "Heart", "Diamond", "Club"};
    const char *face[] = {"Jack", "Queen", "King", "Ten", "Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Ace", "Deuce"};
    int shuffledDeck[4][13] = {0};
    srand(time(0));
    for (int i = 1; i <= 52; i++)
    {
        do
        {
            row = rand() % 4;
            column = rand() % 13; 
        } while (shuffledDeck[row][column] != 0);
        shuffledDeck[row][column] = i;
    }
    for (int k = 1; k <= 52; k++)
    {
        for (int i = 0; i <= 3; i++)
        {
            for (int j = 0; j <= 12; j++)
            {
                if (shuffledDeck[i][j] == k)
                {
                    cout << k << ": card is: " << card[i] << " of " << face[j] << endl;
                }
            }
        }
    }
}