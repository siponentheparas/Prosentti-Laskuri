#include <iostream>

#include "calculations.h"

void percentage()
{
    while (true)
    {
        int total;
        int other;
        cout << "Yhteensä: ";
        cin >> total;
        cout << "vähemmistö: ";
        cin >> other;
        float total1 = static_cast<float>(total);
        float other1 = static_cast<float>(other);
        float answer = other1 / total1 * 100.0f;
        int ans = static_cast<int>(answer);
        if (ans < 0)
        {
            ans = abs(ans);
        }
        cout << "Vastaus on: " << ans << "%" << endl;
        cout << "Haluatko laskea uudestaan [y] kyllä [n] ei: ";
        char tum;
        cin >> tum;
        if (tum == 'y')
        {
            system("clear");
        }
        else if (tum == 'n')
        {
            system("clear");
            break;
        }
    }
}

void change()
{
    while (true)
    {
        cout << "Alkuperäinen arvo: ";
        int original;
        cin >> original;
        cout << "Uusi arvo: ";
        int after;
        cin >> after;
        float orig = static_cast<float>(original);
        float aft = static_cast<float>(after);
        float change = orig - aft;
        float answer = change / orig * 100.0f;
        int ans = static_cast<int>(answer);
        if (ans < 0)
        {
            ans = abs(ans);
        }
        cout << "Vastaus on " << ans << "%" << endl;
        cout << "Haluatko laskea uudestaan [y] kyllä [n] ei: ";
        char tum;
        cin >> tum;
        if (tum == 'y')
        {
            system("clear");
        }
        else
        {
            system("clear");
            break;
        }
    }
}

void compare()
{
    while (true)
    {
        cout << "Vertaava arvo: ";
        float first;
        cin >> first;
        cout << "Verrattava arvo: ";
        float second;
        cin >> second;
        float diff = first - second;
        float answer = diff / second * 100;
        int ans = static_cast<int>(answer);
        if (ans < 0)
        {
            ans = abs(ans);
        }
        cout << "vastaus on " << ans << "%" << endl;
        cout << "Haluatko laskea uudestaan [y] kyllä [n] ei: ";
        char tum;
        cin >> tum;
        if (tum == 'y')
        {
            system("clear");
        }
        else
        {
            system("clear");
            break;
        }
    }
}

void percent_value()
{
    while (true)
    {
        cout << "Prosentit: ";
        float percentage;
        cin >> percentage;
        cout << "Arvo: ";
        float value;
        cin >> value;
        float answer = percentage / 100 * value;
        int ans = static_cast<int>(answer);
        if (ans < 0)
        {
            ans = abs(ans);
        }
        cout << "Vastaus on: " << ans << endl;
        cout << "Haluatko laskea uudestaan [y] kyllä [n] ei: ";
        char tum;
        cin >> tum;
        if (tum == 'y')
        {
            system("clear");
        }
        else
        {
            system("clear");
            break;
        }
    }
}
