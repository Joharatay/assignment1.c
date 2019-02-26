#include <cs50.h>
#include <stdio.h>

   int TOTALPOINTSEARNED;
   int TOTALPOINTSPOSSIBLE;

int main(void){
    int assignments = get_int("How many different assignments?\n");//user provides the number of assignment 
    int pointsEarned[assignments];//makes an array for points earned
    int pointsPossible[assignments];//makes an array for point possible
    for(int n = 0; n < assignments;n++){
         pointsEarned[n] = get_int ("How many points did you earn on assignment?\n");//user enters the points earned on assignment
         pointsPossible[n] = get_int ("How many points was the assignment woth?\n");//user will input the points the assignment was worth
    TOTALPOINTSEARNED += pointsEarned[n];
    TOTALPOINTSPOSSIBLE += pointsPossible[n];}
    float finalgrade = ((float)TOTALPOINTSEARNED/(float)TOTALPOINTSPOSSIBLE)* 100;{//divides the points earned by the points possible
    printf("Overall Grade is:%f\n",finalgrade);//prints your overall grade will appear
    }
    return 0;
}
    

            
