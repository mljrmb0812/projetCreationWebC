#include <stdio.h>
/*
Ce fichier crée automatiquement une page web vierge
*/

int main()
{

    // Pointers (after *) stock the value of the memory adress
    // Ce pointr à pour projet de créer et d'ouvrir un fichier de type page web
	FILE *fichierHtml;

	/*
        Création du fichier dans l'ordinateur

        Le nom du fichier entré existe-t-il déjà ?
2
            Si oui : Il va ouvrir le fichier (penser alors à le refermer à la fin du programme avec la fonction fclose
            Si non : Il va créer le fichier et l'ouvrir grâce à la fonction fopen

        Préciser le chemin de fichier ?

            Si oui :

                Chemin de fichier : C:\Users\mlmen\pjtInfmtq\crtionSiteWebC
                Utilisation de 2 antislash pour que le programme comprenne un seul

            Si non : Le fichier est automatiquement créé dans le même dossier que celui de l'emplacement du fichier
     */

	fichierHtml = fopen("C:\\Users\\mlmen\\pjtInfmtq\\crtionSiteWebC\\dossierHtml\\essaiPWeb2.html", "w");

	// Vérification de l'ouverture du fichier
	if (fichierHtml == NULL)
    {
        printf("Impossible d'ouvrir le fichier");
        return 1;
    }


	// Ecrit sur le fichier html
	// fprintf(fichierHtml, "")
	fprintf(fichierHtml, "<!DOCTYPE html>\n\n");
	fprintf(fichierHtml, "<html>\n");
	fprintf(fichierHtml, "okidoki");
	fprintf(fichierHtml, "<html>");

	/*
	Nous pouvons remarquer qu'il y a une redondance évitable qu'il est possible d'éviter avec une boucle For
	Je vais tenter de reproduire l'affichage de l'écriture dans le fichier avec une boucle For afin
	d'éviter les redondances suivantes : "fprintf(fichierHtml,"");"
	*/

	// Close the file
	fclose(fichierHtml);

/*
Reprise du fichier createurSW avec tentative d'automatiser l'écriture fprintf

Peut-on créer un nouveau fichier C à partir d'un autre fichier C ?
Si oui, est-il possible d'imbriquer une fonction fprintf dans une fonction fprintf ?

Réponse à la première question: Pour créer un fichier C, il faut remplir la condition suivante:

- Créer un dossier pour le chemin de fichier afin de gérer plus facilement le répertoire
*/

// Peut-on créer un nouveau fichier C à partir d'un autre fichier C ?

/* ---------
    FILE *creationFichierC

    creationFichierC = fopen("C:\\Users\\mlmen\\pjtInfmtq\\crtionSiteWebC\\dossierTests\\fichierC.c", "w");

    if (fichierHtml == NULL)
    {
        printf("Impossible d'ouvrir le fichier");
        return 1;
    }
    fclose(creationFichierC)
----------- projet de creation de fichier c dans un projet specifique */
    return 0;
}
