Langage myML, un petit langage fonctionel à la ML/Haskell, avec une
syntaxe adhoc. 

En l'état actuel du code, notre compilateur permet de:
    - Compiler des expressions aritmétiques
    - Declarer des variables locales et globales ( en stockant leur position sur la pile dans une liste chainée)
    - Gerer des boucles conditionnelles ( imbriquées ou non)
    - Définir et appeler des fonctions récursives ou non (utilisant uniquement leurs parametres et pas les variables globales)

Nous avons également un problème lors de la récupération du nombre d'arguments données aux fonctions lors de leur appel, car l'affichage de celui-ci doit se faire avant la liste des arguments.

Une amélioration potentielle de notre compilateur serait de créer un fichier .fp par fonction definie, au lieu d'écraser l'unique fichier à l'heure actuelle.
De plus, quand nous avons une fonction avec des conditions dedans, nos label ne se réinitialisent pas à 0.

Comme nous n'avons pas le compilateur du P-code en exécutable, nous ne pouvons pas produire d'exécutable

Pour compiler et exécuter notre code, faire
./compil.sh test/<nom_du_test>