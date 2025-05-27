#include "FileManager.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void FileManager::saveCharacter(const Character& character, const std::string& filename) {
    std::ofstream file(filename);
    if (!file) return;
    file << character.getName() << std::endl;
    file << character.getClass() << std::endl;
    file << character.getLevel() << std::endl;
    file << character.getAge() << std::endl;
    file << character.getGender() << std::endl;
    file << character.getRace() << std::endl;
    file << character.getAlignment() << std::endl;
    file << character.getBackground() << std::endl;

    // Ekwipunek
    const auto& equipment = character.getEquipment();
    file << equipment.size() << std::endl;
    for (const auto& item : equipment)
        file << item << std::endl;

    // Umiejętności
    const auto& skills = character.getSkills();
    file << skills.size() << std::endl;
    for (const auto& skill : skills)
        file << skill << std::endl;
}

Character FileManager::loadCharacter(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) return Character();
    Character character;
    std::string line;

    auto safeGetLine = [&](std::string& out) -> bool {
        if (!std::getline(file, out)) {
            out.clear();
            return false;
        }
        return true;
    };

    if (!safeGetLine(line)) return Character(); character.setName(line);
    if (!safeGetLine(line)) return Character(); character.setClass(line);
    if (!safeGetLine(line)) return Character();
    try { character.setLevel(std::stoi(line)); } catch (...) { character.setLevel(1); }
    if (!safeGetLine(line)) return Character();
    try { character.setAge(std::stoi(line)); } catch (...) { character.setAge(0); }
    if (!safeGetLine(line)) return Character(); character.setGender(line);
    if (!safeGetLine(line)) return Character(); character.setRace(line);
    if (!safeGetLine(line)) return Character(); character.setAlignment(line);
    if (!safeGetLine(line)) return Character(); character.setBackground(line);

    // Ekwipunek
    if (!safeGetLine(line)) return Character();
    int equipmentCount = 0;
    try { equipmentCount = std::stoi(line); } catch (...) { equipmentCount = 0; }
    std::vector<std::string> equipment;
    for (int i = 0; i < equipmentCount; ++i) {
        if (!safeGetLine(line)) break;
        equipment.push_back(line);
    }
    character.setEquipment(equipment);

    // Umiejętności
    if (!safeGetLine(line)) return Character();
    int skillsCount = 0;
    try { skillsCount = std::stoi(line); } catch (...) { skillsCount = 0; }
    for (int i = 0; i < skillsCount; ++i) {
        if (!safeGetLine(line)) break;
        character.addSkill(line);
    }
    return character;
}
