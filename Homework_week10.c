#include <stdio.h>
#include <string.h>

int main() {
    char student_name[3][20];
    float math_score[3], phy_score[3], chem_score[3];
    float total_math = 0, total_phy = 0, total_chem = 0;

    for (int idx = 0; idx < 3; idx++) {
        printf("ชื่อ นักเรียนคนที่ %d: ", idx + 1);
        scanf("%s", student_name[idx]);
        printf("คะแนน Math Phy Chem: ");
        scanf("%f %f %f", &math_score[idx], &phy_score[idx], &chem_score[idx]);
        
        total_math += math_score[idx];
        total_phy += phy_score[idx];
        total_chem += chem_score[idx];
    }

    printf("\n=========================================================\n");
    printf("%-20s %-10s %-10s %-10s\n", "Student (length)", "Math", "Phy", "Chem");
    printf("=========================================================\n");

    for (int idx = 0; idx < 3; idx++) {
        char display_name[30];
        sprintf(display_name, "%s (%lu)", student_name[idx], strlen(student_name[idx]));
        printf("%-20s %-10.2f %-10.2f %-10.2f\n", display_name, math_score[idx], phy_score[idx], chem_score[idx]);
    }

    printf("=========================================================\n");
    printf("%-20s %-10.2f %-10.2f %-10.2f\n", "Subject average", total_math / 3.0, total_phy / 3.0, total_chem / 3.0);
    printf("=========================================================\n");

    return 0;
}

