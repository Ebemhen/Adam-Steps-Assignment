#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stepString[1000];
int number_of_inputs;
int number_of_steps;

int main() {
    //opening file
    FILE *adam_in = fopen("C:\\Users\\Chris Odeh\\Desktop\\DATA SCIENCE\\d\\Adamprogram\\adamin.txt", "r");

    //condition for an empty file: The user is
    if (adam_in == NULL) {
        printf("The file is empty");
        exit(0);
    }

    //reading the number of inputs from the first line.
    fscanf (adam_in,"%d",&number_of_inputs);

    //using loop to access the steps for each line
    for(int i = 0; i< number_of_inputs; i++) {
        fscanf(adam_in,"%s", stepString);

        //getting the length of the string
        int length = strlen(stepString);

        //initializing count variable to store the number of steps adam takes before he falls
        int count = 0;

        //counting the number of steps taken by Adam before he fall
        for (int l=0; l<length; l++) {
            if (stepString [l] == 'u') {
                count++;
            }
            else {
                break;
            }
        }

        //printing the output
        printf("%d \n",count);
    }
    return 0;
}





