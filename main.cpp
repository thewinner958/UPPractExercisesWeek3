#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Exercise 0
    double x, y;
    char oper;
    double result = 0;
    cin >> x >> oper >> y;
    switch (oper) {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        if (x == 0 || y == 0) {
            cout << "You can't divide by 0\n";
            return 0;
        }
        result = x / y;
        break;
    default:
        break;
    }
    cout << result << endl;

    // Exercise 1
    char letter;
    cin >> letter;
    if (letter >= 65 && letter <= 90) {
        letter += 32;
        cout << "The lower case character corresponding to is " << letter << endl;
    }
    else if (letter >= 97 && letter <= 122) {
        letter -= 32;
        cout << "The upper case character corresponding to is " << letter << endl;
    }
    else {
        cout << letter << " is not a letter\n";
    }

    // Exercise 2
    int month;
    cin >> month;
    switch (month)
    {
    case 1:
    case 2:
        cout << "The season is winter\n";
        break;
    case 3:
    case 4:
    case 5:
        cout << "The season is spring\n";
        break;
    case 6:
    case 7:
    case 8:
        cout << "The season is summer\n";
        break;
    case 9:
    case 10:
    case 11:
        cout << "The season is autumn\n";
        break;
    case 12:
        cout << "The season is winter\n";
        break;
    default:
        cout << "That is not a month\n";
        break;
    }

    // Exercise 3
    int a, b;
    cin >> a >> b;
    int lx = b / -a;
    if (a * lx + b == 0) {
        cout << lx << endl;
    }
    else if (lx == 0)
    {
        cout << "INF\n";
    }
    else
    {
        cout << "NO\n";
    }

    // Exercise 5
    double qdna, qdnb, qdnc;
    double qdex, qdex1, qdex2;
    cin >> qdna >> qdnb >> qdnc;
    double discriminant = (qdnb * qdnb) - (4 * qdna * qdnb);
    if (qdna == 0) {
        qdex = qdnc / -qdnb;
        cout << qdex;
        return 0;
    }
    if (discriminant < 0) {
        cout << "No result\n";
    }
    else if (discriminant == 0) {
        qdex = -qdnb / 2 * qdna;
        cout << qdex;
    }
    else {
        qdex1 = (-qdnb + sqrt(discriminant)) / (2 * qdna);
        qdex2 = (-qdnb - sqrt(discriminant)) / (2 * qdna);
        cout << qdex1 << endl << qdex2 << endl;
    }

    // Exercise 6
    char character;
    cin >> character;
    if (character >= 65 && character <= 90) {
        cout << character << " is a uppercase letter\n";
    }
    else if (character >= 97 && character <= 122) {
        cout << character << " is a lowercase letter\n";
    }
    else if (character >= 48 && character <= 57) {
        cout << character << " is a digit\n";
    }
    else
    {
        cout << character << " is a special character\n";
    }

    // Exercise 4
    int mth, yr;
    cin >> mth >> yr;
    int thirtyFirst = 31;
    int thirty = 30;
    int febLeap = 29;
    switch (mth)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << thirtyFirst << endl;
            break;
        case 2:
            int leap;
            if (!(yr % 100)) {
                leap = yr % 400;
            }
            else {
                leap = yr % 4;
            }
            if (leap == 0) {
                cout << febLeap << endl;
            }
            else {
                febLeap -= 1;
                cout << febLeap << endl;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << thirty << endl;
            break;
        default:
            cout << "Error\n";
            break;
    }

    // Exercise 7
    int num;
    cin >> num;
    int dgt1 = num / 1000;
    int dgt2 = (num / 100) % 10;
    int dgt3 = (num / 10) % 10;
    int dgt4 = num % 10;
    bool rslt = dgt1 % 2 != 0 && (dgt1 > dgt2 && dgt1 > dgt3 && dgt1 > dgt4);
    cout << boolalpha << rslt << endl;

    // Exercise 8
    int inTomatoes, inPeppers, inCarrots, inOlives, inPotatoes, inFlavoring;
    cin >> inTomatoes >> inPeppers >> inCarrots >> inOlives >> inPotatoes >> inFlavoring;
    bool needsHelp = inTomatoes > 1;
    bool studentSalad = inTomatoes >= 1 && inPeppers >= 2 && inCarrots >= 4 && inOlives >= 3 && inPotatoes == 3 && inFlavoring >= 150;
    bool studentSoup = inTomatoes >= 2 && inPeppers >= 3 && inCarrots >= 5 && inOlives >= 6 && inPotatoes == 10 && inFlavoring >= 200;
    bool studentCasserole = inTomatoes >= 5 && inPeppers >= 6 && inCarrots >= 12 && inOlives >= 7 && inPotatoes == 12 && inFlavoring >= 300;
    studentCasserole || studentSalad || studentSoup ? cout << "He has the necessary ingredients to make one or more dishes\n" : cout << "He probably needs to go to BILLA\n";
    needsHelp == 1 ? cout << "He also needs help" : cout << endl;
    return 0;
}
