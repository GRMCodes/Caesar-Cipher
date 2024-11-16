#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
using namespace std;

void caja() {

    cout << "\033[33m";





}

int main() {
    cout << "\033[91m";
    cout << " ==========================================================================================================\n";
    cout << " ||                                                 (&(                                                  ||     \n";
    cout << " ||                                           @@@@@@@@@@@@@@@@@                                          ||       \n";
    cout << " ||                                       @@@@@@@@@@@@@@@@@@@@@@@@@                                      ||       \n";
    cout << " ||                                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                    ||       \n";
    cout << " ||                                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                  ||       \n";
    cout << " ||                                  @@@@@@@@@@@@@@@@@@@@@@@@@@  @@@@@@@                                 ||       \n";
    cout << " ||                                .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   @                                ||       \n";
    cout << " ||                               @@@(     @@@@@@@@@@@@@@@@@@@@@@@@@@@@                                  ||       \n";
    cout << " ||                               @    @@@@@@@                 .@@@@@@@@@@@                              ||         \n";
    cout << " ||                              @ .@@@@*                            @@@@@@@                             ||         \n";
    cout << " ||                              &@@@                                   @@@@                             ||         \n";
    cout << " ||                             @@@                                       @@@                            ||         \n";
    cout << " ||                            @@@                                         @@@                           ||         \n";
    cout << " ||                            @@                                           @@                           ||         \n";
    cout << " ||                           @@                                             @@                          ||         \n";
    cout << " ||                           @@                C A E S A R                  &@                          ||         \n";
    cout << " ||                          @@                                               @@                         ||         \n";
    cout << " ||                          @@                                               @@                         ||         \n";
    cout << " ||                          @@                                              *@@                         ||         \n";
    cout << " ||                           @@                                             @@                          ||         \n";
    cout << " ||                       @@@@@@@                                           @@@@@@@                      ||         \n";
    cout << " ||                 %@@@@@@@@@@/@@                                        /@@ @@@@@@@@@@(                ||         \n";
    cout << " ||             @@@@@@@@@@@@@@@@@.@@@                                   @@@ @@@@@@@@@@@@@@@@@            ||         \n";
    cout << " ||          @@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@                  @@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@         ||         \n";
    cout << " ||       @@@@@@@@/@@@@@@@@@@@@@@@@@@@@@@@@ , @@@         @@@   @@@@@@@@/@@//(%@@@@@@@@@(@@@@@@@@        ||         \n";
    cout << " ||       ((@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ ,@@@@@@     @@%@@@  @@@@@@@@(/@(///(@@@@@@@@@@@@@@@@@@      ||         \n";
    cout << " ||      @@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@ ,@@@@@@@   @@@@@@@  @@@@@@@@@@@@@@@@@@@@@#@@@@@@@@@@@@@     ||         \n";
    cout << " ||     @@@@@@@@@@@@@@  @@@@@@@@@@@@@@@@@@@@ ,@@@@@@*@@@ @@@@@@  @@@@@@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@    ||         \n";
    cout << " ||    .@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@@@@@@ ,@@@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@@    ||         \n";
    cout << " ||    @@@@@@@@@@@@@@@@* #@@@@@@@@@@@@@@@@@@ ,@@@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@@@@   ||         \n";
    cout << " ||   @@@@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@@@@/  @@@@@@@@@@@@@@@@@  &@@@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@@@@&  ||     \n";
    cout << " ||   @@@@@@@@@@@@@@@@@@   @@@@@@@@@@@@@@@@*  @@@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@@@@   @@@@@@@@@@@@@@@@@@  ||     \n";
    cout << " ||  @@@@@@@@@@@@@@@@@@@   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   @@@@@@@@@@@@@@@@@@@ ||      \n";
    cout << " || @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  ||      \n";
    cout << " || @@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ ||      \n";
    cout << " || @@@@  %(  ##@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@. %@/ @ @@ @@@ ||       \n\n";
    cout << " =======================================================================================================     \n\n";

    char option;
    const int shift = 13;
    string user, pass, LogUser, LogPass;
    bool logged = false, Register = false;

    do {
        bool upper = false, lower = false, num = false, special = false;
        cout << "\033[96m";
        cout << "Portal: \n";
        cout << "(You must be a Caesar member to use our services) \n\n";
        cout << "1. Sign In\n";
        cout << "2. Login\n";
        cin >> option;

        switch (option) {
        case '1':
            cout << "Enter a username: ";
            cin >> user;
            cout << "Enter a password: ";
            cin >> pass;

            for (int i = 0; i < pass.size(); i++) {
                if (isupper(pass[i])) {
                    upper = true;
                }
                if (islower(pass[i])) {
                    lower = true;
                }
                if (isdigit(pass[i])) {
                    num = true;
                }
                if (ispunct(pass[i])) {
                    special = true;
                }
            }

            if (pass.size() > 8) {
                if (upper == true && lower == true && num == true && special == true) {
                    cout << "Strong password\n";
                }
            }
            else if (pass.size() >= 6 && upper == true && lower == true && num == true) {
                cout << "Moderate password\n";
            }
            else {
                cout << "Weak password\n";
            }

            cout << "User registered.\n";
            Register = true;
            break;

        case '2':
            if (Register) {
                cout << "Enter your username: ";
                cin >> LogUser;
                cout << "Enter your password: ";
                cin >> LogPass;

                if (user != LogUser || pass != LogPass) {
                    cout << "Incorrect username or password.\n";
                }
                else {
                    logged = true;
                }
            }
            else {
                cout << "Please sign in first.\n";
            }
            break;

        default:
            cout << "Invalid input, try again.\n";
        }
    } while (!logged);

    caja();

    char action;
    string message, encrypt = "";
    string decryption = "";
    char BigAlpha[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    char LowAlpha[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    system("cls");

    do {
        cout << "=================================\n";
        cout << "|| MAIN CAESAR MENU.           ||\n";
        cout << "|| Welcome to CAESAR           ||\n";
        cout << "|| Press 1 for ENCRYPTION      ||\n";
        cout << "|| Press 2 for DECRYPTION      ||\n";
        cout << "|| Press 3 to EXIT             ||\n";
        cout << "=================================\n";
        cin >> action;
        cin.ignore();     //esto es para evitar que me salga el default 'invalid input' aunque ponga las cosas bien

        switch (action) {

        case '1':
            system("cls");        //clears the screen
            cout << " =======================================================================================================\n";
            cout << " ||                                      E N C R Y P T I O N                                          ||\n";
            cout << " =======================================================================================================\n";
            cout << "Enter the message you wish to cipher: ";
            getline(cin, message);

            for (char c : message) {
                if (isupper(c)) {
                    int newPosition = ((c - 'A' + shift) % 26);
                    encrypt += BigAlpha[newPosition];
                }
                else if (islower(c)) {
                    int newPosition = ((c - 'a' + shift) % 26);
                    encrypt += LowAlpha[newPosition];
                }
                else {
                    encrypt += c;
                }
            }
            cout << "\nOriginal message: " << message << "\n";
            cout << "Encrypted message: " << encrypt << "\n\n";
            break;

        case '2':
            system("cls");
            cout << " =======================================================================================================\n";
            cout << " ||                                      D E C R Y P T I O N                                          ||\n";
            cout << " =======================================================================================================\n";
            cout << "Enter the message you wish to decipher: ";
            getline(cin, message);

            for (char c : message) {
                if (isupper(c)) {
                    int newPosition = ((c - 'A' - shift + 26) % 26);
                    decryption += BigAlpha[newPosition];
                }
                else if (islower(c)) {
                    int newPosition = ((c - 'a' - shift + 26) % 26);
                    decryption += LowAlpha[newPosition];
                }
                else {
                    decryption += c;
                }
            }

            cout << "\nEncrypted message: " << message << "\n";
            cout << "Decrypted message: " << decryption << "\n\n";
            break;

        case '3':
            system("cls");
            cout << " =======================================================================================================\n";
            cout << " ||                        Y O U  A R E  N O W  A  B L A C K  H O O D                                 ||\n";
            cout << " =======================================================================================================\n";
            cout << "Thanks for using and becoming a member of CAESAR. Good Bye!\n";
            break;

        default:
            cout << "Invalid Input. Please read carefully the options again\n";
            continue;
        }
    } while (action != '3');

    return 0;
}