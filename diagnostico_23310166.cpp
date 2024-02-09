/*

    Actividad Diágnostico

    Registro: 23310166.
    Nombre: Galio Marcelo Gutiérrez Hernández.

*/

// Place where I put the libraries I'll use.

#include <iostream>
#include <locale>
#include <cstring>


class Apiary {
        public:
        int apiaryID;
        char ubication[25];
        int beehiveQuantity;
        char beehiveType[25];
        char Product[25];

        void printApiaryInfo();
        void changeApiaryUbication(const char* newUbication);
        void changeApiaryType(const char* newBeehiveType);
};

void Apiary::printApiaryInfo() {
    std::cout << "ID: " << apiaryID << std::endl;
    std::cout << "Ubication: " << ubication << std::endl;
    std::cout << "Beehive Quantity: " << beehiveQuantity << std::endl;
    std::cout << "Beehive Type: " << beehiveType << std::endl;
    std::cout << "Product: " << Product << "\n" <<std::endl;
}

void Apiary::changeApiaryUbication(const char* newUbication) {
    std::strcpy(ubication, newUbication);
}

void Apiary::changeApiaryType(const char* newBeehiveType) {
    std::strcpy(beehiveType, newBeehiveType);
}

class Beehive : public Apiary {
public:
    int beehiveID;
    char material[25];
    int frameQuantity;

    void printBeehiveInfo();
    void changeMaterial(const char* newMaterial);
};

void Beehive::printBeehiveInfo() {
    std::cout << "Beehive ID: " << beehiveID << std::endl;
    std::cout << "Material: " << material << std::endl;
    std::cout << "Frame Quantity: " << frameQuantity << "\n" << std::endl;
}

void Beehive::changeMaterial(const char* newMaterial) {
    std::strcpy(material, newMaterial);
}

class Queen : public Beehive {
public:
    int queenID;
    char name[25];
    char breed[25];
    int age;

    void printQueenInfo();
    void changeName(const char* newName);
    void changeBreed(const char* newBreed);
};

void Queen::printQueenInfo() {
    std::cout << "Queen ID: " << queenID << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Breed: " << breed << std::endl;
    std::cout << "Age (In months): " << age << "\n" << std::endl;
}

void Queen::changeName(const char* newName) {
    std::strcpy(name, newName);
}

void Queen::changeBreed(const char* newBreed) {
    std::strcpy(breed, newBreed);
}



// Main function, the entry point of the program.

int main(){

    // Set the locale to support Unicode.
    std::setlocale(LC_ALL, "");

    // Apiary Section

    Apiary newApiary;
    newApiary.apiaryID = 1;
    std::strcpy(newApiary.ubication, "El Salto");
    newApiary.beehiveQuantity = 20;
    std::strcpy(newApiary.beehiveType, "Langstroth");
    std::strcpy(newApiary.Product, "Honey");

    std::cout << "Apiary's Information\n" << std::endl;

    newApiary.printApiaryInfo(); 

    newApiary.changeApiaryUbication("Tlajomulco");

    newApiary.changeApiaryType("Flow"); 

    std::cout << "Updating Current Info...\n" << std::endl;

    std::cout << "Updated Apiary's Information\n" << std::endl;

    newApiary.printApiaryInfo();

    // Beehive Section

    std::cout << "+--------------------------------------------+\n" << std::endl;

    std::cout << "Beehive's Information\n" << std::endl;

    Beehive newBeehive;
    newBeehive.beehiveID = 227854;
    std::strcpy(newBeehive.material, "Wood");
    newBeehive.frameQuantity = 10;

    newBeehive.printBeehiveInfo();

    newBeehive.changeMaterial("Metal");

    std::cout << "Updating Beehive Info...\n" << std::endl;

    std::cout << "Updated Beehive's Information\n" << std::endl;

    newBeehive.printBeehiveInfo();

    // Queen Section

    std::cout << "+--------------------------------------------+\n" << std::endl;

    std::cout << "Queen's Information\n" << std::endl;

    Queen newQueen;
    newQueen.queenID = 2024341323;
    std::strcpy(newQueen.name, "Mara");
    std::strcpy(newQueen.breed, "Apis mellifera ligustica");
    newQueen.age = 13;

    newQueen.printQueenInfo();

    newQueen.changeName("Martha");
    newQueen.changeBreed("Apis mellifera carnica");

    std::cout << "Updating Queen Info...\n" << std::endl;

    std::cout << "Updated Queen's Information\n" << std::endl;

    newQueen.printQueenInfo();
   

    // Return statement to indicate successful execution.
    return 0;
}