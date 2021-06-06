#include <iostream>
#include <string>
#include <vector>
#include <fstream>

void Run_Point(const char *, const char *); /* implemented */


int main(int argc, char** argv)
{
    try {
        std::string Fname_BASE = argv[1];
        std::string Fname_NEW = argv[2];
        if (Fname_BASE == "-f") { 
            std::cout << "Opening file " << Fname_NEW << std::endl;
            if (std::ifstream(Fname_NEW))
            {
                std::cout << "Interactive Terminal" << std::endl;
                std::cout << "In file " << Fname_NEW << std::endl;
                std::cout << "You can type an entry point to run it.\nOr type .abort to exit.\nIf you run a entry that doesn't exist, it will throw a segmentation fault. Be careful!" << std::endl;
                while (true) {
                    std::cout << ">> ";
                    std::string epoint;
                    getline(std::cin, epoint);
                    Run_Point(Fname_NEW.c_str(), epoint.c_str());
                    
                }
            }
        }
        else if (Fname_BASE == "-vF")
        {

        }
    }
    //not the best way... but works!
    catch (const std::exception&)
    {
        std::cout << "1 or more arguments are invalid" << std::endl;
        std::cout << "\nUsage: bcc -f filename" << std::endl;
    }
    
}