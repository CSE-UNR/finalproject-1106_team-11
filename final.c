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

// Function to load a new image from a file
void loadImage(int pixelValues[MAX_SIZE][MAX_SIZE], int *rows, int *cols) {
	char fileName[MAX_SIZE];
	FILE *file;

	printf("Enter the file name to load the image from: ");
	scanf("%s", fileName);

	file = fopen(fileName, "r");
		if (file == NULL) {
		printf("Error opening file. Please make sure the file exists.\n");
	return;
}

	fscanf(file, "%d %d", rows, cols);

	for (int i = 0; i < *rows; i++) {
		for (int j = 0; j < *cols; j++) {
		fscanf(file, "%d", &pixelValues[i][j]);
	}
}

	printf("Image loaded successfully.\n");

fclose(file);
}

// Function to display the current image
void displayImage(int pixelValues[MAX_SIZE][MAX_SIZE], int rows, int cols) {
char brightnessChars[] = {' ', '.', 'o', 'O', '0'};

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			int brightness = pixelValues[i][j];

// Map brightness values to characters based on the provided table

	char displayChar;
	switch (brightness) {
	case 0:
		displayChar = ' ';
		break;
	case 1:
		displayChar = '.';
		break;
	case 2:
		displayChar = 'o';
		break;
	case 3:
		displayChar = 'O';
		break;
	case 4:
		displayChar = '0';
		break;
	default:
		displayChar = ' '; // Handle unknown brightness values
	}

		printf("%c ", displayChar);
	}
		printf("\n");
	}
}

// Function to edit the current image
void editImage(int pixelValues[MAX_SIZE][MAX_SIZE], int rows, int cols) {
// Add your image editing logic here
printf("Options:\n");
}

int main() {
	int choice;
	int pixelValues[MAX_SIZE][MAX_SIZE];
	int rows = 0, cols = 0;

	do {
		printf("\nMenu Options:\n");
		printf("1. Load a new image\n");
		printf("2. Display the current image\n");
		printf("3. Edit the current image\n");
		printf("4. Crop the current image\n");
		printf("5. Dim the current image\n");
		printf("6. Brighten the current image\n");
		printf("7. Exit the program\n");
		printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		loadImage(pixelValues, &rows, &cols);
		break;
	case 2:
		displayImage(pixelValues, rows, cols);
		break;
	case 3:
		editImage(pixelValues, rows, cols);
		break;
	default:
		printf("Invalid choice. Please try again.\n");
		}
	} while (choice != 7);

return 0;
}
