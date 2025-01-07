#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline

int main()
{
    // Set up variables
    int num1;
    std::string noun1;
    std::string adjective1;
    std::string noun2;
    std::string place1;
    std::string adjective2;
    std::string verb1;
    std::string verb2;

    // Get user input
    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Enter a noun: ";
    std::cin >> noun1;


    std::cout << "Enter a noun: ";
    std::cin >> noun2;

    std::cout << "Enter a place: ";
    std::cin >> place1;

    std::cout << "Enter an adjective: ";
    std::cin >> adjective1;

    std::cout << "Enter an adjective: ";
    std::cin >> adjective2;

    std::cout << "Enter an verb: ";
    std::cin >> verb1;

    std::cout << "Enter an verb: ";
    std::cin >> verb2;


    // Display story
    std::cout << "This weekend I am going to " << place1 << " for the " << num1 << "th/rd time. For the trip I packed my car with beef jerky and " << noun1 << ". I was very " << adjective1 << " for this trip." << " As I was on the trip I saw a " << noun2 << ". It was very " << adjective2 << ". As I passed it I saw it " << verb1 << ". Afterwards I got to the destination and did " << verb2 << " there. What a fun trip!\n";
    
    return 0;
}
