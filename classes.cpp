
#include <iostream>

using namespace std;

class Player 
{
    int x, y;
    int speed;

    public:
    
    void Move(Player& player, int xa, int ya) 
    {   
        player.x += xa * player.speed;
        player.y += ya * player.speed;
    }
};



int main()
{
    Player player;
    player.Move(player, 1, -1);


    
}