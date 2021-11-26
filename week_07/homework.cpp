#include <iostream>

using namespace std;

const int SIZE = 33;

void nameConversion()
{
    cout << "Enter a name: ";
    char Name[SIZE];
    cin.getline(Name, SIZE);
    cout << "Enter a family name: ";
    char Family[SIZE];
    cin.getline(Family, SIZE);
    char Unite[SIZE * 2];
    int i = 0;
    for (; Name[i] != '\0'; i++)
    {
        if (Name[i] >= 'A' && Name[i] <= 'Z')
            Unite[i] = (int)Name[i] + 32;
        else
            Unite[i] = Name[i];
    }
    Unite[i] = '_';
    i++;
    for (int j = 0; Family[j] != '\0'; j++, i++)
    {
        if (Family[j] >= 'A' && Family[j] <= 'Z')
            Unite[i] = (int)Family[j] + 32;
        else
            Unite[i] = Family[j];
    }
    Unite[i] = '\0';
    cout << Unite;
}

int main()
{
    nameConversion();
}