#include <iostream>

class Character {
public:
    Character(int hp = 100) : hp(hp) {
        std::cout << "Character's constructor\n";
    }
public:
    int hp;
};

class Elf : virtual public Character {
public:
    Elf() {
        std::cout << "I am an Elf!\n";
    }
    void think() {
        std::cout << "Let's not fight!\n";
    }
};

class Warrior : virtual public Character {
public:
    Warrior() {
        std::cout << "I am a Warrior!\n";
    }
    void fight() {
        std::cout << "Slash!!!!\n";  
    }
};

class ElfWarrior : public Warrior, public Elf {

};

int main(void) {
    ElfWarrior buddy;

    buddy.fight();
    buddy.think();

    std::cout << buddy.hp;

    return 0;
}