/*
    BMI Metric Lab:

    Body mass index (BMI) is a number calculated from a person’s weight and height. According to the
    Centers for Disease Control and Prevention, the BMI is a fairly reliable indicator of body fatness for most people.
    BMI does not measure body fat directly, but research has shown that BMI correlates to direct measures of body fat,
    such as underwater weighing and dual-energy X-ray absorptiometry. The formula or BMI is weight/height2 where weight
    is in kilograms and height is in meters.

    Write a program that prompts for metric weight and height and outputs the BMI with two decimal places.

    For example, an execution could look like this:

    Please enter weight in kilograms: 50
    Please enter height in meters: 1.58
    BMI is: 20.03
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double weight, height, bmi;
    cout << "Please enter weight in kilograms: "; cin >> weight;
    cout << "Please enter height in meters: "; cin >> height;

    bmi = weight / (height * height);
    cout << "BMI is: " << fixed << setprecision(2) << bmi << endl;

    return 0;
}
