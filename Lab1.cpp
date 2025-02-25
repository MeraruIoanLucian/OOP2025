#include <stdio.h>

int Atoiul(const char *str) {
    int i = 0, result = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result;
}

int main() {
    int suma = 0;
    FILE *fp = fopen("input.txt", "r");
    char line[256];
    while (fgets(line, sizeof(line), fp)) {
        suma = suma + Atoiul(line);
    }
    printf("%d\n", suma);
    fclose(fp);
    return 0;
}

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int tr = 2; tr < n / 2; tr++)
        if ((n % tr ) == 0)
            return true;
    return false;
}
int main()
{
    int n;
    std::cout << "Enter a number:";
    std::cin >> n;
    if (isPrime(n))
        std::cout << n << " is prime !";
    else 
        std::cout << n << " is NOT prime !";
    return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char line[256];
    char *words[100];
    int count = 0;

    scanf("%[^\n]", line);

    char *token = strtok(line, " \t");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " \t");
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            int len_i = strlen(words[i]);
            int len_j = strlen(words[j]);

            if (len_j > len_i) {
                char *temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
            else if (len_j == len_i && strcmp(words[j], words[i]) < 0) {
                char *temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}*/