# pipex

🇫🇷

Le but du projet "Pipex" est d'implémenter un programme en C qui simule le fonctionnement des pipes dans un shell UNIX.  
Ce programme prend quatre arguments : deux noms de fichiers et deux commandes shell avec leurs paramètres.  
Le programme doit fonctionner exactement comme la commande `shell < file1 cmd1 | cmd2 > file2`.

Le code doit respecter la Norme imposée par 42 (voir pdf).

__Comment tester le programme__ ?

* Exécutez la commande `make` à la racine du répertoire.
* Créez un fichier à la racine du projet (par exemple "infile") et remplissez le de caractères.
* Exécutez la commande `./pipex infile "cat" "wc -l" outfile` qui compte le nombre de lignes dans un fichier. Cette commande doit être identique à `< infile cat | wc -l > outfile`.
* Vous pouvez maintenant `cat outfile` et remarquez que le programme marche comme attendu.
  
__D'autres exemples__ :

* `./pipex infile "grep 'string'" "wc -l" outfile` doit être identique à `< infile grep 'string' | wc -l > outfile`. Compte combien de fois 'string' apparaît dans le fichier infile puis ffiche ce nombre dans outfile.
* `./pipex infile "ls -l" "grep '.txt'" outfile` doit être identique à `< infile ls -l | grep '.txt' > outfile`. Filtre et affiche dans outfile les fichiers '.txt' listés dans infile.

🇬🇧

The goal of the "Pipex" project is to implement a C program that simulates the operation of pipes in a UNIX shell.
This program takes four arguments: two filenames and two shell commands with their parameters.
The program should work exactly like the command `shell < file1 cmd1 | cmd2 > file2`.

The code must respect the Norm imposed by 42 (see pdf).

![Rating](rating.png)
