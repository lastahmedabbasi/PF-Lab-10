#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char feedback[200], updatedFeedback[300] = {0}; 
    printf("Enter the feedback: ");
    fgets(feedback, sizeof(feedback), stdin);
    
    feedback[strcspn(feedback, "\n")] = '\0';

    int len = strlen(feedback);
    printf("Number of Characters: %d\n", len);

    char *goodPtr = strstr(feedback, "good");
    char *badPtr = strstr(feedback, "bad");

    bool good = (goodPtr != NULL);
    bool bad = (badPtr != NULL);

    printf("Sentimental Feedback: %s\n", feedback);

    if (bad){
        int prefixLen = badPtr - feedback;
        
        strncpy(updatedFeedback, feedback, prefixLen);
        updatedFeedback[prefixLen] = '\0'; 
        
        strcat(updatedFeedback, "not good");
        strcat(updatedFeedback, badPtr + 3);
        
        printf("Updated Feedback: %s\n", updatedFeedback);
    }
    else {
      printf("Feedback not changed.\n");
    }

    printf("Good was %s and Bad was %s.\n", good ? "found" : "not found", bad ? "found" : "not found");

    return 0;
}
