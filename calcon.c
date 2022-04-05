#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int choice;

//Standard Calculator

void stand()
{
    int ch;
    float a, b;
    char op;
    do
    {
        system("cls");
        system("color f2");
        printf("\n\n<+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+> Standard Calculator <+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+>\n\n");
        printf("\n1.Addition\n\n2.Subtraction\n\n3.Multiplication\n\n4.Division\n\n5.Expression Evaluator\n\n6.Main Menu\n\n7.Exit\n\n\nChoose An Operation : ");
        scanf("%d", &ch);
        if ((ch != 5) && (ch < 7) && (ch != 6))
        {
            printf("\n\nEnter Two Numbers : ");
            scanf("%f %f", &a, &b);
        }
        switch(ch)
        {
        case 1:
            printf("\n\nResult : %.2f + %.2f = %.2f\n\n", a, b, a + b);
            printf("\nPress Any Key To Continue....");
            getch();
            break;
        case 2:
            printf("\n\nResult : %.2f - %.2f = %.2f\n\n", a, b, a - b);
            printf("\nPress Any Key To Continue....");
            getch();
            break;
        case 3:
            printf("\n\nResult : %.2f * %.2f = %.2f\n\n", a, b, a * b);
            printf("\nPress Any Key To Continue....");
            getch();
            break;
        case 4:
            printf("\n\nResult : %.2f / %.2f = %.2f\n\n", a, b, a / b);
            printf("\nPress Any Key To Continue....");
            getch();
            break;
        case 5:
            system("cls");
            printf("\n\n<+-*/+-*/+-*/+-*/+-*/+-*/+-*/+-*/> Expression Evaluator <+-*/+-*/+-*/+-*/+-*/+-*/+-*/+-*/>\n\n");
            printf("\n\nSyntax : 'Operand' 'Operator' 'Operand'\n\n\n\nEx : 3 + 4\n\n");
            printf("\n\nEnter A Binary Expression : ");
            scanf("%f %c %f", &a, &op, &b);
            switch (op)
            {
            case '+':
                printf("\n\nResult : %.2f + %.2f = %.2f\n", a, b, a + b);
                printf("\n\n\nPress Any Key To Continue....");
                getch();
                break;
            case '-':
                printf("\n\nResult : %.2f - %.2f = %.2f\n", a, b, a - b);
                printf("\n\n\nPress Any Key To Continue....");
                getch();
                break;
            case '*':
                printf("\n\nResult : %.2f * %.2f = %.2f\n", a, b, a * b);
                printf("\n\n\nPress Any Key To Continue....");
                getch();
                break;
            case '/':
                printf("\n\nResult : %.2f / %.2f = %.2f\n", a, b, a / b);
                printf("\n\n\nPress Any Key To Continue....");
                getch();
                break;
            case '>':
                if (a > b)
                {
                    printf("\n\nResult : True\n\n");
                }
                else
                {
                    printf("\n\nResult : False\n\n");
                }
                printf("\n\n\nPress Any Key To Continue....");
                getch();
                break;
            case '<':
                if (a < b)
                {
                    printf("\n\nResult : True\n\n");
                }
                else
                {
                    printf("\n\nResult : False\n\n");
                }
                printf("\n\n\nPress Any Key To Continue....");
                getch();
                break;
            case '=':
                if (a == b)
                {
                    printf("Result : Both Are Equal !\n\n");
                }
                else
                {
                    printf("\n\nResult : Both Are Not Equal !\n\n");
                }
                printf("\n\n\nPress Any Key To Continue....");
                getch();
                break;
            default:
                printf("\n\nInvalid Operator !\n\n");
                printf("\n\nPress Any Key To Continue....");
                getch();

            }
            break;
        case 6:
            main();
            break;
        case 7:
            printf("\n\n<----------------------------------> Thank You ! <---------------------------------->\n\n");
            exit(0);
            break;
        default:
            printf("\n\nInvalid Input ! Try Again !\n\n");
            getch();
        }
    }
    while ((ch != 7) && (ch != 6));
}

//Age Calculator

