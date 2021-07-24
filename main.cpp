#include <iostream>
using namespace std;

#include "functions/app-introduction.h"
#include "functions/print-help.h"

int main(int argc, char *argv[]) {
    system("clear");
    // print application introduction ...
    printAppIntroduction();

    printHelp();
    return 0;
}
