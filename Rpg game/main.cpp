#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}
void dungeon1(int battle)
{

}

int main()
{
    srand(time(NULL));
    //other int
    int creatures = 0, risist = 0, youArray[5];
    //profile int
    int maxHealth = 100, coins = 55000, gems = 0, health = 100;
    //profile int 2
    int level = 1, exp = 0, maxExp = level * 1500, attack = 1, defence = 1;
    //item int
    int woodenLog = 0, normieFish = 0, epicLog = 0, goldenFish = 0, lifePotions = 5;
    //generator int
    int maxWork = 10, generator = 0, minWork = 0, min1 = 1, max1 = 3, gemMax = 3, gemMin = 0, moveMax = 5, moveMin = 0;
    //bools
    bool wrongAnswer = true, win = false, random = false;
    //strings
    string commands = "", answers = "", moves = "", countinue = "";
    do
    {
        cin >> commands;
        if(commands == "hunt")
        {
            creatures = rand() % (max1 - min1 + 1) + min1;
            if(creatures == 1)
            {
                risist = defence * 2;
                if(defence < 20)
                {
                    health -= 40 - risist;
                }
                if(exp > maxExp)
                {
                    cout << "You leveled up! Health +5, At +1, Def +1" << endl;
                    maxHealth += 5;
                    attack += 1;
                    defence += 1;
                    maxExp += 500;
                    exp = 0;
                    level += 1;
                }
                if(health < 1)
                {
                    cout << "0" << "/" << maxHealth << endl;
                    cout << "You died";
                    if(level > 1)
                    {
                        cout << ", lost all your exp, and lost a level. :("<< endl;
                        level -= 1;
                        exp = 0;
                        maxExp -= 500;
                        attack -= 1;
                        defence -= 1;
                        maxHealth -= 5;
                        health = maxHealth;
                    }
                    else
                    {
                        cout << ", and you lost all your exp. :(" << endl;
                        exp = 0;
                        health = maxHealth;
                    }
                }
                else
                {
                    cout << "You found and defeated a wolf!" << endl;
                    generator = rand() % (gemMax - gemMin + 1) + gemMin;
                    if(generator == 1)
                    {
                        cout << "You gained 40 exp, got 25 coins, and got a gem!" << endl;
                        gems += 1;
                    }
                    else if(generator == 2)
                    {
                        cout << "You gained 40 exp, got 25 coins, and got 2 gems!" << endl;
                        gems += 2;
                    }
                    else
                    {
                        cout << "You gained 40 exp and got 25 coins!" << endl;
                    }
                    exp += 40;
                    coins += 25;
                    cout << health << "/" << maxHealth << endl;
                }

            }
            else if(creatures == 2)
            {
                risist = defence * 2;
                if(defence < 18)
                {
                    health -= 35 - risist;
                }
                if(exp > maxExp)
                {
                    cout << "You leveled up! Health +5, At +1, Def +1" << endl;
                    maxHealth += 5;
                    attack += 1;
                    defence += 1;
                    maxExp += 500;
                    exp = 0;
                    level += 1;
                }
                 if(health < 1)
                {
                    cout << "0" << "/" << maxHealth << endl;
                    cout << "You died";
                    if(level > 1)
                    {
                        cout << ", lost all your exp, and lost a level. :("<< endl;
                        level -= 1;
                        exp = 0;
                        maxExp -= 500;
                        attack -= 1;
                        defence -= 1;
                        maxHealth -= 5;
                        health = maxHealth;
                    }
                    else
                    {
                        cout << ", and you lost all your exp. :(" << endl;
                        exp = 0;
                        health = maxHealth;
                    }
                }
                else
                {
                    cout << "You found and defeated a goblin!" << endl;
                    cout << "You gained 35 exp and got 20  coins" << endl;
                    exp += 35;
                    coins += 20;
                    cout << health << "/" << maxHealth << endl;
                }

            }
            else
            {
                risist = defence * 2;
                if(defence < 15)
                {
                    health -= 30 - risist;
                }
                if(exp > maxExp)
                {
                    cout << "You leveled up! Health +5, At +1, Def +1" << endl;
                    maxHealth += 5;
                    attack += 1;
                    defence += 1;
                    maxExp += 500;
                    exp = 0;
                    level += 1;
                }
                if(health < 1)
                {
                    cout << "0" << "/" << maxHealth << endl;
                    cout << "You died";
                    if(level > 1)
                    {
                        cout << ", lost all your exp, and lost a level. :("<< endl;
                        level -= 1;
                        exp = 0;
                        maxExp -= 500;
                        attack -= 1;
                        defence -= 1;
                        maxHealth -= 5;
                        health = maxHealth;
                    }
                    else
                    {
                        cout << ", and you lost all your exp. :(" << endl;
                        exp = 0;
                        health = maxHealth;
                    }
                }
                else
                {
                    cout << "You found and defeated a slime!" << endl;
                    cout << "You gained 30 exp and got 15 coins!" << endl;
                    exp += 40;
                    coins += 15;
                    cout << health << "/" << maxHealth << endl;
                }

            }
        }
        else if(commands == "chop")
        {
            generator = rand() % (maxWork - minWork + 1) + minWork;
            if(generator > 4)
            {
                cout << "You got 2 wooden logs." << endl;
                woodenLog += 2;
            }
            else if(generator == 1)
            {
                cout << "You got an EPIC log!" << endl;
                epicLog += 1;
            }
            else
            {
                cout << "You got 3 wooden log." << endl;
                woodenLog += 3;
            }
        }
        else if(commands == "fish")
        {
            generator = rand() % (maxWork - minWork + 1) + minWork;
            if(generator > 4)
            {
                cout << "You got 2 normie fish." << endl;
                normieFish += 2;
            }
            else if(generator == 1)
            {
                cout << "You got an golden fish!" << endl;
                goldenFish += 1;
            }
            else
            {
                cout << "You got 3 normie fish." << endl;
                normieFish += 3;
            }
        }
        else if(commands == "heal")
        {
            if(lifePotions > 0)
            {
                if(health != maxHealth)
                {
                    cout << "You got healed." << endl;
                    health = maxHealth;
                    lifePotions -= 1;
                }
                else
                {
                    cout << "Your health is already maxed out!" << endl;
                }
            }
            else
            {
                cout << "You have no life potions, buy some in the shop by typing 'shop'" << endl;
            }
        }
        else if(commands == "inventory" || commands == "i")
        {
            if(woodenLog > 0)
            {
                cout << "Wooden logs: " << woodenLog << endl;
                random = true;
            }
            if(epicLog > 0)
            {
                cout << "EPIC logs: " << epicLog << endl;
                random = true;
            }
            if(normieFish > 0)
            {
                cout << "normie fish: " << normieFish << endl;
                random = true;
            }
            if(goldenFish > 0)
            {
                cout << "golden fish: " << goldenFish << endl;
                random = true;
            }
            if(lifePotions > 0)
            {
                cout << "life potions: " << lifePotions << endl;
                random = true;
            }
            if(random == false)
            {
                cout << "There is nothing in your inventory" << endl;
            }
            random = false;
        }
        else if(commands == "profile" || commands == "p")
        {
            cout << "level: " << level << endl;
            cout << "exp: " << exp << "/" << maxExp << endl;
            cout << "health: " << health << "/" << maxHealth << endl;
            cout << "At: " << attack << endl;
            cout << "Def: " << defence << endl;
            cout << "coins: " << coins << endl;
            cout << "gems: " << gems << endl;
        }
        else if(commands == "shop")
        {
            coins -= 10;
            lifePotions += 1;
        }
        else if(commands == "exp")
        {
            exp += 1500;
        }
        else if(commands == "gemshop")
        {
            cout << "At upgrade = 30 gems" << endl;
            cout << "Def upgrade = 40 gems" << endl;
        }
        else if(commands == "buy-def-upgrade")
        {
            defence += 1;
            gems -= 4;
        }
        else if(commands ==  "dungeon")
        {
            clearScreen();
            int goblins[10], goblinKing = 500, place = 3, forword = 0, battleField[7][5];
            string goblinSymbol = "  | : ";
            for(int i = 0; i < 10; i++)
            {
                goblins[i] = 100;
            }
            cout << "The King Of the Spears comes out of his cave with 10 of his goblin minions." << endl;
            cout << "He commands 5 goblins to hold you back." << endl;
            cout << "Type anything to countinue" << endl;
            cin  >> countinue;
            clearScreen();
            cout << "The 5 goblins charge at you, what do you do?" << endl;
            cout << " " << endl;
            do
            {
                string goblinsFront = "", goblinsBack = "", you = "";
                cout << "(| = goblin, (||) = king of spears, () = you)" << endl;
                for(int i = 1; i < 6; i++)
                {
                    youArray[i] = i;
                    if(youArray[i] == place)
                    {
                        cout << "() : " << health;
                        break;
                    }
                    else
                    {
                        cout << "           ";
                    }
                }
                for(int i = 0; i < 5; i++)
                {
                    goblinsFront += goblinSymbol + to_string(goblins[i]);
                    goblinsBack += goblinSymbol + to_string(goblins[i + 5]);
                }

                cout << endl << goblinsFront << endl << endl << endl;
                cout << goblinsBack << endl << endl;
                cout << "                     (||) : "  << goblinKing << endl;
                //moves
                cout << "bite(30 damage, 100%, very close range(1 blocks far))" << endl;
                cout << "sword(70 damage, 80%, very close range)" << endl;
                cout << "spear (50 damage, 80%, far range(5 blocks far))" << endl;
                cout << "ground(30 damage, 50%, medium range(3 blocks far), small area attack(4 enemies))" << endl;
                cout << "move left(you move left(obviously), 100%, [lol])" << endl;
                cout << "move right(make sure you don't crash into a wall)" << endl;
                cout << "move forword(if you move into a goblin that's alive you'll take EXTRA damage)" << endl;
                risist = defence * 2;
                cin >> moves;
                //the move you do
                if(moves == "bite")
                {
                    goblins[place - 1] -= 30;
                }
                else if(moves == "sword")
                {
                    generator = rand() % (moveMax - moveMin + 1) + moveMin;
                    if(generator == 5)
                    {
                        cout << "You missed, type anything to countinue" << endl;
                        cin >> countinue;
                    }
                    else
                    {
                        if(forword == 0)
                        {
                            goblins[place - 1] -= 70;
                        }
                         else if(forword == 3)
                        {
                            goblins[place - 1 + 5] -= 70;
                        }
                    }
                }
                else if(moves == "spear")
                {
                    generator = rand() % (moveMax - moveMin + 1) + moveMin;
                    if(generator == 5)
                    {
                        cout << "You missed, type anything to countinue" << endl;
                        cin >> countinue;
                    }
                    else
                    {
                        goblins[place + 5 - 1 + forword] -= 50;
                    }
                }
                else if(moves == "moveLeft")
                {
                    if(place != 1)
                    {
                       place -= 1;
                    }
                    else
                    {
                        cout << "You hit a wall." << endl;
                    }

                }
                else if(moves == "moveRight")
                {
                    if(place != 5)
                    {
                       place += 1;
                    }
                    else
                    {
                        cout << "You hit a wall." << endl;
                    }
                }
                else if(moves == "moveForword")
                {
                    if(goblins[place - 1] < 1)
                    {
                       forword += 1;
                    }
                    else
                    {
                        cout << "You smacked your head into a live goblin and took 10 hp." << endl;
                        health -= 10;
                    }
                }
                else if(moves == "bossKills" && forword == 5)
                {
                    goblinKing -= 100;
                }
                health -= 50 - risist;
                cout << forword << endl;
                cin >> countinue;
                clearScreen();
            }

            while(goblinKing > 0);

        }
        else if(commands == "craft-wooden-sword")
        {
            woodenLog -= 15;
            epicLog -= 1;
            defence += 5;
        }
    }while(win == false);
    return 0;
}
