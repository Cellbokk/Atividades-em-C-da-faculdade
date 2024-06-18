int soma (int *p, int *q){
    return (*p + *q);
}
int subt (int *p, int *q){
    return (*p - *q);
}
int divi (int *p, int *q){
    if (*q != 0) {
        return (*p / *q);
    } else {
        printf("Erro: divisao por zero!\n");
        return 0; 
    }
}
int multi (int *p, int *q){
    return (*p * *q);
}
int menu (void){
    printf("escolha entre as opcoes:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
}
int escolha (void){
    int esco;
    printf("Digite aqui:");
    scanf("%d", &esco);
    return (esco);
}
