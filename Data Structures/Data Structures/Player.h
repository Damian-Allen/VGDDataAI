#pragma once
#include "Location.h"

class Player {
    enum Jobs { UNEMPLOYED, STUDENT, SKIPTHEDISHES };

    string m_Name;
    Jobs m_Job;
    int m_Health;
    int m_MaxHealth;
    int m_ExperiencePoints;
    int m_ExperienceLevel;

    //    Inventory * m_Inventory;
    //    Pet * m_Pet;

    Location* m_CurrentLocation;
public:
    Player(string name = "John Doe");
    void SetLocation(Location* location);
    Location* GetLocation();
};


// Player
// - name
// - class/job
// - health / max health
// - experience points / experience levels
// - inventory
// - pet
// - current position