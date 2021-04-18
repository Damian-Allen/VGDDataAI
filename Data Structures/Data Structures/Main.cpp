#include <iostream>
#include "Location.h"
#include "Player.h"

using std::cout;
using std::endl;
using std::cin;
using std::numeric_limits;
using std::streamsize;

int main(int argc, const char* argv[]) {
    bool quit = false;
    int answer;
    Location* loc1 = new Location("Town Square", "A simple town square, nothing remakable to note.");
    Location* loc2 = new Location("Merchant", "The Merchants shop looks like clean and well kept.");
    Location* loc3 = new Location("Wizard's Guild", "This Wizard's guild seems open to share their magic with you.");
    Location* loc4 = new Location("Priest's Temple", "This Priest's temple gives off an air of secrecy \nand reluctance to share their knowledge with you.");
    Location* loc5 = new Location("???", "You looked too far into the Priests' dealings. \nYou have been silenced by the Priests.");
    Location* temploc;

    loc1->AddExit(loc2);
    loc1->AddExit(loc3);
    loc1->AddExit(loc4);

    loc2->AddExit(loc1);
    loc3->AddExit(loc1);
    loc4->AddExit(loc1);
    loc4->AddExit(loc5);

    Player* player = new Player;
    player->SetLocation(loc1);

    do {
        temploc = player->GetLocation();
        if (temploc == loc1) {
            player->GetLocation()->DisplayLocation();

            cout << endl << "Where would you like to go? ";

            while (!(cin >> answer)) {
                cout << "Bad value! Try again " << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max());
            }
            cout << endl;
            if (answer > player->GetLocation()->GetExits().size()) {
                cout << "Bad value! Try again " << endl;
                continue;
            } else if (answer < 0) {
                cout << "Bad value! Try again " << endl;
                continue;
            } else {
                player->SetLocation(player->GetLocation()->GetExits()[answer - 1]);
            }   
        }
        if (temploc == loc2) {
            player->GetLocation()->DisplayLocation();

            cout << endl << "Where would you like to go? ";

            while (!(cin >> answer)) {
                cout << "Bad value! Try again " << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max());
            }
            cout << endl;
            if (answer > player->GetLocation()->GetExits().size()) {
                cout << "Bad value! Try again " << endl;
                continue;
            } else if (answer < 0) {
                cout << "Bad value! Try again " << endl;
                continue;
            } else {
                player->SetLocation(player->GetLocation()->GetExits()[answer - 1]);
            }
        }
        if (temploc == loc3) {
            player->GetLocation()->DisplayLocation();

            cout << endl << "Where would you like to go? ";

            while (!(cin >> answer)) {
                cout << "Bad value! Try again " << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max());
            }
            cout << endl;
            if (answer > player->GetLocation()->GetExits().size()) {
                cout << "Bad value! Try again " << endl;
                continue;
            } else if (answer < 0) {
                cout << "Bad value! Try again " << endl;
                continue;
            } else {
                player->SetLocation(player->GetLocation()->GetExits()[answer - 1]);
            }
        }
        if (temploc == loc4) {
            player->GetLocation()->DisplayLocation();

            cout << endl << "Where would you like to go? ";

            while (!(cin >> answer)) {
                cout << "Bad value! Try again " << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max());
            }
            cout << endl;
            if (answer > player->GetLocation()->GetExits().size()) {
                cout << "Bad value! Try again " << endl;
                continue;
            } else if (answer < 0) {
                cout << "Bad value! Try again " << endl;
                continue;
            } else {
                player->SetLocation(player->GetLocation()->GetExits()[answer - 1]);
            }
        }
        if (temploc == loc5) {
            player->GetLocation()->DisplayLocation();
        }

        



        /*if (!quit) {
            cout << "Would you like to quit?" << endl << "1. yes" << endl << "2. no" << endl;
            while (!(cin >> answer)) {
                cout << "Bad value! Try again " << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max());
            }
            cout << endl;
            if (answer == 1) {
                quit = true;
            } else if (answer != 1 && answer != 2) {
                cout << "Thats not an option guess you're staying." << endl;
            }

        }*/
    } while (!quit);




    delete loc1;
    delete loc2;
    delete loc3;
    delete loc4;
    delete loc5;
    delete player;

    return 0;
}






// Inventory

// Interactable
// Item
// NPC
// Monster


// Wizard's Guild
// Priest's Guild
// Merchant
