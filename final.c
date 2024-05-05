//Names: Kace Alejandro,
//Date:
//Class: CS 135.1106
//Purpose: Image reading group project

//Add editimage()
//cropimage()
//dimimage()
//brightenimage()

#include <stdio.h>
#define MAX_SIZE 1000
// Kace
// Function to load a new image from a file
void loadImage() {
	char fileName[MAX_SIZE];
	FILE *file;
	int pixelValues[MAX_SIZE][MAX_SIZE]; // Assuming a maximum size for the image

	printf("Enter the file name to load the image from: ");
	scanf("%s", fileName);

	file = fopen(fileName, "r");
		if (file == NULL) {
		printf("Error opening file. Please make sure the file exists.\n");
	return;
}

	// Read pixel values from the file
	// Example: Assuming the file contains pixel values in a format like "0 1 2 3 4 ..."
int rows, cols;
	fscanf(file, "%d %d", &rows, &cols); // Assuming the first line in the file contains rows and columns information

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			fscanf(file, "%d", &pixelValues[i][j]);
}
}

	// Process the pixel values as needed
	// You can display, edit, or perform other operations on the loaded image here

	printf("Image loaded successfully.\n");

	fclose(file);
}

// Kace
// Function to display the current image
void displayImage(int pixelValues[MAX_SIZE][MAX_SIZE], int rows, int cols) {
	char brightnessChars[] = {' ', '.', 'o', 'O', '0'};
    
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			int brightness = pixelValues[i][j];
			printf("%c ", brightnessChars[brightness]);
			}
		printf("\n");
		}
	}

// Reese

// Althea

int main() {
	int choice;
	
	do {

		// Display the menu options
		printf("Menu Options:\n");
		printf("1. Load a new image\n");
		printf("2. Display the current image\n");
		printf("3. Edit the current image\n");
		printf("4. Exit the program\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

	switch (choice) {
	case 1:
		loadImage();
		break;
	case 2:
		displayImage();
		break;
	case 3:
		printf("Test Fuction");
		break;
	case 4:
		printf("Test Fuction");
		break;
	default:
		printf("Invalid choice. Please try again.\n");
		}
	} while (choice != 4);

    return 0;
}
