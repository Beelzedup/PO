#pragma once
#include <string>
#include <vector>

class Character {
public:
    Character();
    void setName(const std::string& name);
    std::string getName() const;
    void setClass(const std::string& characterClass);
    std::string getClass() const;
    void setLevel(int level);
    int getLevel() const;
    void setAge(int age);
    int getAge() const;
    void setGender(const std::string& gender);
    std::string getGender() const;
    void setRace(const std::string& race);
    std::string getRace() const;
    void setAlignment(const std::string& alignment);
    std::string getAlignment() const;
    void setBackground(const std::string& background);
    std::string getBackground() const;
    void setEquipment(const std::vector<std::string>& equipment);
    std::vector<std::string> getEquipment() const;

    void addSkill(const std::string& skill);
    void removeSkill(const std::string& skill);
    std::vector<std::string> getSkills() const;
    void clearSkills(); // Dodane: czyści listę umiejętności

private:
    std::string name;
    std::string characterClass;
    int level;
    int age;
    std::string gender;
    std::string race;
    std::string alignment;
    std::string background;
    std::vector<std::string> equipment;
    std::vector<std::string> skills;
};
