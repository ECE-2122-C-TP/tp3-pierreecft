//
// Created by Escofet Pierre on 20/09/2021.
//
#include <stdio.h>


/*
// Exercice 1
int main (void) {
    int ent1 = 0, ent2 = 0;
    printf("Choisir un entier : \n");
    scanf("%d %d", &ent1, &ent2);
    if (ent1 > ent2)
    {
        printf("L'entier le plus grand est %d \n", ent1);
    }
    if (ent2 > ent1)
    {
        printf("L'entier le plus grand est %d 2\n", ent2);
    }
    */
/*
// Exercice 2
    int main(void) {
        int longueur, largeur;
        printf("Donner la valeur de la longueur, puis de la largeur \n");
        scanf("%d %d", &longueur, &largeur);
        printf("L'aire vaut %d \n", longueur * largeur);
        printf("Le périmètre vaut %d \n", (longueur + largeur) * 2);
        return 0;
    }
    */
/*
// Exercice 3
    int main(void) {
        const int entier;
        printf("Choisir un entier : \n");
        scanf("%d", &entier);
        if (entier%3==0 && entier>=10)
        {
            printf("Cet entier est un multiple de 3 et est supérieur ou égal à 10.");
        }
        else
        {
            printf("Cet entier n'est pas un multiple de 3 et est supérieur ou égal à 10.");
        }
        return 0;
    }
    */
/*
// Exercice 4
    int main(void) {
        int age, statut;
        printf("Quel est votre age ? \n");
        scanf("%d", &age);
        printf("1 si vous etes etudiant, 0 sinon ? \n");
        scanf("%d", &statut);

        if (age < 12) {
            printf("Vous bénéficiez du tarif enfant à 4 euros");
        }
        else if (age > 11 && age < 17) {
            printf("Vous bénéficiez du tarif jeune à 6 euros");
        }
        else if (age < 27 && statut == 1) {
            printf("Vous bénéficiez du tarif jeune à 6 euros");
        }
        else if (age > 65){
            printf("Vous bénéficiez du tarif senior à 6 euros");
        }
        else {
            printf("Plein tarif à 9 euros")
        return 0;
    }
    */
/*
// Exercice 5
    int main(void) {
        int numero;
        printf("Quel est le numero de boisson ? \n");
        scanf("%d", &numero);
        if (numero == 1 || numero == 2 || numero == 3) {
            printf("Vous avez selectionne la boisson froide %d \n", numero);
        }
        else if (numero == 10 || numero == 11) {
            printf("Vous avez selectionne la boisson chaude %d \n", numero);
        }
        else {
            printf("ERREUR \n");
        }
        return 0;
    }
    */
/*
// Exercice 6
    int main(void) {
        float note1, note2, note3;
        printf("Saisir 3 notes au clavier \n");
        scanf("%f %f %f", &note1, &note2, &note3);
        if (note1 > 20) {
            printf("Impossible. Saisir une nouvelle note 1 \n");
            scanf("%f", &note1);
        }
        else if (note1 < 0) {
            printf("Impossible. Saisir une nouvelle note 1 \n");
            scanf("%f", &note1);
        }
        if (note2 > 20) {
            printf("Impossible. Saisir une nouvelle note 2 \n");
            scanf("%f", &note2);
        }
        else if (note2 < 0) {
            printf("Impossible. Saisir une nouvelle note 2 \n");
            scanf("%f", &note2);
        }
        if (note3 > 20) {
            printf("Impossible. Saisir une nouvelle note 3 \n");
            scanf("%f", &note3);
        }
        else if (note2 < 0) {
            printf("Impossible. Saisir une nouvelle note 3 \n");
            scanf("%f", &note3);
        }

        printf("La moyenne vaut %f \n", (note1 + note2 + note3)/3);

        return 0;
    }
    */
/*
// Exercice 7
int main(void) {
    int classes_ouvertes, nbr_eleves, somme, i=0;
    printf("Nombre de classes ouvertes ? \n");
    scanf("%d", &classes_ouvertes);
    for (i = 0; i < classes_ouvertes; i++) {
        printf("Nombre d'élèves dans cette classe ? \n");
        scanf("%d", &nbr_eleves);
        somme = nbr_eleves + nbr_eleves;
    }
    printf("le nombre total d'élèves dans l'école est %d \n", somme);
    return 0;
*/
/*
// Exercice 8
int main(void) {
    int ent;
    printf("Saisir un entier \n");
    scanf("%d", &ent);
    while (ent % 2 != 0 || ent % 7 != 0) {
        printf("Ce n'est ni un multiple de 7, ni un multiple de 2, veuillez ressaisir : \n");
        scanf("%d", &ent);
    }
    printf("L'entier choisi est bien un multiple de 2 et de 7");
    return 0;
}
*/
/*
// Exercice 9
int main(void) {
    int nbr_pierres, nbr_etages=0;
    printf("Quel est le nombre de pierres disponible ? \n");
    scanf("%d", &nbr_pierres);
    while (nbr_pierres >= ((nbr_etages+1)*(nbr_etages+1))) {
        nbr_etages=nbr_etages+1;
        nbr_pierres=nbr_pierres-nbr_etages*nbr_etages;
    }
    printf("Vous pouvez construire %d", nbr_etages);
    return 0;
/*

}





