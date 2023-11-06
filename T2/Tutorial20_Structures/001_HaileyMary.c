#include<stdio.h>
#include<stdlib.h>

struct student{
    char *student_name;
    int student_age;
    float student_style;
    float birthday;
};

void main(){
    struct student Hailey;
    Hailey.student_name = "Hailey Jaranillia";
    Hailey.student_age = 19;
    Hailey.student_style = 8.5;

    printf("%s\n%d\n%.2f\n\n", Hailey.student_name, Hailey.student_age, Hailey.student_style);

    struct student Mary;
    Mary.student_name = "Mary Chevel Pastolero Modesto";
    Mary.student_age = 19;
    Mary.student_style = 7.5;
    Mary.birthday = 9.19;

    printf("%s\n%d\n%.2f\n\n", Mary.student_name, Mary.student_age, Mary.student_style);
}