void age()
{
    int d, m, y, bd, bm, by, op;
    while (op != 2 && op != 3)
    {
        system("cls");
        system("color e4");
        printf("\n\n<%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-> Age Calculator <%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%-%->\n\n");
        printf("\n1.Calculate Age\n\n2.Main Menu\n\n3.Exit\n\nChoose An Option : ");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            printf("\n\nEnter The Current Date (dd mm yyyy) : ");
            scanf("%d %d %d", &d, &m, &y);
            printf("\n\nEnter Your Date Of Birth (dd mm yyyy) : ");
            scanf("%d %d %d", &bd, &bm, &by);
            if ((bd > 30) || (bm > 12) || (by >= y))
            {
                printf("\n\nInvalid Date !\n\n");
                printf("Press Any Key To Continue....");
                getch();
            }
            else
            {
                if (y > by)
                {
                    if (m > bm)
                    {
                        if (d >= bd)
                        {
                            printf("\n\nAge : %d Year(s) | %d Month(s) | %d Day(s)\n\n", y - by, m - bm, d - bd);
                            printf("\nPress Any Key To Continue....");
                            getch();
                        }
                        else if (d < bd)
                        {
                            printf("\n\nAge : %d Year(s) | %d Month(s) | %d Day(s)\n\n", y - by - 1, m - bm - 1, d + 30 - bd);
                            printf("\nPress Any Key To Continue....");
                            getch();
                        }
                    }
                    else if (m <= bm)
                    {
                        if (d >= bd)
                        {
                            printf("\n\nAge : %d Year(s) | %d Month(s) | %d Day(s)\n\n", y - by - 1, m + 12 - bm, d - bd);
                            printf("\nPress Any Key To Continue....");
                            getch();
                        }
                        else if (d < bd)
                        {
                            printf("\n\nAge : %d Year(s) | %d Month(s) | %d Day(s)\n\n", y - by - 1, m + 11 - bm, d + 30 - bd);
                            printf("\nPress Any Key To Continue....");
                            getch();
                        }
                    }
                }
            }
            break;
        case 2:
            main();
            break;
        case 3:
            printf("\n\n<----------------------------------> Thank You ! <---------------------------------->\n\n");
            exit(0);
            break;
        default:
            printf("\n\Invalid Input ! Try Again !\n\n");
            getch();
        }
    }
}

//BMI Calculator

void bmi()
{
    int opt;
    float bm, w, h;
    while ((opt != 2) && (opt != 3))
    {
        system("cls");
        system("color 3f");
        printf ("\n\n<``````````````````````````````````````> BMI Calculator <``````````````````````````````````````>\n\n");
        printf ("\n1.Calculate BMI\n\n2.Main Menu\n\n3.Exit\n\n\nChoose An Option : ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf ("\nEnter Your Weight (In Kg) : ");
            scanf("%f", &w);
            printf ("\nEnter Your Height (In Mts) : ");
            scanf("%f", &h);
            bm = w / (h * h);
            printf ("\n\nYour BMI Is %.2f\n\n", bm);
            if (bm < 18)
            {
                printf ("\nYou Are Underweight !\n\n");
            }
            else if (bm >= 18 && bm <= 24)
            {
                printf ("\nYou Are Normal !\n\n");
            }
            else if (bm > 24)
            {
                printf ("\nYou Are Overweight !\n\n");
            }
            printf ("\nPress Any Key To Continue....");
            getch();
            break;
        case 2:
            main();
            break;
        case 3:
            printf ("\n\n<----------------------------------> Thank You ! <---------------------------------->\n\n");
            exit(0);
            break;
        default:
            printf ("\n\nInvalid Input ! Try Again !\n\n");
            getch();
        }
    }
}

//Converter

