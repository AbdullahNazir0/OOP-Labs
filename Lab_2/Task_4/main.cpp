#include <iostream>
#include <fstream>
#include "Quiz.h"

using namespace std;

int main()
{
    string question1, question2, question3, question4, question5;
    string answer1, answer2, answer3, answer4, answer5;
    string sample_answer1, sample_answer2, sample_answer3, sample_answer4, sample_answer5;
    ifstream fin;
    fin.open("Question.txt");
    if(!fin)
    {
        cout << "Quesions file missing.";
    }
    else
    {
        readQuestions(fin, question1, question2, question3, question4, question5);
        fin.close();
    }
    fin.open("Answers.txt");
    if(!fin)
    {
        cout << "Answers file missing.";
    }
    else
    {
        readAnswers(fin, sample_answer1, sample_answer2, sample_answer3, sample_answer4, sample_answer5);
        fin.close();
    }
    presentingQuestions(question1, question2, question3, question4, question5, answer1, answer2, answer3, answer4, answer5);
    cout << "You obtained " << checkingAnswers(answer1, answer2, answer3, answer4, answer5, sample_answer1, sample_answer2, sample_answer3, sample_answer4, sample_answer5) << " marks out of 5 marks." << endl;
    return 0;
}