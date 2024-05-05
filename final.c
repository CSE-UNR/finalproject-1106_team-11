//Names: Kace Alejandro,
//Date:
//Class: CS 135.1106
//Purpose: Image reading group project

//Add editimage()
//cropimage()
//dimimage()
//brightenimage()

#include <stdio.h>

// Kace
// Function to load a new image from a file
void loadImage() {
	// Implementation goes here
	printf("Loading image...\n");
}

// Kace
// Function to display the current image
void displayImage() {
	// Implementation goes here
	printf("Displaying the current image...\n");
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
		editImage();
		break;
	case 4:
		saveImage();
		break;
	default:
		printf("Invalid choice. Please try again.\n");
		}
	} while (choice != 4);

    return 0;
}
