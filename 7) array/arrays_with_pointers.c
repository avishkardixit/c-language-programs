#include<stdio.h>
int main()
{
    int marks[4];//arreay of the marks of the four students 
    int *ptr;//here we initiated the pointer to exicute the address of array
    ptr = &marks[0];//here we have given a pointer the address of array

    for(int i = 0 ; i < 4; i++ )//here is the loop for the values of student
                                // which start at zero and end at 3 
    {
        printf("enter the marks of the  student %d : ",i+1);//here we have intiated our loop from '0' 
                                                            // hence we need to add 1 to it to get the 
                                                            //exact loop from 1 to 4 

        scanf("%d",ptr); //here we have given direct address of our array hence we have given ptr here 
       
        ptr++;// here when we put or first input then the pointer 'ptr' will get increamented and then
              // the next input that we will give is stored in that increamened address and these will
              //helps our programm to store the marks exactly at the correct position with refernce
              // to student                                                 
    }
     //now we have done with our inputs 

     // now let's we design a new loop for showing the marks of students

    for (int i = 0 ; i < 4 ; i++)//these loop will runs from 0 to 3 
    {
        printf("the marks of the student %d is %d \n\n",i+1,marks[i]);//now we have stored the mark of student 1 in marks[0]
                                                                  //because the array will starts from the 0 so our loop 
                                                                  // is now benificial to us when we want the mark of 
                                                                  //student 1st then it we easily gives us 
    }
}