#include<iostream>


class Position
{
    public:
        int x = 10;
        int y = 20;

        Position operator + (Position pos)
        {
            Position newPos;
            newPos.x = x+pos.x;
            newPos.y = y+pos.y;
            return newPos;
        }
        bool operator == (Position pos)
        {
            if(x == pos.x && y == pos.y)
            {
                return true;
            }
            return false;
        }
};

int main(int argc, char const *argv[])
{
    Position pos1, pos2;
    Position pos3  = pos1 + pos2; 
    std::cout<<pos3.x<<" "<<pos3.y<<std::endl;

    if(pos1 == pos2)
    {
        std::cout<<"They are the same!\n";
    }
    return 0;
}
