//we are making the array of two dimensions 
//these array will shows us the marks of each of three students for all five subjects
#include<stdio.h>
int main()
{
    int n_student = 3;
    int n_subject = 5;

    //here we have created the two variables which shows the number of students and number of subjects.

     int marks[3][5];// these is the multidimentional array where we are storing the the 
                     //number of student in [3] and the marks in [5]

// now for entering the marks of student we want a loop which will run from student 1 to student 3
//and aslo that loop will have to run 5 times for each student to enter the marks of five subject each 

//so we design a loop from 1 to 3 and also add anather loop in it two run from 1 to 5 for every student 

    for(int i = 0; i < n_student ; i++)//these loop will run for 0 to 2 that mence 3 times 
    {
        for(int j = 0 ; j < n_subject ; j++)//these loop will run for 5 times for every student 
        {
            printf("enter the marks of student %d for the subject %d :",i+1,j+1);
            //these statment will get input for every subjects marks for each student 
            scanf("%d",&marks[i][j]);
            printf("\n");
            //these scanf statment will stores the value we enterd to the multidimentional array
            //which we have already defind above
        }
    }

    //now we will print the marks which we have enterd above  

    for(int i = 0; i < n_student ; i++ )
    {
        for(int j = 0; j < n_subject ; j++)
        {
            printf("the marks of student %d for subject num %d is : %d\n\n",i+1,j+1,marks[i][j]);
        }
    }
}