void converter()
{
    int opt, op;
    float temp, len, area, volume, mass;
    while ((op != 6) && (op != 7))
    {
        system("cls");
        system("color f5");
        printf ("\n\n< ??????????????????????????????????????? > Converter < ??????????????????????????????????????? >\n\n");
        printf ("\n1.Temperature\n\n2.Length\n\n3.Area\n\n4.Volume\n\n5.Mass\n\n6.Main Menu\n\n7.Exit\n\n\nChoose An Option : ");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            system("cls");
            printf ("\n\nUnits Of Temperature : \n\n\n1.Kelvin\n\n2.Fahrenheit\n\n3.Celsius\n\n\nChoose An Option : ");
            scanf("%d", &opt);
            switch (opt)
            {
            case 1:
                printf ("\n\nEnter The Temperature In Kelvin : ");
                scanf("%f", &temp);
                printf ("\n\nTemperature In Fahrenheit : %.2f\n\nTemperature In Degree Celsius : %.2f\n\n", 1.8*(temp - 273) + 32, temp - 273);
                printf ("\n\nPress Any Key To Continue....");
                getch();
                break;
            case 2:
                printf("\n\nEnter The Temperature In Fahrenheit : ");
                scanf("%f", &temp);
                printf("\n\nTemperature In Kelvin : %.2f\n\nTemperature In Degree Celsius : %.2f\n\n", 273 - ((temp - 32) * 0.555556),(temp - 32) * 0.555556);
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            case 3:
                printf("\n\nEnter The Temperature In Degree Celsius : ");
                scanf("%f", &temp);
                printf("\n\nTemperature In Fahrenheit : %.2f\n\nTemperature In Kelvin : %.2f\n\n", 1.8 * temp + 32, 273 + temp);
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            default:
                printf("\n\nInvalid Input !\n\n");
                getch();
            }
            break;
        case 2:
            system("cls");
            printf("\n\nUnits Of Length : \n\n\n1.Meters\n\n2.Miles\n\n3.Nautical Miles\n\n4.Feet\n\n5.Inches\n\n6.Yards\n\n\nChoose An Option : ");
            scanf("%d", &opt);
            switch (opt)
            {
            case 1:
                printf("\n\nEnter The Length In Meters : ");
                scanf("%f", &len);
                printf("\n\nLength In Miles : %f\n\nLength In Nautical Miles : %f\n\nLength In Feet : %.2f\n\nLength In Inches : %.2f\n\nLenght In Yards : %.2f\n\n", len * 62E-5, len * 54E-5, len * 3.281, len * 39.37, len * 1.094);
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            case 2:
                printf("\n\nEnter The Length In Miles : ");
                scanf("%f", &len);
                printf("\n\nLength In Meters : %.2f\n\nLength In Nautical Miles : %f\n\nLength In Feet : %.2f\n\nLength In Inches : %.2f\n\nLenght In Yards : %.2f\n\n", len * 1609.344, len * 0.868961, len * 5280, len * 63360, len * 1760);
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            case 3:
                printf("\n\nEnter The Length In Nautical Miles : ");
                scanf("%f", &len);
                printf("\n\nLength In Miles : %.2f\n\nLength In Meters : %.2f\n\nLength In Feet : %.2f\n\nLength In Inches : %.2f\n\nLenght In Yards : %.2f\n\n", len * 1.1508, len * 1852, len * 6076.1155, len * 72913.3863, len * 2025.371832);
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            case 4:
                printf("\n\nEnter The Length In Feet : ");
                scanf("%f", &len);
                printf("\n\nLength In Miles : %f\n\nLength In Nautical Miles : %f\n\nLength In Meters : %f\n\nLength In Inches : %.2f\n\nLenght In Yards : %.2f\n\n", len * 189E-6, len *165E-6, len * 0.3048, len * 12, len * 0.333334);
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            case 5:
                printf("\n\nEnter The Length In Inches : ");
                scanf("%f", &len);
                printf("\n\nLength In Miles : %f\n\nLength In Nautical Miles : %f\n\nLength In Feet : %f\n\nLength In Meters : %f\n\nLenght In Yards : %f\n\n", len * 16E-6, len * 14E-6, len * 0.083333, len * 0.0254, len * 0.027778);
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            case 6:
                printf("\n\nEnter The Length In Yards : ");
                scanf("%f", &len);
                printf("\n\nLength In Miles : %f\n\nLength In Nautical Miles : %f\n\nLength In Feet : %.2f\n\nLength In Inches : %.2f\n\nLenght In Meters : %.2f\n\n", len * 568E-6, len *494E-6, len * 3, len * 36, len * 0.9144);
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            default:
                printf("\n\nInvalid Input !\n\n");
                getch();
            }
            break;
        case 3:
            system("cls");
            printf("\n\nUnits Of Area : \n\n\n1.Square Meters\n\n2.Square Miles\n\n3.Square Feet\n\n4.Square Inches\n\n5.Square Yards\n\n6.Acres\n\n7.Ares\n\n8.Hectares\n\n\nChoose An Option : ");
            scanf("%d", &opt);
            switch (opt)
            {
            case 1:
                printf("\n\nEnter The Area In Square Meters : ");
                scanf("%f", &area);
                printf("\n\nArea In Square Miles : %f\n\nArea In Square Feet : %.2f\n\nArea In Square Inches ;  %.2f\n\nArea In Square Yards : %.2f\n\nArea In Acres : %f\n\nArea In Ares : %f\n\nArea In Hectares : %f\n\n\n", area * 39E-8, area * 10.764, area * 1550, area * 1.196, area * 247.11E-6, area * 0.01, area * 10E-5);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 2:
                printf("\n\nEnter The Area In Square Miles : ");
                scanf("%f", &area);
                printf("\n\nArea In Square Meters : %.2f\n\nArea In Square Feet : %.2f\n\nArea In Square Inches ;  %.2f\n\nArea In Square Yards : %.2f\n\nArea In Acres : %.2f\n\nArea In Ares : %.2f\n\nArea In Hectares : %.2f\n\n\n", area * 2589988, area * 2.78784E7, area * 4.0144896E9, area * 3.0976E6, area * 640, area * 25899.88, area * 258.9988);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 3:
                printf("\n\nEnter The Area In Square Feet : ");
                scanf("%f", &area);
                printf("\n\nArea In Square Miles : %f\n\nArea In Square Meters : %f\n\nArea In Square Inches ;  %.2f\n\nArea In Square Yards : %f\n\nArea In Acres : %f\n\nArea In Ares : %f\n\nArea In Hectares : %f\n\n\n", area * 3587E-11, area * 0.0929, area * 144, area * 0.111111, area * 2295.6806E-8, area * 929.0304E-6, area * 929.0304E-8);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 4:
                printf("\n\nEnter The Area In Square Inches : ");
                scanf("%f", &area);
                printf("\n\nArea In Square Miles : %f\n\nArea In Square Feet : %f\n\nArea In Square Meters ;  %f\n\nArea In Square Yards : %f\n\nArea In Acres : %f\n\nArea In Ares : %f\n\nArea In Hectares : %f\n\n\n", area * 2E-10, area * 694.44E-5, area * 645.16E-6, area * 771.604938E-6, area * 159.422E-9, area * 645.16E-8, area * 10E-9);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 5:
                printf("\n\nEnter The Area In Square Yards : ");
                scanf("%f", &area);
                printf("\n\nArea In Square Miles : %f\n\nArea In Square Feet : %.2f\n\nArea In Square Inches ;  %.2f\n\nArea In Square Meters : %f\n\nArea In Acres : %f\n\nArea In Ares : %f\n\nArea In Hectares : %f\n\n\n", area * 322.831E-9, area * 9, area * 1296, area * 0.836127, area * 2066.11251E-6, area * 836.12736E-5, area * 836.127E-7);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 6:
                printf("\n\nEnter The Area In Acres : ");
                scanf("%f", &area);
                printf("\n\nArea In Square Miles : %f\n\nArea In Square Feet : %.2f\n\nArea In Square Inches ;  %.2f\n\nArea In Square Yards : %.2f\n\nArea In Square Meters : %.2f\n\nArea In Ares : %.2f\n\nArea In Hectares : %f\n\n\n", area * 156.25E-5, area * 43560, area * 6272640, area * 4840, area * 4046.873, area * 40.46873, area * 0.4046873);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 7:
                printf("\n\nEnter The Area In Ares : ");
                scanf("%f", &area);
                printf("\n\nArea In Square Miles : %f\n\nArea In Square Feet : %.2f\n\nArea In Square Inches ;  %.2f\n\nArea In Square Yards : %.2f\n\nArea In Acres : %.2f\n\nArea In Square Meters : %f\n\nArea In Hectares : %f\n\n\n", area * 39E-6, area * 1076.4, area * 155000, area * 119.6, area * 0.02471, area * 100, area * 0.01);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 8:
                printf("\n\nEnter The Area In Hectares : ");
                scanf("%f", &area);
                printf("\n\nArea In Square Miles : %f\n\nArea In Square Feet : %.2f\n\nArea In Square Inches ;  %.2f\n\nArea In Square Yards : %.2f\n\nArea In Acres : %.2f\n\nArea In Ares : %.2f\n\nArea In Square Meters : %.2f\n\n\n", area * 386.10217E-5, area * 107639.11, area * 15500031, area * 11959.9, area * 2.471054, area * 100, area * 10000);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            default:
                printf("\n\nInvalid Input !\n\n");
                getch();
            }
            break;
        case 4:
            system("cls");
            printf("\n\nUnits Of Volume : \n\n\n1.Litres\n\n2.Cubic Meters\n\n3.Cubic Feet\n\n4.Cubic Inches\n\n5.Cubic Yards\n\n6.Gallons\n\n\nChoose An Option : ");
            scanf("%d", &opt);
            switch(opt)
            {
            case 1:
                printf("\n\nEnter The Volume In Litres : ");
                scanf("%f", &volume);
                printf("\n\nVolume In Cubic Meters : %f\n\nVolume In Cubic Feet : %f\n\nVolume In Cubic Inches : %f\n\nVolume In Cubic Yards : %f\n\nVolume In Gallons : %f\n\n", volume * 0.001, volume *0.03532, volume * 61.024, volume * 0.001308, volume * 0.22);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 2:
                printf("\n\nEnter The Volume In Cubic Meters : ");
                scanf("%f", &volume);
                printf("\n\nVolume In Litres : %f\n\nVolume In Cubic Feet : %f\n\nVolume In Cubic Inches : %f\n\nVolume In Cubic Yards : %f\n\nVolume In Gallons : %f\n\n", volume * 1000, volume * 35.32, volume * 61024, volume * 1.308, volume * 220);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 3:
                printf("\n\nEnter The Volume In Cubic Feet : ");
                scanf("%f", &volume);
                printf("\n\nVolume In Cubic Meters : %f\n\nVolume In Litres : %f\n\nVolume In Cubic Inches : %f\n\nVolume In Cubic Yards : %f\n\nVolume In Gallons : %f\n\n", volume * 0.028317, volume * 28.317, volume * 1728, volume * 0.037037, volume * 6.228835);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 4:
                printf("\n\nEnter The Volume In Cubic Inches : ");
                scanf("%f", &volume);
                printf("\n\nVolume In Cubic Meters : %f\n\nVolume In Cubic Feet : %f\n\nVolume In Litres : %f\n\nVolume In Cubic Yards : %f\n\nVolume In Gallons : %f\n\n", volume * 16E-6, volume * 579E-6, volume * 0.016, volume * 21E-6, volume * 360.5E-5);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 5:
                printf("\n\nEnter The Volume In Cubic Yards : ");
                scanf("%f", &volume);
                printf("\n\nVolume In Cubic Meters : %f\n\nVolume In Cubic Feet : %f\n\nVolume In Cubic Inches : %f\n\nVolume In Litres : %f\n\nVolume In Gallons : %f\n\n", volume * 0.764555, volume * 27, volume * 46656, volume * 764.555, volume * 168.178557);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 6:
                printf("\n\nEnter The Volume In Gallons : ");
                scanf("%f", &volume);
                printf("\n\nVolume In Cubic Meters : %f\n\nVolume In Cubic Feet : %f\n\nVolume In Cubic Inches : %f\n\nVolume In Cubic Yards : %f\n\nVolume In Litres : %f\n\n", volume * 454.6E-5, volume * 0.160544, volume * 277.4194, volume * 594.6E-5, volume * 4.546);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            default:
                printf("\n\nInvalid Input !\n\n");
                getch();
            }
            break;
        case 5:
            system("cls");
            printf("\n\nUnits Of Mass : \n\n\n1.Kilograms\n\n2.Tonne\n\n3.Grains\n\n4.Ounces\n\n5.Pounds\n\n6.Stones\n\n\nChoose An Option : ");
            scanf("%d", &opt);
            switch (opt)
            {
            case 1:
                printf("\n\nEnter The Weight In Kilograms : ");
                scanf("%f", &mass);
                printf("\n\nWeight In Tonnes : %f\n\nWeight In Grains : %f\n\nWeight In Ounces : %f\n\nWeight In Pounds : %f\n\nWeight In Stones : %f\n\n", mass * 0.001, mass * 15432.358, mass * 35.273966, mass * 2.204623, mass * 0.157473);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 2:
                printf("\n\nEnter The Weight In Tonnes : ");
                scanf("%f", &mass);
                printf("\n\nWeight In Kilograms : %f\n\nWeight In Grains : %f\n\nWeight In Ounces : %f\n\nWeight In Pounds : %f\n\nWeight In Stones : %f\n\n", mass * 1000, mass * 15432358, mass * 35273.966, mass * 2204.623, mass * 157.473);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 3:
                printf("\n\nEnter The Weight In Grains : ");
                scanf("%f", &mass);
                printf("\n\nWeight In Tonnes : %f\n\nWeight In Kilograms : %f\n\nWeight In Ounces : %f\n\nWeight In Pounds : %f\n\nWeight In Stones : %f\n\n", mass * 648.91E-10, mass * 648.91E-7, mass * 228.5714E-5, mass * 142.857E-6, mass * 102.041E-7);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 4:
                printf("\n\nEnter The Weight In Ounces : ");
                scanf("%f", &mass);
                printf("\n\nWeight In Tonnes : %f\n\nWeight In Grains : %f\n\nWeight In Kilograms : %f\n\nWeight In Pounds : %f\n\nWeight In Stones : %f\n\n", mass * 283.4952E-7, mass * 437.5, mass * 0.02834952, mass * 0.0625, mass * 446.4286E-5);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 5:
                printf("\n\nEnter The Weight In Pounds : ");
                scanf("%f", &mass);
                printf("\n\nWeight In Tonnes : %f\n\nWeight In Grains : %f\n\nWeight In Ounces : %f\n\nWeight In Kilograms : %f\n\nWeight In Stones : %f\n\n", mass * 453.59237E-6, mass * 7000, mass * 16, mass * 0.45359237, mass * 0.071429);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 6:
                printf("\n\nEnter The Weight In Stones : ");
                scanf("%f", &mass);
                printf("\n\nWeight In Tonnes : %f\n\nWeight In Grains : %f\n\nWeight In Ounces : %f\n\nWeight In Pounds : %f\n\nWeight In Kilograms : %f\n\n", mass * 635.029318E-5, mass * 98000, mass * 224, mass * 14, mass * 6.35029318);
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            default:
                printf("\n\nInvalid Input !\n\n");
                getch();
            }
            break;
        case 6:
            main();
            break;
        case 7:
            printf("\n\n<----------------------------------> Thank You ! <---------------------------------->\n\n");
            exit(0);
            break;
        default:
            printf("\n\nInvalid Input !\n\n");
            getch();
        }
    }

}


