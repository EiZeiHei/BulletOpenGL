#include "BasicDemo.h"
#include "FreeGLUTCallbacks.h"

int main(int argc, char** argv) {
    BasicDemo demo;
    return glutmain(argc, argv, 800, 600, "bullet and opengl", &demo);
}