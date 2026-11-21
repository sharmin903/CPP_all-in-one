/*18. Game Session (both, combined)
Class Player with name, score — constructor parameters share names with these members (use this->). Also add a static int totalPlayers, incremented in the constructor. Add a non-static display() (shows name/score) and a static getTotalPlayers().

Decide for each function/variable: does this belong to one object, or all of them?*/
#include <iostream>
#include <string>
using namespace std;
class Player
{
private:
    string Name;
    int Score;
    static int totalPlayers;

public:
    Player(string Name, int Score)
    {
        this->Name = Name;
        this->Score = Score;
        totalPlayers = totalPlayers + 1;
    }
    static int getTotalPlayers()
    {
        return totalPlayers;
    }
    void diplay()
    {
        cout << "Name of the player: " << Name << "\nScore of the player : " << Score << endl;
    }
};
int Player::totalPlayers = 0;
int main()
{
    Player p1("joy", 380);
    p1.diplay();
    Player p2("Shopon", 340);
    p2.diplay();
    Player p3("Bijoy", 280);
    p3.diplay();
    cout << "Total player: " << Player::getTotalPlayers() << endl;
    return 0;
}