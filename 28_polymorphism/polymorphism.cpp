#include <iostream>

// Abstract class
class Weapon{
public:
    virtual void use() = 0; // Abstract function(method)
};

class Gun : public Weapon{
public:
    void use() override {
        std::cout << "BANG!" << std::endl;
    }
};

class MachingGun : public Gun{
public:
    MachingGun() : magazine(20){

    }

    void use(){
        while(magazine--){
            std::cout << "BANG!";
        }
        std::cout << "\n";
        magazine = 20;
    }
private:
    int magazine;
};

class Knife : public Weapon{
public:
    void use(){
        std::cout << "Stabby Stabby" << std::endl;
    }
};

class Player{
public:
    void use(Weapon& weapon){
        weapon.use();
    }
};

class Bazooka : public Gun{
public:
    void use(){
        std::cout << "BOOOM!" << std::endl;
    }
};

int main(void){
    Gun gun;
    MachingGun mg;

    mg.use();

    std::cout << "Array\n";
    Gun* guns[2] = {&gun, &mg};

    for(int i = 0; i < 2; i++){
        guns[i]->use();
    }

    std::cout << "Player\n";
    Player player;
    Bazooka Bazooka;
    Knife knife;
    player.use(gun);
    player.use(mg);
    player.use(Bazooka);
    player.use(knife);

    return 0;
}