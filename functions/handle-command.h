//
// Created by anselme on 2021-07-24.
//

Commands handleCommand(const string&  command) {
    cout << command << endl;
    if (command ==  "--new") {
        cout << "New todo ... ";
        return NEW_TODO;
    } else if (command == "--all") return SHOW_ALL;
    else return SHOW_HELP;
}