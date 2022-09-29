#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();

    // game loop
    while (1) {
        int remaining_turns;
        cin >> remaining_turns; cin.ignore();

        string drn="";
        if(initial_tx==light_x){
            if(initial_ty<light_y)
                {drn="S";
                initial_ty +=1;}
            else if(initial_ty>light_y);
                {drn="N";
                initial_ty -=1;}
        }
        else if(initial_ty==light_y){
            if(initial_tx<light_x)
                {drn="E";
                initial_tx +=1;}
            else if(initial_tx>light_x)
                {drn="W";
                initial_tx -=1;}
        }
        else if(initial_tx<light_x && initial_ty<light_y)
            {drn="SE";
            initial_tx +=1;
            initial_ty +=1;}
        else if(initial_tx>light_x && initial_ty>light_y)
            {drn="NW";
            initial_tx -=1;
            initial_ty -=1;}
        else if(initial_tx<light_x && initial_ty>light_y)
            {drn="NE";
            initial_tx +=1;
            initial_ty -=1;}
        else if(initial_tx>light_x && initial_ty<light_y)
            {drn="SW";
            initial_tx -=1;
            initial_ty +=1;}


        cout << drn << endl;
    }
}