//EMI Calculator

void emi()
{
    int option, t;
    float p, r, i, emi;
    while ((option != 3) && (option != 4))
    {
        system("cls");
        system("color E");
        printf("\n\n<-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-> EMI Calculator <-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=->\n\n");
        printf("\n1.Calculate Interest\n\n2.Calculate EMI\n\n3.Main Menu\n\n4.Exit\n\n\nChoose Option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            system("cls");
            printf("\n\nInterest Calculator : \n\n");
            printf("\n\nEnter The Principal Amount : ");
            scanf("%f", &p);
            printf("\n\nEnter The Rate Of Interest (In Percentage) : ");
            scanf("%f", &r);
            printf("\n\nEnter The Tenure (In Months) : ");
            scanf("%d", &t);
            i = (p * t * r) / 100;
            printf("\n\nThe Interest Is Rs.%.2f\n\n", i);
            printf("\n\nPress Any Key To Continue....");
            getch();
            break;
        case 2:
            system("cls");
            printf("\n\nEMI Calculator : \n\n");
            printf("\n\nEnter The Principal Amount : ");
            scanf("%f", &p);
            printf("\n\nEnter The Rate Of Interest (Annual) : ");
            scanf("%f", &r);
            r /= 1200;
            printf("\n\nEnter The Tenure (In Months) : ");
            scanf("%d", &t);
            emi = (p*r*pow(1 + r, t)) / (pow(1 + r, t) - 1);
            printf("\n\nThe Monthly EMI Is %.2f\n\n", emi);
            printf("\n\nPress Any Key To Continue....");
            getch();
            break;
        case 3:
            main();
            break;
        case 4:
            printf("\n\n<----------------------------------> Thank You ! <---------------------------------->\n\n");
            exit(0);
            break;
        default:
            printf("\n\nInvalid Input ! Try Again !\n\n");
            getch();
        }
    }
}

