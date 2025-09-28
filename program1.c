#include<stdio.h>
void main()
{
    float temperature, critical_temp = 100, threshold = 80;
    int days;
    printf("Enter your temperature: ");
    scanf("%f", &temperature);
    printf("How many days have you had a temperature above 100°F: ");
    scanf("%d", &days);

    if (temperature <= threshold) {
        printf("Patient status: Normal\n");
    } else if (temperature > threshold && temperature <= critical_temp) {
        printf("Patient status: Warning\n");
    } else {
        if (days >= 3) {
            int dengue_symptoms, typhoid_symptoms;
            printf("Do you have rashes and muscle pain? (1 for Yes, 0 for No): ");
            scanf("%d", &dengue_symptoms);
            if (dengue_symptoms == 1) {
                printf("Patient status: Dengue suspected (symptoms: rashes, muscle pain)\n");
            } else {
                printf("Do you have abdominal pain and diarrhea? (1 for Yes, 0 for No): ");
                scanf("%d", &typhoid_symptoms);
                if (typhoid_symptoms == 1) {
                    printf("Patient status: Typhoid suspected (symptoms: abdominal pain, diarrhea)\n");
                } else {
                    printf("Patient status: High fever, further diagnosis needed\n");
                }
            }
        } else {
            printf("Patient status: Fever present, monitor it , take medicine on time\n");
        }
    }
}