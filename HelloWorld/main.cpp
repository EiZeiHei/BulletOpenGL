#include "HelloWorld.h"
#include "FreeGLUTCallbacks.h"

int main(int argc, char** argv) {
    HelloWorld demo;
    return glutmain(argc, argv, 800, 600, "BulletOpenGL", &demo);
}