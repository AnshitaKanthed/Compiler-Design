#include <stdio.h>

// DFA transition function
int transition(int state, char input) {
    switch (state) {
        case 0:
            return (input == '0') ? 1 : 0; // Transition from state 0 to 1 on input '0'
        case 1:
            return (input == '1') ? 2 : 0; // Transition from state 1 to 2 on input '1'
        case 2:
            return 2; // Stay in final state (state 2)
        default:
            return 0; // Invalid state
    }
}

// DFA recognizer function
int isAccepted(char *input) {
    int currentState = 0; // Start in the initial state (state 0)

    for (int i = 0; input[i] != '\0'; i++) {
        currentState = transition(currentState, input[i]); // Apply transitions based on input
    }

    return (currentState == 2); // Check if the final state is reached (state 2 is the final state)
}

int main() {
    char input[100];

    printf("Enter a string (0s and 1s only): ");
    scanf("%s", input);

    if (isAccepted(input)) {
        printf("Accepted\n"); // Print if the input string is accepted by the DFA
    } else {
        printf("Not Accepted\n"); // Print if the input string is not accepted by the DFA
    }

    return 0;
}
