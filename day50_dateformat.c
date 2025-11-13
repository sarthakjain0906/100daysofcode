#include <stdio.h>

// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy

int main() {
    char date[20];
    int day, month, year;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4) {
        printf("%02d-Apr-%d\n", day, year);
    } else {
        printf("Only month 04 is supported in this format.\n");
    }

    return 0;
}
