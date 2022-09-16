#include <iostream>
#include "Character.h"


int main()
{   

    Character characters[3];
    Character kont;
    Character Jouza(200,40,25,"Jouza","Uchiha");
    Character Joko(300,20,20,"Joko","Senju");
    kont.getCharacterHealth();


    Jouza.getCharacterHealth();
    Joko.getCharacterHealth();
    Jouza.attackedCharacter(Joko.getDamage(),Joko.getName()); 
    Joko.attackedCharacter(Jouza.getDamage(),Jouza.getName());
    Jouza.getCharacterHealth();
    Joko.getCharacterHealth();

    characters[0] = Character(400,10,5,"Obrien","Jackson");
    
    characters[1] = Character(400,10,5,"ien","Jackson");
    characters[2] = Character(400,10,5,"brien","Jackson");
    
    for(int i=0; i < 2; i++) {
        characters[i].getCharacterHealth();
    }
    return 0;
}
