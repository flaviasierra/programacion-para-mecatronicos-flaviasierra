#include <stdio.h>
/*Eleccion.
El programa obtiene el total de votos de cada candidato y el porsentaje correspondiente. Tambien considera votos nulos.

VOT, C1, C2, C3, C4, C5, C6, NU, SVO: Variables de tipo entero.
PO1, PO2, PO3, PO4, PO5, PON: VARIABLE DE TIPO REAL.*/

void main (void)

{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;
    float PO1, PO2, PO3, PO4, PO5, PON;

printf("Ingrese el primer voto: ");
scanf("%d", &VOT);
while (VOT)
{
    switch(VOT)
    {
        case 1: C1++; break;
         case 2: C2++; break;
          case 3: C3++; break;
           case 4: C4++; break;
            case 5: C5++; break;
             default: NU++; break;
    }
    printf("Ingrese el siguiente voto -0 para terminar-: ");
    scanf("%d", &VOT);

}
SVO = C1 + C2 + C3 + C4 + C5 + NU;
PO1 =((float) C1 / SVO) * 100;
PO1 =((float) C2 / SVO) * 100;
PO1 =((float) C3 / SVO) * 100;
PO1 =((float) C4 / SVO) * 100;
PO1 =((float) C5 / SVO) * 100;
PO1 =((float) NU / SVO) * 100;

printf("\nTotal de votos: %d", SVO);

printf("\n\nCandidato 1: %d votos - - porcentaje: %5.2f",C1, PO1);
printf("\nCandidato 2: %d votos - - porcentaje: %5.2f", C2, PO2);
printf("\nCandidato 3: %d votos - - porcentaje: %5.2f", C2, PO2);
printf("\nCandidato 4: %d votos - - porcentaje: %5.2f", C2, PO2);
printf("\nCandidato 5: %d votos - - porcentaje: %5.2f", C2, PO2);
printf("\nNulos      : %d votos - - porcentaje: %5.2f", C2, PO2);
  return 0;
}
