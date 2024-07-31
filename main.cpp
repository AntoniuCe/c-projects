#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Functie pentru a verifica daca inputul este valid
bool isNumber(const string& str) 
{
    for (char const& c : str) 
    {
        if (isdigit(c) == 0) return false;
    }
    return true;
}

double celsiusToFahrenheit(double temp) {
    return (temp * 1.8) + 32;
}

double celsiusToKelvin(double temp) {
    return temp + 273.15;
}

double fahrenheitToCelsius(double temp) {
    return (temp - 32) / 1.8;
}

double fahrenheitToKelvin(double temp) {
    return (temp + 459.67) * 1.8;
}

double kelvinToCelsius(double temp) {
    return temp - 273.15;
}

double kelvinToFahrenheit(double temp) {
    return (temp * 1.8) - 459.67;
}

int main()
{
    int choice1, choice2;
    double temp;
    string input;

    cout << "#####################################" << endl;
    cout << "Welcome to the temperature convertor!" << endl;
    cout << "#####################################" << endl;
    cout << "\n";
    bool out = true;

    do
    {
        cout << "Choose what type of temperature you have (Celsius is default): " << endl;
        cout << "1. Celsius" << endl;
        cout << "2. Fahrenheit" << endl;
        cout << "3. Kelvin" << endl;
        cin >> input;

        if (isNumber(input)) {
            choice1 = stoi(input);

            switch (choice1)
            {
            case 1:
            default:
                cout << "You chose Celsius" << endl;
                cout << "Now please choose in what temperature you want to convert it (default is Fahrenheit):" << endl;
                cout << "1. Fahrenheit" << endl;
                cout << "2. Kelvin" << endl;
                cin >> input;
                if (isNumber(input)) {
                    choice2 = stoi(input);

                    cout << "Please insert the temperature you want to convert" << endl;
                    cin >> temp;

                    switch (choice2)
                    {
                    case 1:
                    default:
                        cout << "You will convert from Celsius to Fahrenheit!" << endl;
                        cout << "Your conversion is " << celsiusToFahrenheit(temp) << " Fahrenheit" << endl;
                        break;
                    case 2:
                        cout << "You will convert from Celsius to Kelvin!" << endl;
                        cout << "Your conversion is " << celsiusToKelvin(temp) << " Kelvin" << endl;
                        break;
                    }
                }
                else {
                    cout << "Invalid input. Please enter a number." << endl;
                }
                break;

            case 2:
                cout << "You chose Fahrenheit" << endl;
                cout << "Now please choose in what temperature you want to convert it (default is Celsius):" << endl;
                cout << "1. Celsius" << endl;
                cout << "2. Kelvin" << endl;
                cin >> input;
                if (isNumber(input)) {
                    choice2 = stoi(input);

                    cout << "Please insert the temperature you want to convert" << endl;
                    cin >> temp;

                    switch (choice2)
                    {
                    case 1:
                    default:
                        cout << "You will convert from Fahrenheit to Celsius!" << endl;
                        cout << "Your conversion is " << fahrenheitToCelsius(temp) << " Celsius" << endl;
                        break;

                    case 2:
                        cout << "You will convert from Fahrenheit to Kelvin!" << endl;
                        cout << "Your conversion is " << fahrenheitToKelvin(temp) << " Kelvin" << endl;
                        break;
                    }
                }
                else {
                    cout << "Invalid input. Please enter a number." << endl;
                }
                break;

            case 3:
                cout << "You chose Kelvin" << endl;
                cout << "Now please choose in what temperature you want to convert it (default is Celsius):" << endl;
                cout << "1. Celsius" << endl;
                cout << "2. Fahrenheit" << endl;
                cin >> input;
                if (isNumber(input)) {
                    choice2 = stoi(input);

                    cout << "Please insert the temperature you want to convert" << endl;
                    cin >> temp;

                    switch (choice2)
                    {
                    case 1:
                    default:
                        cout << "You will convert from Kelvin to Fahrenheit!" << endl;
                        cout << "Your conversion is " << kelvinToFahrenheit(temp) << " Fahrenheit" << endl;
                        break;

                    case 2:
                        cout << "You will convert from Kelvin to Celsius!" << endl;
                        cout << "Your conversion is " << kelvinToCelsius(temp) << " Celsius" << endl;
                        break;
                    }
                }
                else {
                    cout << "Invalid input. Please enter a number." << endl;
                }
                break;
            }

            cout << "\n";
            cout << "If you want to quit press 4" << endl;
            cout << "Else press other button" << endl;
            cin >> input;
            if (isNumber(input) && stoi(input) == 4) {
                out = false;
            }
            else {
                out = true;
            }
        }
        else {
            cout << "Invalid input. Please enter a number." << endl;
        }
    } while (out);

    return 0;
}
