#ifndef INPUT_UTILS_H
#define INPUT_UTILS_H

#include <string>

class InputUtils{
    public:
        static int lireInt(const std::string& message);
        static double lireDouble(const std::string& message);
        static void nettoyerCin();
};

#endif