//Octal To Decimal

int octtodec(int n)
{
    int i = 0, r, dec = 0;
    while (n > 0)
    {
        r = n % 10;
        n /= 10;
        dec += pow(8, i) * r;
        i++;
    }
    return dec;
}

//Octal To Binary

int octtobin(int n)
{
    n = dectobin(octtodec(n));
    return n;
}

//Binary To Decimal

int bintodec(int n)
{
    int i = 0, r, dec = 0;
    while (n > 0)
    {
        r = n % 10;
        n /= 10;
        dec += pow(2, i) * r;
        i++;
    }
    return dec;
}

//Binary To Octal

int bintooct(int n)
{
    n = dectooct(bintodec(n));
    return n;
}

//Decimal To Binary

int dectobin(int n)
{
    int i = 0, r, bin = 0;
    while (n > 0)
    {
        r = n % 2;
        n /= 2;
        bin += pow(10, i) * r;
        i++;
    }
    return bin;
}

//Decimal To Octal

int dectooct(int n)
{
    int i = 0, r, oct = 0;
    while (n > 0)
    {
        r = n % 8;
        n /= 8;
        oct += pow(10, i) * r;
        i++;
    }
    return oct;
}

//Mean, Median, Mode, Standard Deviation, Variance

float stat(int opt)
{
    int n, i, j, maxCount = 0, count = 0;
    float m, *p, sum = 0, std, d = 0, var, mode, med, temp, maxVal;
    p = (float *)malloc(n*sizeof(float));
    printf("\n\nEnter The Number Of Observation : ");
    scanf("%d", &n);
    printf("\n\nEnter %d Observations : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", (p + i));
        sum += *(p + i);
    }
    m = sum / n;
    for (i = 0; i < n; i++)
    {
        d += pow((m - *(p + i)), 2);
    }
    std = d / n;
    var = sqrt(std);
    for (i = 0; i <= n - 1; i++)
    {
        count = 0;
        for (j = i + 1; j <= n - 1; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
            if (*(p + i) == *(p + j))
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxVal = *(p + i);
        }
    }
    med = *(p + n / 2);
    mode = maxVal;

    switch (opt)
    {
    case 1:
        return m;
        break;
    case 2:
        return med;
        break;
    case 3:
        return mode;
        break;
    case 4:
        return std;
        break;
    case 5:
        return var;
        break;
    default:
        return 0;
    }
}

