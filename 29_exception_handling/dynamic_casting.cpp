#include <iostream>

// Abstract class
class Weapon {
public:
    virtual void use() = 0; // Abstract function
};

class Gun : public Weapon {
public:
    void use() override {
        std::cout << "BANG!" << std::endl;
    }
};

class MachineGun : public Gun {
public:
    MachineGun() : magazine(20) {

    }
    void use() override {
        while (magazine--) {
            std::cout << "BANG ";
        }
        std::cout << '\n';
        magazine = 20; 
    }
private:
    int magazine;
};

class Bazooka : public Gun {
public:
    void use() override {
        std::cout << "BOOOOOM!" << std::endl;
    }
};

class Knife : public Weapon {
public:
    Knife(bool is_stainless = false) : is_stainless(is_stainless) {

    }
    void use() override {
        std::cout << "SLASH!" << std::endl;
    }
    bool getIsStainless() {
        return is_stainless;
    }

private:
    bool is_stainless;
};

class Player {
public:
    void useWeapon(Weapon& weapon) {
        // Dynamic casting
        Knife* knife = dynamic_cast<Knife*>(&weapon); // Casting the parent address to child pointer

        if (!knife) {
            std::cout << "Not a knife\n";
        }
        else { // This is a knife
            if (knife->getIsStainless()) {
                std::cout << "Stainless knife. Can use it!\n";
                knife->use();
            }
            else {
                std::cout << "Non-stainless knife. Cannot use it!\n";
            }
        }
    }
};

int main(void) {
    Gun gun;
    MachineGun mg;

    mg.use();

    std::cout << "Array\n";
    // Create an array of guns
    Gun* guns[2] = {&gun, &mg};
    
    for (int i = 0; i < 2; i++) {
        guns[i]->use();
    }
    
    std::cout << "Player\n";
    Bazooka bazooka;
    Knife knife(true);
    Player simple;
    simple.useWeapon(gun);
    simple.useWeapon(mg);
    simple.useWeapon(bazooka);
    simple.useWeapon(knife);

    return 0;
}