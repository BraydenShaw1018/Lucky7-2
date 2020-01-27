//Brayden Shaw
//Lucky 7
//This is my own work.

#include <iostream>
#include <string>
#include <utility>
#include <ctime>
#include <fstream>

using namespace std;

bool isPalindrome(const string& t)
{
	if (t.size() <= 1)
		return true;
	else if (t[0] != t[t.size() - 1])
		return false;
	else
		return isPalindrome(t.substr(1, t.size() - 2));
}

int main()

{
	//write a code that reads in 5 integers and prints
	//the largest and s,allest of the group.

	int a, b, c, d, e;
	cout << "Enter any 5 different integers. ";
	cin >> a >> b >> c >> d >> e;

	int largest = a;
	if (b > largest)largest = b;
	if (c > largest)largest = c;
	if (d > largest)largest = d;
	if (e > largest)largest = e;

	int smallest = a;
	if (b < smallest)smallest = b;
	if (c < smallest)smallest = c;
	if (d < smallest)smallest = d;
	if (e < smallest)smallest = e;

	cout << "The largest integer is " << largest << "." << endl;
	cout << "The smallest integer is " << smallest << "." << endl;
	cout << endl;

	//Part 2
	//Write a code that calculates and prints the first 
	//50 positive integers that are multiple of 7.

	int sum = 0;             //loop to get sum
	int i = 1;
	while (i < 51) {
		sum = sum + i * 7;
		i++;
	}

	cout << "The sum of the first 50 values is " << sum << "." << endl;
	cout << endl;

	////Part 3
	////Write a code that calculates and prints the first 10
	////terms of the factorial sequence.

	int total = 1;
	int s = 1;               //loop to get first 10 terms
	while (s < 11) {
		total = total *s ;
		cout << "The value of the " << s << " term is " << total << "." << endl;
		s++;
	}
	cout << endl;

	//Write a code that reads in a string 
	//and determines whether it is a palindrome. 

	string t;
	getline(cin, t);

	cout << "Enter a string." << endl;
	cin >> t;                               //gets string checks it backwards 

	if (isPalindrome(t))
		cout << t << " is a palindrome." << endl;
	else
		cout << t << " is not a palindrome." << endl;
	
	cout << endl;

	//Write a code that reads in a positive integer 
	//and determines whether it is a prime number.

	int n, z;
	bool isPrime = true;
	
	cout << "Enter a positive integer." << endl;
	cin >> n;

	for (z = 2; z <= n / 2; ++z)
	{
		if (n % z == 0)                  // checks if they match 
		{                               // checks for prime number
			isPrime = false;
			break;
		}
	}
	if (isPrime)
		cout << "This is a prime number." << endl;
	else
		cout << "This is not a prime number." << endl;

	cout << endl;

	//Write a code that creates an array of integers using an initialization 
	//list and displays the average value.

	int arrB[] = { 3,5,7,9,12,34 };
	int average = (3 + 5 + 7 + 9 + 12 + 34) / 6;              //gets average of the array
	cout << "The average value of the array is " << average << "." << endl;
	cout << endl;
	
	//Write a program that gets a positive integer n from the user and creates 
	//an array of n. The program should read strings from a file, fill the 
	//array with the first n strings, and print the string with the most 
	//characters. You may assume that number of strings in the file is greater than

	int u;
	cout << "Enter a number between 1 and 10." << endl;
	cin >> u;

	ifstream file("file.txt");
	if (file.is_open())
	{
		string myArray[10];

		for (int i = 0; i < 10; ++i)
		{
			file >> myArray[i];
			cout << myArray << endl;
		}
	}
	
	return 0;

}