//Matrices

void mat(int choice)
{
    system("cls");
    int a[10][10], b[10][10], c[10][10], m, n, p, q, i, j, k;
    if (choice == 1)
    {
        printf("\n\nMatrix Addition : \n\n\n");
        printf("Enter The Order Of Matrix A (m x n) : ");
        scanf("%d %d",&m, &n);
        printf("\n\nEnter The Order Of Matrix B (p x q): ");
        scanf("%d %d", &p, &q);
        if ((m != p) || (n != q))
        {
            printf("\n\nMatrix Addition Not Possible\n\n");
        }
        else
        {
            printf("\n\nEnter The Matrix A (Row-Wise) : ");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }
            printf("\n\nEnter The Matrix B (Row-Wise) : ");
            for (i = 0; i < p; i++)
            {
                for (j = 0; j < q; j++)
                {
                    scanf("%d", &b[i][j]);
                    c[i][j] = a[i][j] + b[i][j];
                }
            }
            printf("\n\nThe Addition Of Two Matrices Is : \n\n");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    printf("%d\t", c[i][j]);
                }
                printf("\n");
            }
        }
    }
    else if (choice == 2)
    {
        printf("\n\nMatrix Multiplication : \n\n\n");
        printf("Enter The Order Of Matrix A (m x n) : ");
        scanf("%d %d",&m, &n);
        printf("\n\nEnter The Order Of Matrix B (p x q): ");
        scanf("%d %d", &p, &q);
        if (n != p)
        {
            printf("\n\nMatrix Multiplication Not Possible !\n\n");
        }
        else
        {
            printf("\n\nEnter The Matrix A (Row-Wise) : ");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }
            printf("\n\nEnter The Matrix B (Row-Wise) : ");
            for (i = 0; i < p; i++)
            {
                for (j = 0; j < q; j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < q; j++)
                {
                    c[i][j] = 0;
                    for (k = 0; k < n; k++)
                    {
                        c[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            printf("\n\nThe Product Of Two Matrices Is : \n\n");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < q; j++)
                {
                    printf("%d\t", c[i][j]);
                }
                printf("\n");
            }
        }
    }
    else if (choice == 3)
    {
        printf("\n\nMatrix Transpose : \n\n\nEnter The Order Of Matrix  (m x n) : ");
        scanf("%d %d",&m, &n);
        printf("\n\n\nEnter The Matrix  (Row-Wise) : ");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
                b[j][i] = a[i][j];
            }
        }
        printf("\n\nThe Transposed Matrix Is : \n\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
    }
}


