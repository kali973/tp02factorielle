Gilles COUTARD

Factorielle iterative

Ecrire une fonction qui calcule factorielle N, c'est-à-dire: N! = N * (N-1) * (N-2) * ... * 3 * 2 *1 en utilisant la boucle for.
On écrira ultérieurement (maintenant si vous savez le faire) une version récursive de factorielle

Créer un sous-répertoire dans inf720 (il est conseillé de créer un sous-répertoire pour chaque programme) et utilisez un Makefile pour compiler, en copiant ce fichier.
Attention:

    Utiliser la commande "Sauvegarder" de votre navigateur : ne pas faire de copié/collé car ce fichier contient des tabulations
    Si necessaire, changer son nom pour qu'il s'appelle Makefile, sans extension
    Adapter ce fichier en changeant les valeurs de :
     
        PROG le nom du programme qu'on veut produire
        SOURCES : la liste de votre (ou vos) fichier(s) C séparés par des blancs (ne mettez pas de .h)

On peut alors compiler dans le terminal en tapant la commande make

Il est également possible de compiler dans QtCreator en cliquant sur le marteau (en bas à gauche) ou en tapant Control-B. Un peu plus haut une barre horizontale indique l'état de la compilation. Si la barre est rouge, un problème est survenu : cliquer sur la barre pour voir les erreurs. En cliquant sur une erreur, QtCreator fait apparaître le code source correspondant.

Noter que vous devrez éventuellement cliquer sur "Liste des Projets" puis selectionner "Fichiers Systeme" pour faire apparaître les fichiers du répertoire de travail (en particulier le fichier Makefile) 