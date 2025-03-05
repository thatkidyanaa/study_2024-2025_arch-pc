#include <iostream>
#include <map>
#include <string>
int main() {
    std::map<int, std::string> countryCodes = {
        {40, "Германия"},
        {46, "Россия"},
        {1, "США"},
        {44, "Великобритания"},
        {33, "Франция"},
        {34, "Испания"},
        {39, "Италия"},   
    };
int code;
    std::cout << "Введите код страны: ";
    std::cin >> code;
	auto it = countryCodes.find(code);
    if (it != countryCodes.end()) {
        std::cout << "Страна: " << it->second << std::endl;
    } else {
        std::cout << "Такого кода страны нет." << std::endl;
    }
	return 0;
}

