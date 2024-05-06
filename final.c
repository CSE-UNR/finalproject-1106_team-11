//Names: Kace Alejandro,
//Date: 5/5/2024
//Class: CS 135.1106
//Purpose: Image reading group project

// OUTLINE I HAVE SET UP

//libraries and define

// FUNCTIONS
//Add loadimage() "I think it works"
//Add displayimage() "Doesn't display what I want"
//Add editimage() "implemented."
		//implement these within the editimage() case.
	//cropimage()
	//dimimage()
	//brightenimage()

// MAIN function


#include <stdio.h>
#include <stdbool.h>
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
		displayChar = ' '; // Unknown brightness values will just be space.
	}
		printf("%c ", displayChar);
	}
		printf("\n");
	}
}

// Function to edit the current image
void editImage(int pixelValues[MAX_SIZE][MAX_SIZE], int rows, int cols) {
// Add your image editing logic here
	int editSelect;
	do {
		printf("\nOptions:\n");
		printf("1. Crop image\n");
		printf("2. Dim image\n");
		printf("3. Brighten image\n");
		printf("4. Go back\n"); 
		scanf("%d ", &editSelect);

	switch (editSelect) {
		case 1:
			//cropImage function
			break;
		case 2:	
			//dimImage function
			break;
		case 3:
			//brightenImage function
			break;
		case 4:
			break;
		default:
			printf("Invalid choice. Please try again.\n");
		}
	} while (editSelect != 4);
}

int main() {
	int choice;
	int pixelValues[MAX_SIZE][MAX_SIZE];
	int rows = 0, cols = 0;

	do {
		printf("\n***Image Loader***\n");
		printf("1. Load a new image\n");
		printf("2. Display the current image\n");
		printf("3. Edit the current image\n");
		printf("4. Exit the program.\n");
		printf("\nEnter your choice: ");
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
	case 4:
		printf("closing program...\n");\
		break;
	default:
		printf("Invalid choice. Please try again.\n");
		}
	} while (choice != 4);

return 0;
}
