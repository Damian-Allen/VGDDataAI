#include <stdio.h>
#include "Player.h"

Player::Player(string name) {
    m_Name = name;
    m_CurrentLocation = 0;
}

void Player::SetLocation(Location* location) {
    m_CurrentLocation = location;
    cout << endl << m_Name << " walks to " << location->GetName() << endl;
}

Location* Player::GetLocation() {
    return m_CurrentLocation;
}
