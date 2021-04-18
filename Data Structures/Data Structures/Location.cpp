#include "Location.h"

Location::Location(string name, string description) {
    m_Name = name;
    m_Description = description;
}

void Location::DisplayLocation() {
    cout << endl << m_Name << endl;
    cout << "----------------------------------" << endl;
    cout << m_Description << endl << endl;
    cout << "You see the following exits:" << endl;
    for (int i = 0; i < m_Exits.size(); i++) {
        cout << i+1 << ". " << m_Exits[i]->m_Name << endl;
    }
}

void Location::AddExit(Location* location) {
    m_Exits.push_back(location);
}

vector<Location*> Location::GetExits() {
    return m_Exits;
}

string Location::GetName() {
    return m_Name;
}
