#include "app/header.h"

#include "functions/app-introduction.h"
#include "functions/print-help.h"
#include "functions/handle-command.h"
#include "functions/new-todo.h"
#include "functions/all-todos.h"

int main(int argc, char *argv[]) {
    // print application introduction ...

    const vector<string> args(argv+1,argv+argc);
    printAppIntroduction();

    if(argc > 1) {
        Commands request = handleCommand(args[0]);

        switch (request) {
            case NEW_TODO:
                newTodo(argv[1]);
                break;
            case SHOW_ALL:
                allTodos();
                break;
            default:
                printHelp();
        }
    }else {
        printHelp();
    }

    return 0;
}
