// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// // Function to generate random vehicle numbers
// string generateVehicleNumber(int index) {
//     return "KA05LK" + to_string(2000 + (index % 8000)); // Ensuring unique numbers
// }

// int main() {
//     ofstream file("output.txt");
//     if (!file) {
//         cerr << "Error opening file!" << endl;
//         return 1;
//     }

//     for (int i = 0; i < 10000; i++) {
//         file << generateVehicleNumber(i) << ",TVS,Apache,Available,1000" << endl;
//     }

//     file.close();
//     cout << "Data generated successfully in output.txt" << endl;
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number within a range
int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    FILE *file = fopen("bike_data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    srand(time(NULL)); // Seed for randomization

    const char *brands[] = {"TVS", "Bajaj", "KTM", "Yamaha", "Honda", "Suzuki"};
    const char *models[] = {"Apache", "Pulsar", "RC390", "R15", "Hornet", "Gixxer"};
    const char *status[] = {"Available", "Booked"};

    for (int i = 0; i < 100000; i++) {
        int regNum = getRandomNumber(1000, 9999);
        int brandIndex = getRandomNumber(0, 5);
        int modelIndex = getRandomNumber(0, 5);
        int statusIndex = getRandomNumber(0, 1);
        int rentPrice = getRandomNumber(500, 3000);

        fprintf(file, "KA05LK%d,%s,%s,%s,%d\n", regNum, brands[brandIndex], models[modelIndex], status[statusIndex], rentPrice);
    }

    fclose(file);
    printf("Data successfully written to bike_data.txt\n");

    return 0;
}
