//Francis Olsson
//CISP 360
//Grade problem

#include <iostream>
#include <string>

using namespace std;

string fullname;
string ID;
float quizes;
float assignments;
float midterm;
float final;

int main(){
    cout << "Please enter student ID: "<<endl;
    getline(cin,ID);
    cout << "Please enter student name: "<<endl;
    getline(cin,fullname);
    cout << "Please enter total Quiz points for "<<fullname<<":"<< endl;
    cin >> quizes;
    cout << "Please enter total Assignment points for "<<fullname<<":"<< endl;
    cin >> assignments;
    cout << "Please enter total Mid Term exam points for "<<fullname<<":"<< endl;
    cin >> midterm;
    cout << "Please enter total Final exam points for "<<fullname<<":"<< endl;
    cin >> final;
    
    float quiz_score = 0.2*quizes;
    float assignment_score = 0.4*assignments;
    float midterm_score = 0.2*midterm;
    float final_exam_score = 0.2*final;
    
    cout << fullname<< "("<<ID<<")"<<endl;
    cout << "Quiz Score Assignment Score MidTerm Score Final Exam Score" <<endl;
    printf("%4.2f %4.2f %4.2f %4.2f\n", quiz_score, assignment_score, midterm_score, final_exam_score);
    //cout << quiz_score<<" "<<assignment_score<<" "<<midterm_score<<" "<<final_exam_score <<endl;
    //cout << "Your class score percentage is: "<<quiz_score+assignment_score+midterm_score+final_exam_score<<endl;
    
    float total_score = quiz_score+assignment_score+midterm_score+final_exam_score;
    printf("Your class score percentage is: %4.2f%% \n", total_score);
        
    system("pause");
    return 0;
}

    
