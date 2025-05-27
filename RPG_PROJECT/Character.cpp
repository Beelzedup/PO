#include "Character.h"
#include <algorithm>

Character::Character()
    : name(""), characterClass(""), level(1), age(0), gender(""), race(""),
    alignment(""), background(""), equipment({}), skills({}) {}

void Character::setName(const std::string& name) { this->name = name; }
std::string Character::getName() const { return name; }

void Character::setClass(const std::string& characterClass) { this->characterClass = characterClass; }
std::string Character::getClass() const { return characterClass; }

void Character::setLevel(int level) { if (level > 0) this->level = level; }
int Character::getLevel() const { return level; }

void Character::setAge(int age) { if (age >= 0) this->age = age; }
int Character::getAge() const { return age; }

void Character::setGender(const std::string& gender) { this->gender = gender; }
std::string Character::getGender() const { return gender; }

void Character::setRace(const std::string& race) { this->race = race; }
std::string Character::getRace() const { return race; }

void Character::setAlignment(const std::string& alignment) { this->alignment = alignment; }
std::string Character::getAlignment() const { return alignment; }

void Character::setBackground(const std::string& background) { this->background = background; }
std::string Character::getBackground() const { return background; }

void Character::setEquipment(const std::vector<std::string>& equipment) { this->equipment = equipment; }
std::vector<std::string> Character::getEquipment() const { return equipment; }

void Character::addSkill(const std::string& skill) { skills.push_back(skill); }

void Character::removeSkill(const std::string& skill) {
    auto it = std::remove(skills.begin(), skills.end(), skill);
    if (it != skills.end()) {
        skills.erase(it, skills.end());
    }
}

std::vector<std::string> Character::getSkills() const { return skills; }

void Character::clearSkills() {
    skills.clear();
}
