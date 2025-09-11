// command_injection.cpp
#include <cstdlib>

void commandInjectionExample() {
    char userInput[100];
    std::cout << "Enter filename to list: ";
    std::cin >> userInput;
    char command[200];
    sprintf(command, "ls %s", userInput);  // User could inject ; rm -rf /
    system(command);
}
