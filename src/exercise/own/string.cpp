#include <iostream>

int main(void)
{

    // ----------------------- DECLARING AND/OR INIT -----------------------
    std::string firstString = "The first string";
    std::string secondString = ("The second string");

    std::string thirdString;
    thirdString = "The third string";

    std::string fourthString = thirdString;
    thirdString = "Hello World";

    // What will be printed to console?
    std::cout << fourthString << std::endl;

    // ----------------------- USEFUL METHODS FOR STRINGS -----------------------
    // .length() and .size() - both will return the length of the string.
    std::string stringExample = "Example string";
    std::cout << stringExample.length() << std::endl; // Check the length of string
    std::cout << stringExample.size() << std::endl;   // check the size of the string

    // .append() and +
    stringExample.append(" is now longer "); // Adds the string in parameter to the called string
    stringExample += firstString;            // Adds firstString to the back of stringExample
    std::cout << stringExample << std::endl;

    std::string anotherString = stringExample + " " + firstString;
    std::cout << anotherString << std::endl;

    // accessing elements in string [] and .at()
    std::cout << stringExample[3] << " is the same as " << stringExample.at(3) << std::endl;

    // comparing strings with == and .compare()
    // this will return either true or false depending if they are equal
    bool isEqual = (stringExample == firstString);
    std::cout << " Is equal: " << isEqual << std::endl;

    std::string string1Example = "The first string";
    std::string first1String = "The first string";
    bool isEqual1 = (string1Example == first1String);
    std::cout << " Is equal: " << isEqual1 << std::endl;

    // this will return -1 if stringExample is alphabetically before firstString,
    // 0 if they are equal or 1 if stringExample is alphabetically after firstString.

    std::cout << " stringExample: " << stringExample << std::endl;
    std::cout << " firstString: " << firstString << std::endl;
    int indexEqual = stringExample.compare(firstString);
    std::cout << " Index equal: " << indexEqual << std::endl;

    // Extracting characters using .substr()
    std::string helloString = thirdString.substr(0, 4);
    std::cout << helloString << std::endl;

    // Searching in a string with .find()
    // This will return the index of the first appearance of the substring
    int position = stringExample.find("is now longer");
    std::cout << " position: " << position << std::endl;

    // Iterates through the string to find the character. Will return std::string::npos if not found.
    bool hasLinString = (stringExample.find('Z') != std::string::npos);
    std::cout << " has Z in stringExample: " << hasLinString << std::endl;

    // Modifying strings
    helloString.replace(0, helloString.length(), "Bonjour");
    std::cout << " helloString: " << helloString << std::endl;
    helloString.erase(0, helloString.length());
    std::cout << " helloString: " << helloString << std::endl;
    helloString.insert(0, "Hola");
    std::cout << " helloString: " << helloString << std::endl;
    helloString.clear();
    std::cout << " helloString: " << helloString << std::endl;

    return 0;
}