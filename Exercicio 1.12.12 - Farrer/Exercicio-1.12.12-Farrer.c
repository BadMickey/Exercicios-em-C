#include <stdio.h>
int main()
{
    int i, totalrepro, reprofreq;
    float matricula[100], nota1[100], nota2[100], nota3[100], frequencia[100], notaFinal[100];
    float maiorNota, menorNota, contadorNota = 0, mediaTurma, preprofreq;

    printf("Entrada de Dados:");
    for (i = 0; i <= 100; i++)//vai ler 100x
    {
        printf("\nNumero da matricula do aluno %d: ", i+1);
        scanf("%f", &matricula[i]);
        printf("\nNota 1 do aluno %d: ", i+1);
        scanf("%f", &nota1[i]);
        printf("\nNota 2 do aluno %d: ", i+1);
        scanf("%f", &nota2[i]);
        printf("\nNota 3 do aluno %d: ", i+1);
        scanf("%f", &nota3[i]);
        printf("\nNumero de aulas que o aluno %d assistiu: ", i+1);
        scanf("%f", &frequencia[i]);
    }
    
    for (i = 0; i <= 100; i++)
    {
        notaFinal[i] = (nota1[i] + nota2[i] + nota3[i]) / 3;
        contadorNota += notaFinal[i];
    }
    mediaTurma = contadorNota / 3;
    
    maiorNota = menorNota = notaFinal[0];
    for (i = 1; i <= 100; i++)
    {
        if (notaFinal[i] > maiorNota)
        {
            maiorNota = notaFinal[i];
        }
        if (menorNota > notaFinal[i])
        {
            menorNota = notaFinal[i];
        }
    }

    printf("\n\n\nSaida de Dados:\n");
    for (i = 0; i <= 100; i++)
    {
        printf("\nNumero da matricula do aluno %d e %.0f: ", i+1, matricula[i]);
        printf("\nNumero de aulas que o aluno %d assistiu e %.2f ", i+1, frequencia[i]);
        printf("\nNota final do aluno %d e %.2f \n", i+1, notaFinal[i]);
        if (notaFinal[i] >= 60 && frequencia[i] >= 40)
        {
            printf("\nAluno Aprovado!");
        }
        else if (notaFinal[i] >= 60 && frequencia[i] < 40)
        {
            printf("\nAluno Reprovado!");
            totalrepro+=1;
            reprofreq+=1;
        }
        else
        {
            printf("\nAluno Reprovado!");
            totalrepro+=1;
        }
    }

    printf("\nMaior nota: %.2f", maiorNota);
    printf("\nMenor nota: %.2f", menorNota);
    printf("\nMédia da turma: %.2f", mediaTurma);
    printf("\nTotal de alunos reprovados: %d", totalrepro);
    printf("\nPorcentagem de Alunos reprovados por infrequência: %d%%", reprofreq);//Cada aluno reprovado vai equivaler a 1% dos 100 alunos.
    return 0;
}