//Miscellaneous Calculator

void mis()
{
    int op, opt, num;
    while ((op != 4) && (op != 5))
    {
        system("cls");
        system("color B");
        printf("\n\n<-$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$-> Miscellaneous Calculator <-$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$->\n\n");
        printf("\n\n1.Numeric System\n\n2.Matrices\n\n3.Statistics\n\n4.Main Menu\n\n5.Exit\n\n\nChoose An Option : ");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            system("cls");
            printf("\n\nNumeric System : \n\n\n1.Decimal\n\n2.Binary\n\n3.Octal\n\n\nChoose An Option : ");
            scanf("%d", &opt);
            switch (opt)
            {
            case 1:
                printf("\n\nEnter A Decimal Value : ");
                scanf("%d", &num);
                printf("\n\nValue In Binary : %d\n\nValue In Octal : %d\n\n", dectobin(num), dectooct(num));
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            case 2:
                printf("\n\nEnter A Binary Value : ");
                scanf("%d", &num);
                printf("\n\nValue In Decimal : %d\n\nValue In Octal : %d\n\n", bintodec(num), bintooct(num));
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            case 3:
                printf("\n\nEnter An Octal Value : ");
                scanf("%d", &num);
                printf("\n\nValue In Binary : %d\n\nValue In Decimal : %d\n\n", octtobin(num), octtodec(num));
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            default:
                printf("\n\nInvalid Input ! Try Again !\n\n");
                getch();
            }
            break;
        case 2:
            system("cls");
            printf("\n\nMatrices : \n\n\n1.Addition\n\n2.Multiplication\n\n3.Transpose\n\n\nChoose An Option : ");
            scanf("%d", &opt);
            switch (opt)
            {
            case 1:
                mat(opt);
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            case 2:
                mat(opt);
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            case 3:
                mat(opt);
                printf("\n\nPress Any Key To Continue....");
                getch();
                break;
            default:
                printf("\n\nInvalid Input ! Try Again !\n\n");
                getch();
            }
            break;
        case 3:
            system("cls");
            printf("\n\nStatistics : \n\n\n1.Mean\n\n2.Median\n\n3.Mode\n\n4.Standard Deviation\n\n5.Variance\n\n\nChoose An Option : ");
            scanf("%d", &opt);
            switch(opt)
            {
            case 1:
                printf("\n\nThe Mean Of The Given Data is %.2f\n\n", stat(opt));
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 2:
                printf("\n\nThe Median Of The Given Data Is %.2f\n\n", stat(opt));
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 3:
                printf("\n\nThe Mode Of The Given Data Is %.2f\n\n", stat(opt));
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 4:
                printf("\n\nThe Standard Deviation Of The Given Data is %.2f\n\n", stat(opt));
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            case 5:
                printf("\n\nThe Variance Of The Given Data is %.2f\n\n", stat(opt));
                printf("\nPress Any Key To Continue....");
                getch();
                break;
            default:
                printf("\n\nInvalid Input ! Try Again !\n\n");
                getch();
            }
            break;
        case 4:
            main();
            break;
        case 5:
            printf("\n\n<----------------------------------> Thank You ! <---------------------------------->\n\n");
            exit(0);
            break;
        default:
            printf("\n\nInvalid Input ! Try Again !\n\n");
            getch();
        }
    }

}

