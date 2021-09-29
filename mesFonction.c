//
// Created by Sam on 29/09/2021.
//

int getMax(int a,int b) {
    int max = 0;
    return (a > b) ? a : b;
}

int multiplesecond(int a,int b){
    printf("Entrez un nombre entier a :");
    scanf("%d", &a);
    printf("Entrez un nombre entier b:");
    scanf("%d", &b);
    if (a % b == 0) {
        printf("Vrai.");
    } else {
        printf("Faux.");
    }
}
int multipledetrois(){
    const int trois = 3;
    int entier = 0;
    printf("Entrez un nombre entieer :");
    scanf("%d", &entier);
    if (entier >= 10) {
        printf("L'entier est supérieur ou égal à 10.\r\n");
    } else {
        printf("L'entier n'est pas supérieur ou égal à 10.\r\n");
    }
    if (entier % trois == 0) {
        printf("L'entier est un multiple de 3.");
    } else {
        printf("L'entier n'est pas un multiple de 3.");
    }
    }
int Moyenne(){
    float note1 = 0.0f;
    float note2 = 0.0f;
    float note3 = 0.0f;
    printf("Rentrer trois notes comprises entre 0 et 20: \r\n");
    scanf("%f %f %f", &note1, &note2, &note3);
    while (note1 < 0 || note1 > 20) {
        printf("-1 \r\n");
        scanf("%f", &note1);
    }
    while (note2 < 0 || note2 > 20) {
        printf("-1 \r\n");
        scanf("%f", &note2);
    }
    while (note3 < 0 || note3 > 20) {
        printf("-1 \r\n");
        scanf("%f", &note3);
    }
    printf("%f", (note1+note2+note3) / 3);
}
