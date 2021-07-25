//
// Created by anselme on 2021-07-24.
//

Commands handleCommand(char *argv[]) {
    string command = argv[1];

    if (command == "--new") return NEW_TODO;
    else if (command == "--ll") return SHOW_ALL;
    else return SHOW_HELP;
}