#include <iostream>
using namespace std;


class Character
{

    public :
        string name;
        string clan;
        int health;
        int damage;
        int defense;

    public :
        Character(int cHealth=100, int cDamage=10, int cDefense=10, string cName="Default",string cClan="Default") 
        {
            this->health   = cHealth;
            this->name     = cName;
            this->clan     = cClan;
            this->defense  = cDefense;
            this->damage   = cDamage;
        }


    public :
        void attackedCharacter(int damage, string enmName)
        {
            this->health = this->health+this->defense-damage;
            cout<<this->name<<" Character has been attacked by "<<enmName<<"\n";

        }
        void getCharacterHealth()
        {
            cout<<this->name<<" from "<<this->clan<<" has "<<this->health<<" health \n";
        }
        int getDamage()
        {
            return this->damage;
        }
        string getName()
        {
            return this->name;
        }
        int getHealth()
        {
            return this->health;
        }
};




