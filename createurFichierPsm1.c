#include <stdio.h>

int main() {
    // Nom du fichier à créer
    const char* nomFichierPsm1 = "fichierPowShelScriptModule.psm1";

    // Contenu du fichier
    const char* contenu =
    "contenu1"
    "contenu2";

    // Ouvrir le fichier en mode écriture
    FILE* fichier = fopen(nomFichierPsm1, "w");

    // Vérifier si l'ouverture du fichier a réussi
    if (fichier != NULL) {
        // Écrire le contenu dans le fichier à l'aide de fprintf
        fprintf(fichier, "%s", contenu);

        // Fermer le fichier
        fclose(fichier);

        printf("Le fichier '%s' a ete cree avec succes.\n", nomFichierPsm1);
    } else {
        // Afficher un message d'erreur si l'ouverture du fichier a échoué
        printf("Impossible de creer le fichier '%s'.\n", nomFichierPsm1);
        return 1; // Retourne un code d'erreur
    }

    return 0; // Succès
}