//Menu

void menu()
{
    system("cls");
    system("color A");
    printf("\n\n<==========================================> Menu <==========================================>\n\n");
    printf("\n1.Standard Calculator\n\n2.Age Calculator\n\n3.Converter\n\n4.EMI Calculator\n\n5.BMI Calculator\n\n6.Miscellaneous Calculator\n\n7.Exit\n\n\n\nChoose An Option : ");
    scanf("%d", &choice);
}

//Main Function

int main()
{
    char pass[20], password[20] = "hello world", c;
    int x;
    static int count = 0;
    if (count == 0)
    {
        do
        {
            system("cls");
            printf("\n\n\nEnter The Password : ");
            gets(pass);
            x = strcmp(pass, password);
            if (x == 0)
            {
                printf("\n\nPassword Matched !\n\n\nPress Any Key To Continue....");
                getch();
            }
            else
            {
                printf("\n\nIncorrect Password !\n\n\nPress 't' To Try Again !\n\n");
                c = getch();
                if (c != 't')
                {
                    exit(0);
                }
            }
            count++;
        }
        while ((c == 't') && (x != 0));
    }

    while (choice != 7)
    {
        menu();
        switch (choice)
        {
        case 1:
            stand();
            break;
        case 2:
            age();
            break;
        case 3:
            converter();
            break;
        case 4:
            emi();
            break;
        case 5:
            bmi();
            break;
        case 6:
            mis();
            break;
        case 7:
            printf("\n\n<----------------------------------> Thank You ! <---------------------------------->\n\n");
            exit(0);
            break;
        default:
            printf("\n\nInvalid Input ! Try Again !\n\n");
            getch();
        }
    }
    getch();
    return 0;
}

