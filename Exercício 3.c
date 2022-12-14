int main()
{
    float conta;
    float porcentagem;
    float gorgeta;

    printf("digite o valor da conta: ");
    scanf("%f", &conta);


    printf("digite o valor da porcentagem do garcom(sem o sinal de porcento): ");
    scanf("%f", &porcentagem);

    gorgeta = conta*porcentagem/100;

    printf("O valor da gorgeta do garcom eh : %f", gorgeta);
    }
