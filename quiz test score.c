#include<stdio.h>

int main() {
    // This code is for the scores of the quizzes
    int quiz1, quiz2, quiz3, sum_of_quizzes;

    quiz1 = 90;
    quiz2 = 75;
    quiz3 = 91;

    sum_of_quizzes = quiz1 + quiz2 + quiz3;

    printf("The total score of quizzes is: %d\n", sum_of_quizzes);

       // This code is for the midterm 
       int midterm;
       midterm = 80;
       printf("The score of the midterm is: %d\n", midterm);

       // This code is for the final exam score
       int final_exam;
       final_exam = 89;
       printf("The score of the final exam is:%d\n", final_exam);

       // This code is for the total score of quizzrs, midterm and final exam combined
       int total_score;
       total_score = sum_of_quizzes + midterm + final_exam;
       printf("The total score of quizzes, midterm, and final exam is :%d\n", total_score);

    return 0;
}
