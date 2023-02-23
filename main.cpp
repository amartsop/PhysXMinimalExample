#include <iostream>
#include <PxPhysicsAPI.h>

using namespace physx;

int main(void)
{
    physx::PxVec3 a = physx::PxVec3(1.0, 0.0, 0.0);
    physx::PxVec3 b = physx::PxVec3(0.0, 1.0, 0.0);
    physx::PxVec3 c = physx::PxVec3(0.0, 0.0, 1.0);
    physx::PxVec3 d = physx::PxVec3(0.0, 0.0, 0.0);
    physx::PxVec4 bar;

    physx::computeBarycentric(a, b, c, d, bar);

    std::cout << bar.x << std::endl;
    std::cout << bar.y << std::endl;
    std::cout << bar.z << std::endl;
}

