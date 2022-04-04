//#include "BasicDemo.h"
//#include "CollisionFilteringDemo.h"
#include "SoftBodyDemo.h"
#include "FreeGLUTCallbacks.h"

int main(int argc, char** argv) {
    //BasicDemo demo;
    //CollisionFilteringDemo demo;
    SoftBodyDemo demo;
    return glutmain(argc, argv, 800, 600, "bullet and opengl", &demo);
}