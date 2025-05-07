#include <stdio.h>

int main() {
    int choice;          // Variable to store the user's menu choice
    float value, result;  // Variables to store the input value and the converted result

    do {
        // Displaying the menu options for conversion
        printf("\nWhat unit conversion do you want to make?\n\n");
        printf("0. Exit\n");
        printf("1. Meters to Kilometers\n2. Kilometers to Meters\n");
        printf("3. Centimeters to Meters\n4. Meters to Centimeters\n");
        printf("5. Grams to Kilograms\n6. Kilograms to Grams\n");
        printf("7. Celsius to Fahrenheit\n8. Fahrenheit to Celsius\n");
        printf("9. Inches to Centimeters\n10. Centimeters to Inches\n");
        printf("11. Miles to Kilometers\n12. Kilometers to Miles\n");
        printf("13. Pounds to Kilograms\n14. Kilograms to Pounds\n");
        printf("15. Liters to Milliliters\n16. Milliliters to Liters\n");
        printf("17. Hours to Minutes\n18. Minutes to Seconds\n");
        printf("19. Square meters to Square kilometers\n20. Square kilometers to Square meters\n");
        printf("21. Joules to Calories\n22. Calories to Joules\n");
        printf("23. Meters per second to Kilometers per hour\n24. Kilometers per hour to Meters per second\n");
        printf("25. Newtons to Dynes\n26. Dynes to Newtons\n");
        printf("27. Watts to Horsepower\n28. Horsepower to Watts\n");
        printf("29. Kilopascals to Atmospheres\n30. Atmospheres to Kilopascals\n");
        printf("31. Cubic meters to Liters\n32. Liters to Cubic meters\n");
        printf("33. Bar to Pascals\n34. Pascals to Bar\n");
        printf("35. Gallons to Liters\n36. Liters to Gallons\n");
        printf("37. Acres to Square meters\n38. Square meters to Acres\n");
        printf("39. Cubic inches to Cubic centimeters\n40. Cubic centimeters to Cubic inches\n");
        printf("41. BTU to Joules\n42. Joules to BTU\n");
        printf("43. Foot-pounds to Joules\n44. Joules to Foot-pounds\n");
        printf("45. Miles per hour to Meters per second\n46. Meters per second to Miles per hour\n");
        printf("47. Kilometers per hour to Miles per hour\n48. Miles per hour to Kilometers per hour\n");
        printf("49. Square feet to Square meters\n50. Square meters to Square feet\n\n");
        printf("Choose a number: ");
        scanf("%d", &choice);

        // Exit condition
        if (choice == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        // Checking if the user's choice is valid before asking for a value
        if (choice >= 1 && choice <= 50) {
            printf("\nEnter the value to convert: ");
            scanf("%f", &value);
            printf("\n");
        }

        // Processing the user's choice using switch-case
        switch (choice) {
            case 1:
                result = value / 1000;
                printf("%.2f meters = %.2f kilometers\n", value, result);
                break;
            case 2:
                result = value * 1000;
                printf("%.2f kilometers = %.2f meters\n", value, result);
                break;
            case 3:
                result = value / 100;
                printf("%.2f centimeters = %.2f meters\n", value, result);
                break;
            case 4:
                result = value * 100;
                printf("%.2f meters = %.2f centimeters\n", value, result);
                break;
            case 5:
                result = value / 1000;
                printf("%.2f grams = %.2f kilograms\n", value, result);
                break;
            case 6:
                result = value * 1000;
                printf("%.2f kilograms = %.2f grams\n", value, result);
                break;
            case 7:
                result = (value * 9/5) + 32;
                printf("%.2f Celsius = %.2f Fahrenheit\n", value, result);
                break;
            case 8:
                result = (value - 32) * 5/9;
                printf("%.2f Fahrenheit = %.2f Celsius\n", value, result);
                break;
            case 9:
                result = value * 2.54;
                printf("%.2f inches = %.2f centimeters\n", value, result);
                break;
            case 10:
                result = value / 2.54;
                printf("%.2f centimeters = %.2f inches\n", value, result);
                break;
            case 11:
                result = value * 1.609;
                printf("%.2f miles = %.2f kilometers\n", value, result);
                break;
            case 12:
                result = value / 1.609;
                printf("%.2f kilometers = %.2f miles\n", value, result);
                break;
            case 13:
                result = value * 0.453592;
                printf("%.2f pounds = %.2f kilograms\n", value, result);
                break;
            case 14:
                result = value / 0.453592;
                printf("%.2f kilograms = %.2f pounds\n", value, result);
                break;
            case 15:
                result = value * 1000;
                printf("%.2f liters = %.2f milliliters\n", value, result);
                break;
            case 16:
                result = value / 1000;
                printf("%.2f milliliters = %.2f liters\n", value, result);
                break;
            case 17:
                result = value * 60;
                printf("%.2f hours = %.2f minutes\n", value, result);
                break;
            case 18:
                result = value * 60;
                printf("%.2f minutes = %.2f seconds\n", value, result);
                break;
            case 19:
                result = value / 1e6;
                printf("%.2f square meters = %.2f square kilometers\n", value, result);
                break;
            case 20:
                result = value * 1e6;
                printf("%.2f square kilometers = %.2f square meters\n", value, result);
                break;
            case 21:
                result = value / 4.184;
                printf("%.2f joules = %.2f calories\n", value, result);
                break;
            case 22:
                result = value * 4.184;
                printf("%.2f calories = %.2f joules\n", value, result);
                break;
            case 23:
                result = value * 3.6;
                printf("%.2f meters per second = %.2f kilometers per hour\n", value, result);
                break;
            case 24:
                result = value / 3.6;
                printf("%.2f kilometers per hour = %.2f meters per second\n", value, result);
                break;
            case 25:
                result = value * 1e5;
                printf("%.2f newtons = %.2f dynes\n", value, result);
                break;
            case 26:
                result = value / 1e5;
                printf("%.2f dynes = %.2f newtons\n", value, result);
                break;
                case 27:
                result = value / 745.7;
                printf("%.2f Watts = %.2f Horsepower\n", value, result);
                break;
            case 28:
                result = value * 745.7;
                printf("%.2f Horsepower = %.2f Watts\n", value, result);
                break;
            case 29:
                result = value / 101.325;
                printf("%.2f Kilopascals = %.2f Atmospheres\n", value, result);
                break;
            case 30:
                result = value * 101.325;
                printf("%.2f Atmospheres = %.2f Kilopascals\n", value, result);
                break;
            case 31:
                result = value * 1000;
                printf("%.2f Cubic meters = %.2f Liters\n", value, result);
                break;
            case 32:
                result = value / 1000;
                printf("%.2f Liters = %.2f Cubic meters\n", value, result);
                break;
            case 33:
                result = value * 100000;
                printf("%.2f Bar = %.2f Pascals\n", value, result);
                break;
            case 34:
                result = value / 100000;
                printf("%.2f Pascals = %.2f Bar\n", value, result);
                break;
            case 35:
                result = value * 3.785;
                printf("%.2f Gallons = %.2f Liters\n", value, result);
                break;
            case 36:
                result = value / 3.785;
                printf("%.2f Liters = %.2f Gallons\n", value, result);
                break;
            case 37:
                result = value * 4046.86;
                printf("%.2f Acres = %.2f Square meters\n", value, result);
                break;
            case 38:
                result = value / 4046.86;
                printf("%.2f Square meters = %.2f Acres\n", value, result);
                break;
            case 39:
                result = value * 16.3871;
                printf("%.2f Cubic inches = %.2f Cubic centimeters\n", value, result);
                break;
            case 40:
                result = value / 16.3871;
                printf("%.2f Cubic centimeters = %.2f Cubic inches\n", value, result);
                break;
            case 41:
                result = value * 1055.06;
                printf("%.2f BTU = %.2f Joules\n", value, result);
                break;
            case 42:
                result = value / 1055.06;
                printf("%.2f Joules = %.2f BTU\n", value, result);
                break;
            case 43:
                result = value * 1.35582;
                printf("%.2f Foot-pounds = %.2f Joules\n", value, result);
                break;
            case 44:
                result = value / 1.35582;
                printf("%.2f Joules = %.2f Foot-pounds\n", value, result);
                break;
            case 45:
                result = value * 0.44704;
                printf("%.2f Miles per hour = %.2f Meters per second\n", value, result);
                break;
            case 46:
                result = value / 0.44704;
                printf("%.2f Meters per second = %.2f Miles per hour\n", value, result);
                break;
            case 47:
                result = value / 1.609;
                printf("%.2f Kilometers per hour = %.2f Miles per hour\n", value, result);
                break;
            case 48:
                result = value * 1.609;
                printf("%.2f Miles per hour = %.2f Kilometers per hour\n", value, result);
                break;
            case 49:
                result = value / 10.764;
                printf("%.2f Square feet = %.2f Square meters\n", value, result);
                break;
            case 50:
                result = value * 10.764;
                printf("%.2f Square meters = %.2f Square feet\n", value, result);
                break;
            default:
                printf("Invalid choice\n");
        }    

    } while (choice != 0);

    return 0;
}
// This code is a simple unit conversion program that allows the user to convert between various units of measurement.
// The user is presented with a menu of conversion options, and they can enter the number corresponding to the conversion they want to perform.
// After entering the conversion choice, the user is prompted to enter the value they want to convert.
// The program then performs the conversion using the appropriate formula and displays the result.
// The program continues to run until the user chooses to exit by entering 0.