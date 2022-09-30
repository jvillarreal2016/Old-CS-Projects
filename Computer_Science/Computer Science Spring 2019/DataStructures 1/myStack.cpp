#include <iostream>
#include <>

struct Vector3{

    (int x, int y, int z){
    }

    int x, y, z;

    Vector3(int x, int y, int z){
    this->x = x;
    this->y = y;
    this->z = z;
    }

};

Vector3 Difference

bool ZombieCanSee(Vector3 zombiePos, Vector3 zombieLookDir, Vector3 playerPos, float lookAngle, float viewDistance){

}

int main(){

    Vector3 *zombiePos = new Vector3(0,0,0);
    Vector3 *playerPos = new Vector3(-5,0,-5);
    Vector3 *zombieLookDir = new Vector3(0,0,1);

    if (ZombieCanSee(zombiePos, zombieLookDir, playerPos, lookAngle, viewDistance)){
        printf("Zombie saw player!!");
    }else{
        printf("Zombie cannot see player!!");
    }

    return 0;

}
