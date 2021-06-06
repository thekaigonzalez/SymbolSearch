#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <dlfcn.h>

#define ENTRY 0x0021002

/**
 * @brief Runs a point in a program.
 * Usually used for debugging programs without a main entry point.
 * Shouldn't be used as a replacement for GCC.
 * Used for dynamically executing programs or debugging them.
 * 
 * @param libT 
 * @param __pt 
 */
void Run_Point(const char *libT, const char *__pt)
{
    typedef void (*command_t)();
    void *lib = dlopen(libT, RTLD_LAZY); //RTLD_LAZY=0x00001
    auto func = (command_t) dlsym(lib,__pt);
    func();
}