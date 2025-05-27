#pragma once
#include "Character.h"
#include <string>

class FileManager {
public:
    void saveCharacter(const Character& character, const std::string& filename);
    Character loadCharacter(const std::string& filename);
};