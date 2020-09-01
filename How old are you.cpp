#include <iostream>
#include <string>

int age = 20;

int main() {
    std::cout << "How old are you? :";
    std::cin >> age;
    if (age >= 20) {
        std::cout << "You are an adult \n";
    }
    else if (age < 20) {
        std::cout << "You are a teenager \n";
    }
}
