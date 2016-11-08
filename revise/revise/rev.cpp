#include <iostream>
#include <cmath>
#include <fstream>
#include <iterator>
#include <array>
#include <string>
using namespace std;
const int leng = 4;
int stuNumArr[leng] = { 213506069, 214513360, 215584512 };
string nameArr[leng] = { "Aashu", "Chey", "Kahil" };
string surname[leng] = { "Ramp", "Pillay", "Thilak" };
string idNo[leng] = { "1710955489652", "3006950355085", "2702964258465" };


class Test{

private:

public:
	Test::Test();
	Test::~Test();
	void sortArray(int arr[], int len);

	template <typename T1>
	void ArrayLength(T1 a[]);

	template <typename Tmpl8>
	void sortArr(Tmpl8 arr[], int arrSize);

	template <typename T>
	void dispArr(T arr[], int size);


	void searchArray(int data[], int element, int size);

	template <typename Tee>
	// write textfile
	void writeTextFile(Tee arr[], string link);


	template <typename cee>
	// read textfile 
	void Test::readTextFile(string link)

};



// contructor 
Test::Test(){

}

// destructor 
Test::~Test(){

}

// display number of elements in the array 
template <typename T1>
void Test::ArrayLength(T1 a[]){


	int len = sizeof(a) / sizeof(a[0]);
	cout << len << endl;
}





template <typename Tmpl8>

// sort the contents of the array 

void Test::sortArr(Tmpl8 arr[], int arrSize){
	int i, j;
	Tmpl8 tempArr;
	for (i = 0; i < arrSize - 1; i++){

		for (j = i + 1; j < arrSize; j++){
			// if array at position i is less than array at position i+1
			if (arr[i] < arr[j]){


				// swap the numbers to sort the array in descending order
				tempArr = arr[j];
				arr[j] = arr[i];
				arr[i] = tempArr;

			}

		}
		cout << arr[i] << endl;
	}

}

// new template to display
template <typename T>
//display method to display contents in the array
void Test::dispArr(T arr[], int size) {
	for (int i = 0; i < size; i++){
		cout << arr[i] << endl;

	}
}










// search for element in the array
void Test::searchArray(int data[], int element, int size){
	int flag = 0;

	int i = 0;
	while (i <= size){

		if (element == data[i])
		{

			flag = 1;
			break;
		}

		i++;
	}
	if (flag)    // if flag is TRUE (1)
	{

		cout << "student Number\t\t\t\tName\t\t\t\tSurname\t\t\t\tID Number" << endl;
		cout << data[i] << "\t\t\t\t" << nameArr[i] << "\t\t\t\t" << surname[i] << "\t\t\t\t" << idNo[i] << endl;

	}
	else
	{
		cout << "The student number entered could not be found." << endl << endl;
	}


}

// write textfile 

template <typename Tee>
void Test::writeTextFile(Tee arr[], string link){


	ofstream fout(link);

	if (fout.is_open())
	{
		//file opened successfully so we are here
		cout << "File Opened successfully!!!. Writing data from array to file" << endl;

		for (int i = 0; arr[i] != '\0'; i++)
		{
			fout << arr[i]; //writing ith character of array in the file
		}
		cout << "Array data successfully saved into the file test.txt" << endl;
	}
	else //file could not be opened
	{
		cout << "File could not be opened." << endl;
	}


}


template <typename cee>
// read textfile 
void Test::readTextFile(string link){
	int i = 0;
	fstream tFile;
	tFile.open(link);
	cee output[1024];
	if (tFile.is_open())
	{

		while (!tFile.eof())
		{
			tFile >> output[i];
			cout << output[i];
			i++;

		}
		tFile.close();
	}



}












int main(){



	Test fish;
	fish.searchArray(stuNumArr, 214513361, 4);
	fish.dispArr(nameArr, leng);
	fish.sortArr(surname, leng);
	fish.ArrayLength(surname);

	system("pause");





}


