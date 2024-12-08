#include <stdio.h>
#include <stdlib.h>
#define GRADE_SIZE 4
#define STUDENT_SIZE 4

//Function Prototypes
float findMeanValue(int grades[GRADE_SIZE][GRADE_SIZE], int gradeSize, int pi);
void printGreatestMean(float mean[GRADE_SIZE], char names[STUDENT_SIZE][20]);

int main(int argc, char *argv[]){
    char name[4][20];
    int grades[GRADE_SIZE][GRADE_SIZE];
    float mean[4];


    for (int i = 0; i < STUDENT_SIZE; i++){

        printf("Give student's name: ");
        scanf(" %s", &name[i]);
        printf("Give student's grades: ");

        for (int j = 0; j < 4; j++){
            
            do{
                scanf(" %d", &grades[i][j]);
                if (grades[i][j] < 0 || grades[i][j] > 10)
                    printf("Give a valid grade\n");
            } while (grades[i][j] < 0 || grades[i][j] > 10);
        }

        mean[i] = findMeanValue(grades, GRADE_SIZE, i);
        //printf("Mesos oros: %f", mean[i]);
        
    }

    printGreatestMean(mean, name);

    return 0;
}

float findMeanValue(int grades[GRADE_SIZE][GRADE_SIZE], int gradeSize, int pi){
    float mo;
    int sum = 0;

    for (int j = 0; j < gradeSize; j++){
        sum += grades[pi][j];
    }
    
    mo = sum/4.0;

    return mo;
}

void printGreatestMean(float mean[GRADE_SIZE], char names[STUDENT_SIZE][20]){
    char max_n[20];

    float max_g = mean[0];
    int pi = 0; 
    
    for (int i = 1; i < STUDENT_SIZE; i++){
        if (max_g < mean[i]){
            max_g = mean[i];
            pi = i;
            //printf("\nmean changed to %f\n", max_g);
        }   
    }

    printf("*****************************************************\n");
    printf("Student with greater mean: %s\nMean = %.1f", names[pi], max_g);
}
