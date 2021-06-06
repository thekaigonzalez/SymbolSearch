//Implements simple Object checking

#include <dlfcn.h>
/**
 * THIS FILE IS LICENSED UNDER THE MIT LICENSE
 * AS WELL AS OTHER PARTS OF THE SYMBOLSEARCH PROJECT!
 */
#include <string.h>
#include <iostream>

#ifndef __DATA__
#define __DATA__



/**
 * @brief Invokes a dynamic library search
 * 
 * @param V 
 * 
 * 
 */
bool symbol_file_init(const char* Fname, const char *__s)
{
     typedef void (*command_t)();
     void *lib = dlopen(Fname, RTLD_LAZY);
     if (dlsym(lib, __s) == NULL)
     {
         return false; // failed
     }
     else {
         return true; // succeeded
     }
}

void run_diagnostic(const char *Fname_BASE)
{   
    // same as assert, except you're running it on dynamic library files.
    if (symbol_file_init(Fname_BASE, "main"))
    {
        std::cout << "Program contains main function, Platform test succeeded." << std::endl;
    }
    
    if (symbol_file_init(Fname_BASE, "run"))
    {
        std::cout << "Program contains run function, Init run test succeeded." << std::endl;
    }

    std::cout << "Program contains 2 correct functions." << std::endl;
}


#endif // __DATA__