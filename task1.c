#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char feedback[200], updatedFeedback[300], temp[200];
    printf("Enter the feedback: ");
    fgets(feedback,200,stdin);
    int len = strlen(feedback);
    printf("Number of Characters: %d\n", len);

    char* goodPtr = strstr(feedback, "good");
    char* badPtr = strstr(feedback, "bad");

    bool good = false, bad = false;

    if (badPtr != NULL){
        bad = true;
    }
    if (goodPtr != NULL){
        good = true;
    }

    printf("Sentimental Feedback: %s\n", feedback);


    if (bad){
        strncpy(updatedFeedback, feedback, (badPtr - feedback));
        strcat(updatedFeedback, "not good");
        strcat(updatedFeedback, badPtr + 3);
    }
    

    printf("%s", updatedFeedback);

    return 0;
}
