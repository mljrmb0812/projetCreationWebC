#include <stdio.h>

int main() {
    // Nom du fichier à créer
    const char* nomFichier = "nomFichier.extension";

    // Contenu du fichier
    const char* contenu =
    "contenu1"
    "contenu2";

    // Ouvrir le fichier en mode écriture
    FILE* fichier = fopen(nomFichier, "w");

    // Vérifier si l'ouverture du fichier a réussi
    if (fichier != NULL) {
        // Écrire le contenu dans le fichier à l'aide de fprintf
        fprintf(fichier, "%s", contenu);

        // Fermer le fichier
        fclose(fichier);

        printf("Le fichier '%s' a été créé avec succès.\n", nomFichier);
    } else {
        // Afficher un message d'erreur si l'ouverture du fichier a échoué
        printf("Impossible de créer le fichier '%s'.\n", nomFichier);
        return 1; // Retourne un code d'erreur
    }

    return 0; // Succès
}
