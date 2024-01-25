#include<iostream>
using namespace std;
void input(int **arr,int r,int c);
void display(int** arr, int r, int c);
int sum(int** arr, int r, int c);
void rowsum(int** arr, int r, int c);
void colsum(int** arr, int r, int c);
void transpose(int** arr, int r, int c);
int main() {
	int m;
	int n;
	int choice = 0;
	cout << "Enter num of rows of the matrix" << endl;
	cin >> m;
	cout << "Enter num of cols of matrix" << endl;
	cin >> n;
	//DMA
	int** matrix = new int* [m];
	for (int i = 0; i < m; i++) {
		matrix[i] = new int[n];
	}
	

	do {
		cout << "Menu" << endl;
		cout << "1. Input elements into the matrix"<<endl;
		cout << "2. Display elements of the matrix" << endl;
		cout << "3. Sum of all elements of the matrix" << endl;
		cout << "4. Display row-wise sum of the matrix" << endl;;
		cout << "5. Display column-wise sum of the matrix"<<endl;
		cout << "6. Create transpose of the matrix" << endl;
		cout << "7. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			input(matrix, m, n);
			break;
		case 2:
			display(matrix, m, n);
			break;
		case 3:
			cout << "Sum of all elements is: " << sum(matrix, m, n) << endl;
			break;
		case 4:
			rowsum(matrix, m, n);
			break;
		case 5:
			colsum(matrix, m, n);
			break;
		case 6:
			transpose(matrix, m, n);
			break;
		case 7:
			cout << "Good Bye!"<<endl;
			break;
		default:
			cout << "Invalid choice. Please enter a valid option." << endl;
		}

	} while (choice != 7);


	return 0;
}
void input(int** arr, int r, int c) {
	cout << "Enter the elements of array" << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}
}
void display(int** arr, int r, int c){
	cout << "elements of array are:" << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	}
int sum(int** arr, int r, int c) {
	int s = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			s += arr[i][j];
		}
	}
	return s;
}
void rowsum(int** arr, int r, int c) {
	int rowsum = 0;
	for (int i = 0; i < r; ++i) {
		rowsum = 0;
		for (int j = 0; j < c; ++j) {
			rowsum += arr[i][j];
		}
		cout << "Row Sum of row:" << i + 1 << "is= " << rowsum << endl;
	}

}
void colsum(int** arr, int r, int c) {
	int colsum = 0;
	for (int i = 0; i < c; i++) {
		colsum = 0;
		for (int j = 0; j < r; j++) {
			colsum += arr[j][i];
		}
		cout << "colsum of col:" << i + 1 << "is=" << colsum << endl;
	}
}
void transpose(int** arr, int r, int c) {
	int** t = new int*[100];
	for (int i = 0; i < 100; i++) {
		t[i] = new int[100];
	}
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			t[i][j] = arr[j][i ];
		}
	}
	cout << "transpose of matrix is:" << endl;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			cout << t[i][j] << " ";
		}
		cout << endl;
	}

}