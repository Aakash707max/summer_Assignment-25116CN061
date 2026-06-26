#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0;
    char ans;

    cout << "===== QUIZ APPLICATION =====\n\n";

    // Question 1
    cout << "Q1. What is the capital of India?\n";
    cout << "A. Mumbai\nB. Delhi\nC. Chennai\nD. Kolkata\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if(ans == 'B' || ans == 'b')
        score++;

    // Question 2
    cout << "\nQ2. Which language is used for C++ programming?\n";
    cout << "A. HTML\nB. CSS\nC. C++\nD. SQL\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if(ans == 'C' || ans == 'c')
        score++;

    // Question 3
    cout << "\nQ3. How many days are there in a week?\n";
    cout << "A. 5\nB. 6\nC. 7\nD. 8\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if(ans == 'C' || ans == 'c')
        score++;

    // Result
    cout << "\n===== RESULT =====\n";
    cout << "Your Score: " << score << " out of 3\n";

    if(score == 3)
        cout << "Excellent!\n";
    else if(score == 2)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}