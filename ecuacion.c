#include<stdio.h>
#include<math.h>

int main(){

int a , b , c , discriminante , x1 , x2 ,xr , xi ;

printf ("\t\t\tEcuacion De Segundo Grado\n");
printf ("\t\t\t_________________________\n");


do{
    printf ("Ingrese Un Numero A (> 0): \n");
    scanf ("%d", &a);
 }while(a==0);

printf ("Ingrese Un Numero B: \n");
scanf ("%d", &b);

printf ("Ingrese Un Numero C: \n");
scanf ("%d", &c);

discriminante=pow(b, 2.0)-4*a*c;
printf ("B^2 -(4*A*C) Es: %d \n ", discriminante);
 
if(discriminante>0.0){
    printf("\t\t\tLas dos raices son reales");
    x1=((-b+sqrt(discriminante))/(2.0*a));
    x2=((-b-sqrt(discriminante))/(2.0*a));

    printf("\n\t\t\tx1=%.2f   x2=%.2f", x1, x2);
}
else{
    if(discriminante==0.0){
        x1=(-b)/(2.0*a);
        printf("\n\t\t\tLa ecuacion solo tiene una raiz %.2f", x1);

    }
    else{
        xr=(-b/(2.0*a));
        xi=(sqrt(-discriminante)/(2.0*a));

        printf("\n\t\tLa raiz real es %.2f y la imaginaria es %.2f", xr, xi);

    }
}

printf("\n\n\t\t\t");
printf ("Presione Una Tecla Para Terminar");

char a = getchar();

}
