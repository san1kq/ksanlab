#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    char rim[10];
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    int otvet;

    setlocale(LC_ALL, "rus");
    printf("Введите код римскими цифрами: ");
    scanf("%s", rim);

    
    switch (rim[0])
    {
    case 'M': c1 = 1000; 
        break;
    case 'D': c1 = 500;  
        break;
    case 'C': c1 = 100; 
        break;
    case 'L': c1 = 50;   
        break;
    case 'X': c1 = 10;   
        break;
    case 'V': c1 = 5;    
        break;
    case 'I': c1 = 1;    
        break;
    default:  c1 = 0;    
        break;
    }

    
    switch (rim[1])
    {
    case 'M': c2 = 1000; 
        break;
    case 'D': c2 = 500;  
        break;
    case 'C': c2 = 100;  
        
        break;
    case 'L': c2 = 50;   
        break;
    case 'X': c2 = 10;   
        break;
    case 'V': c2 = 5;    
        break;
    case 'I': c2 = 1;    
        break;
    default:  c2 = 0;    
        break;
    }

    
    switch (rim[2])
    {
    case 'M': c3 = 1000; 
        break;
    case 'D': c3 = 500;
        break;
    case 'C': c3 = 100;  
        break;
    case 'L': c3 = 50;   
        break;
    case 'X': c3 = 10;   
        break;
    case 'V': c3 = 5;    
        break;
    case 'I': c3 = 1;    
        break;
    default:  c3 = 0;    
        break;
    }

    
    switch (rim[3])
    {
    case 'M': c4 = 1000; 
        break;
    case 'D': c4 = 500;  
        break;
    case 'C': c4 = 100;  
        break;
    case 'L': c4 = 50;   
        break;
    case 'X': c4 = 10;   
        break;
    case 'V': c4 = 5;    
        break;
    case 'I': c4 = 1;    
        break;
    default:  c4 = 0;    
        break;
    }

    
    otvet = c1 + c2 + c3 + c4;

    printf("Год в обычном формате: %d\n", otvet);

    return 0;
}
