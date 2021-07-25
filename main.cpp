#include <iostream>
using namespace std;

#include "app/header.h"

#include "functions/app-introduction.h"
#include "functions/print-help.h"
#include "functions/handle-command.h"
#include "functions/new-todo.h"
#include "functions/all-todos.h"

int main(int argc, char *argv[]) {
    system("clear");
    // print application introduction ...
    printAppIntroduction();

    Commands request = handleCommand(argv);

    switch (request) {
        case NEW_TODO:
            newTodo(argv[3]);
            break;
        case SHOW_ALL:
            allTodos();
            break;
        default:
            printHelp();
            break;
    }


    printHelp();
    return 0;
}
