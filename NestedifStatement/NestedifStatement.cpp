// NestedifStatement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int score{};
    std::cout << "Enter your score on the exam(0 - 100):";
    cin >> score;
    char letter_grade{};

    if (score >= 0 && score <= 100)
    {
        if (score > 90)
            letter_grade = 'A';
        else if (score > 80)
            letter_grade = 'B';
        else if (score > 70)
            letter_grade = 'C';
        else if (score > 60)
            letter_grade = 'D';
        else
            letter_grade = 'F';

        cout << "Your grade is : " << letter_grade << endl;

        if (letter_grade == 'F')
            cout << "Sorry you must repeat the class " << endl;
        else
            cout << " Congratulations " << endl;
    }
    else {
        cout << "Sorry " << score << " is not in range \n";
    }
}


