# Test technique Folhomee stagiaire

## Contexte

Le buts de ce test technique sont les suivants :

- Nous permettre de voir votre niveau technique
- Essayer de déterminer vos capacités concernant la résolution de problèmes
- Voir si vous pourriez vous intégrer au sein de notre équipe technique

Au cours de ce test technique, vous allez réaliser de petits exercices logique

Il est important de respecter les consignes suivantes :

- Ne sautez pas un exercice, il faut respecter l'ordre
- Vous n'avez pas besoin d'utiliser un service extérieur pour les exercices
- Il est très facile de trouver des résolutions/solutions de ce test en ligne, aussi vous serez jugé sur votre capacité de structurater votre code
- Essayez de trouver une méthode pour résoudre _rapidement_ l'exercice sur une machine avec de faibles ressources

## Livrables

Les livrables minimum sont les suivants :

- Un repo github privé auquel vous aurez donné accès au CTO de Folhomee (username github : [milanito](https://github.com/milanito))
- Un ensemble de dossiers/fichiers selon une nomenclature claires
- Pour chacun des exercices, le temps que vous avez mis à le réaliser au travers d'un README que vous essayerez de détailler (le markdown est recommandé), de préférences individuellement pour chaque partie

Vous êtes libres sur le choix du langage et l'algorithme de résolution

> Pour chaque exercices, si vous avez un moyen pour nous permettre de le lancer/tester, c'est toujours mieux

## Exercices


### Problème #1

Si nous listons tous les nombres naturels inférieurs à 10 qui sont des multiples de 3 ou 5, nous obtenons 3, 5, 6 et 9. La somme de ces multiples est 23.

Réalisez un programme pour trouver la somme de tous les multiples de 3 ou 5 en dessous de 1000.

### Problème #2

Chaque nouveau terme dans la séquence de Fibonacci est généré en ajoutant les deux termes précédents. En commençant par 1 et 1, les 10 premiers termes seront:

1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

En considérant les termes de la séquence de Fibonacci dont les valeurs ne dépassent pas quatre millions, réaliser un programme pour trouver la somme des termes pairs.

### Problème #3

Dans cet exercice, nous allons travailler sur le décryptage d'un plan de navigation, et nous allons ensuite calculer la [distance de Manhattan](https://en.wikipedia.org/wiki/Taxicab_geometry) du bateau, par rapport à son point de départ. Les instructions de navigation (votre input) se composent d'une séquence d'actions à un seul caractère associées à des valeurs d'entrée entières :

- L'action N signifie se déplacer vers le nord de la valeur donnée.
- L'action S signifie se déplacer vers le sud de la valeur donnée.
- L'action E signifie se déplacer vers l'est de la valeur donnée.
- L'action W signifie se déplacer vers l'ouest de la valeur donnée.
- L'action L signifie tourner à gauche le nombre de degrés donné.
- L'Action R signifie tourner à droite le nombre de degrés donné.
- L'Action F signifie avancer de la valeur donnée dans la direction à laquelle le navire fait actuellement face.

Le navire commence par faire face à l'est. Seules les actions L et R changent la direction du navire. (Autrement dit, si le navire fait face à l'est et que l'instruction suivante est N10, le navire se déplacerait vers le nord de 10 unités, mais se déplacerait toujours vers l'est si l'action suivante était F.)

#### Par exemple:

```
F10
N3
F7
R90
F11
```

Ces instructions seraient traitées comme suit:

- F10 déplacerait le navire de 10 unités vers l'est (car le navire commence par faire face à l'est) vers l'est 10, le nord 0.
- N3 déplacerait le navire de 3 unités du nord à l'est 10, au nord 3.
- F7 déplacerait le navire de 7 unités supplémentaires vers l'est (car le navire est toujours face à l'est) vers l'est 17, nord 3.
- R90 ferait tourner le navire à droite de 90 degrés et faire face au sud; il reste à l'est 17, au nord 3.
- F11 déplacerait le navire de 11 unités sud-est 17, sud 8.

A la fin de ces instructions, la distance Manhattan du navire (somme des valeurs absolues de sa position est / ouest et de sa position nord / sud) de sa position de départ est 17 + 8 = 25.

Déterminez où mènent les instructions de navigation. Quelle est la distance de Manhattan entre cet endroit et la position de départ du navire ?

Voici [votre input](https://raw.githubusercontent.com/FOLHOMEE/test-technique-stagiaire/master/input_3.txt)
