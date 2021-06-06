#include <iostream>
#include <fstream>
#include <dlfcn.h>
#include "./shell/interaction/parse.h"

bool symbol_file_init(const char*, const char*); /* implemented */
void run_diagnostic(const char *); /* implemented */
//USES CODE FROM https://github.com/thekaigonzalez/KTerminal/blob/master/knix/knix_terminal.cpp


int main(int argc, char** argv)
{
   std::string FS_FIRST = argv[1]; // First argument: filename
   std::string FS_NEXT = argv[2]; // Next argument: symbol
   if (symbol_file_init(FS_FIRST.c_str(), FS_NEXT.c_str()))
   {
       std::cout << "Yes" << std::endl;
   }
   else {
       std::cout << "No" << std::endl;
   }
}