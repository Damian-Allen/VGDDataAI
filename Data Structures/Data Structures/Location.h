#pragma once
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;

// Location

// - may have NPC
// - may have monster / enemy

class Location {
private:
    string m_Name;
    string m_Description;

    //    vector<Interactable*> m_Interactables;
    //    vector<Items*> m_Items;
    //    vector<NPC*> m_NPCs;
    //    vector<Monster*> m_Monsters;
    vector<Location*> m_Exits;
public:
    Location(string name = "Empty Room",
        string description = "It's an empty room.");
    void DisplayLocation();
    void AddExit(Location* location);
    vector<Location*> GetExits();
    string GetName();
};