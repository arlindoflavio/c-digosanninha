int main(){
    int ddd;
    scanf("%d", &ddd);
    //Brasilia
    if (ddd==61){
        printf("Brasilia\n");
    }
    else{
        //Salvador
        if (ddd==71){
            printf("Salvador\n");
        }
        else{
            //Sao Paulo
            if (ddd==11){
                printf("Sao Paulo\n");
            }
            else{
                //Rio de Janeiro
                if (ddd==21){
                    printf("Rio de Janeiro\n");
                }
                else{
                    //Juiz de Fora
                    if (ddd==32){
                    printf("Juiz de Fora\n");
                    }
                    else{
                        //Campinas
                        if (ddd==19){
                            printf("Campinas\n");
                        }
                        else{
                            //Vitoria
                            if (ddd==27){
                                printf("Vitoria\n");
                            }
                            else{
                                //Belo Horizonte
                                if (ddd==31){
                                    printf("Belo Horizonte\n");
                                }
                                else{
                                    printf("DDD nao cadastrado\n");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
