#include <iostream>


int Get_Int();
int Get_Dbl();

int Random_Number_Int(int Range_min, int Range_max) 
{
	//srand(time(NULL));
	return Range_min + rand() % (Range_max - Range_min + 1); 
}

template <typename T> void Array_console_out(T arr[],int const Size)
{
	for (int i = 0; i < Size; i++)
	{
		//if ((i + 1) % 11 == 0) std::cout << "\n";
		std::cout << arr[i] << ", ";		
	}
	std::cout << "\b\b \n";
}
//Linear search of first encaunter of an element
template <typename T> int Search_in_Array(T arr[], int const Size, T value, int start_position=0)
{
	for (int i = start_position; i < Size; i++)
	{
		if (arr[i] == value) return i;
	}
	return -1;
}

//Linear search of last encaunter of an element
template <typename T> int Search_in_Array_Last(T arr[], int const Size, T value)
{
	int counter_of_value = 0;
	for (int i = Size; i >= 0; i--)
	{
		if (arr[i] == value) return i;						
	}
	return -1;
}

template <typename T> int Search_in_Array_Last(T arr[], int const Size, T value, int start_position)
{
	int counter_of_value = 0;
	for (int i = start_position; i >= 0; i--)
	{
		if (arr[i] == value) return i;

	}
	return -1;
}

void CHAR_Array_out(char arr[], int const Size, char char_to_start)
{
	int index = Search_in_Array(arr, Size, char_to_start);
	if (index != -1)
	for (int i = index; i < Size; i++)
			std::cout << arr[i];
	else 	std::cout << "\nERROR: no char \'" << char_to_start << "\'\n";

}

int main()
{
	const int Size_of_Array = 10;
	int Test_Array[Size_of_Array] = { 0,5,15,20,5,30,35,40,5,50 };
	
	char Test_Array_Char[Size_of_Array] = { 'F','u','n','c','t','i','o','n'};

	//for (int i = 1; i < Size_of_Array; i++)
	//	Test_Array[i] += Test_Array[i-1] + 5;
	//int My_Number = Get_Int();
	
	std::cout << "\nTest_Array:\n";
	Array_console_out(Test_Array, Size_of_Array);

	std::cout << "\nTest_Array_Char:\n";
	Array_console_out(Test_Array_Char, Size_of_Array);

	std::cout << "\nEnter a char to start from: ";
	char char_to_start;
	std::cin >> char_to_start;

	std::cout << "\Test_Array_Char from char " << char_to_start <<"\n";
	CHAR_Array_out(Test_Array_Char, Size_of_Array, char_to_start);


	/*
	std::cout << "\nEnter a number to search: ";
	int value_to_search = Get_Int();
	std::cout << "\nEnter a start position to search: ";
	int start_position = Get_Int();

	if (Search_in_Array(Test_Array, Size_of_Array, value_to_search, start_position)!=-1) std::cout << "\nSearch_in_Array(" << value_to_search << ") -> " << Search_in_Array(Test_Array, Size_of_Array, value_to_search, start_position);
	else 	std::cout << "\nThere are no "<< value_to_search<<" in Test_Array\n";

	if (Search_in_Array_Last(Test_Array, Size_of_Array, value_to_search) != -1) std::cout << "\nSearch_in_Array_Last(" << value_to_search << ") -> " << Search_in_Array_Last(Test_Array, Size_of_Array, value_to_search);
	else 	std::cout << "\nThere are no " << value_to_search << " in Test_Array\n";

	int result3 = Search_in_Array_Last(Test_Array, Size_of_Array, value_to_search, start_position);		
	if (result3 != -1) std::cout << "\nSearch_in_Array_Last(" << value_to_search << ") from position " << start_position << " -> " << result3;
	else 	std::cout << "\nThere are no " << value_to_search << " in Test_Array\n";
	*/
	
	
	
	//main() final part
	std::cout << "\n\n";
	system("pause");
	return 0;
}

int Get_Int()
{
	int a;
	while (!(std::cin >> a) || (std::cin.peek() != '\n'))
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "[Input error! Integer expected]\n";
	}
	return a;
}
int Get_Dbl()
{
	double a;
	while (!(std::cin >> a) || (std::cin.peek() != '\n'))
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "[Input error! Integer expected]\n";		
	}
	return a;
}
