#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Define the NFA transition function
bool transition(char state, char input) {
    switch (state) {
        case 'A':
            return input == 'a' ? true : false;
        case 'B':
            return input == 'b' ? true : false;
        default:
            return false;
    }
}

// NFA recognition function
bool recognizeNFA(char* input) {
    // Initial state
    char currentState = 'A';
    
    // Iterate through the input string
    for (int i = 0; i < strlen(input); i++) {
        if (transition(currentState, input[i])) {
            // Move to the next state
            currentState = 'B';
        }
    }

    // Check if the final state is reached
    return currentState == 'B';
}

int main() {
    char input[100];
    
    // Get input string from the user
    printf("Enter a string: ");
    scanf("%s", input);
    
    // Check if the input string is recognized by the NFA
    if (recognizeNFA(input)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }

    return 0;
}
