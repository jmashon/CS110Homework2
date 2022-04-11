// Juliana Mashon
// Lowest Score Dropped.cpp

#include <iostream>
#include <iomanip>
using namespace std;

void getScore(int&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
    int s1, s2, s3, s4, s5;

    getScore(s1);
    getScore(s2);
    getScore(s3);
    getScore(s4);
    getScore(s5);

    calcAverage(s1, s2, s3, s4, s5);
}

void getScore(int& score)
{
    cout << "Enter your score:" << endl;
    cin >> score;

    while(score < 0 && score > 100)
    {
        cout << "Enter a score between 0-100:" << endl;
        cin >> score;
    }
}

void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
    int lowest;
    double average;

    lowest = findLowest(score1, score2, score3, score4, score5);

    average = (score1 + score2 + score3 + score4 + score5 - lowest) / 4.0;

    cout << fixed << setprecision(2);
    cout << "The average is: " << average << endl;
}

int findLowest(int score1, int score2, int score3, int score4, int score5)
{
    int low;

    low = score1;
    if (low > score2)
        low = score2;
    if (low > score3)
        low = score3;
    if (low > score4)
        low = score4;
    if (low > score5)
        low = score5;

    return low;
}
