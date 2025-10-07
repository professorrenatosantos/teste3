#include <iostream>
#include <limits>

int readIntInRange(int lo, int hi, const char* prompt) {
    while (true) {
        std::cout << prompt;
        int x;
        if (std::cin >> x && x >= lo && x <= hi) return x;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Enter a number in [" << lo << "," << hi << "].\n";
    }
}

void print_menu() {
    std::cout << "\n===========================\n"
              << "       Mini Game Menu      \n"
              << "===========================\n"
              << " 1) Game 1\n"
              << " 2) Game 2\n"
              << " 3) Game 3\n"
              << " 0) Exit\n";
}

int main() {
    while (true) {
        print_menu();
        int opt = readIntInRange(0, 3, "Select option: ");
        if (opt == 0) {
            std::cout << "Exiting... seu cepo!!!!!\n";
            break;
        }
        std::cout << "You selected option " << opt << " (not implemented).\n";
    }
    return 0;
}
