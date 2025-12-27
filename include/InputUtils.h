#ifndef INPUTUTILS_H
#define INPUTUTILS_H

#include <string>

class InputUtils {
public:
    
    static int lireInt();
    static double lireDouble();

    
    static int lireInt(const std::string& message);
    static double lireDouble(const std::string& message);
};

#endif
