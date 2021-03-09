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
- Il est très facile de trouver des résolutions/solutions de ce test en ligne, aussi vous serez jugé sur votre capacité de structurer votre code
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

Une séquence de Collatz se définie comme ceci, pour un entier n donné

- Si n est pair, on renvoie `n/2`
- Si n est impair, on renvoie `3n + 1`

Par exemple, en commencant par 13, on génére la séquence suivante

```
13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
```

Nous pouvons voir qu'en commencant par 13 (et en finissant par 1) la séquence contient 10 termes. Même si cela n'a pas été prouvé (Problème de Collatz), il est admis que quelque soit le nombre de départ, on termine toujours sur 1.

**Quel nombre, inférieur à 1 million, produit la séquence la plus longue ?**


### Problème #2

Chez Folhomee, nous utilisons un vérificateur de mot de passe qui indique les critères à respecter pour les mots de passe. Dans cet exercice, Nous allons chercher à calculer la totalité de mot de passe qu'il est possible d'avoir pour un vérificateur de mot de passe donnée.

Ce dernier doit respecter les règles suivante :

- C'est une chaine de 6 nombres
- Sa valeur est comprise entre `382345` et `843167`
- On a au moins 2 chiffres qui sont adjacents (comme 22 dans 1**22**345)
- Quand on lit les chiffres de gauche à droite, ils ne peuvent pas décroitre : C'est à dire qu'ils sont soit égaux soit supérieurs (comme 111123 ou 1356789)

Par exemple :

- `555555` est bon
- `555560` n'est pas bon (on a des chiffres qui décroissent)
- `456789` n'est pas bon (on a pas de double)

**Combien de mots de passe différents** peut-on créer avec ces règles ?

#### Bonus

> À ne faire que si vous avez tout fini

On rajoute la règle suivante :

- Les deux nombres adjacents ne peuvent pas faire parti d'un groupe plus large de même nombre

Par exemple :

- `555555` n'est plus bon (le double 5 fait parti d'un groupe plus grand)
- `444455` est bon car même si le double 4 fait parti d'un groupe plus grand, on a quand même un double 2

**Combien de mots de passe différents** peut-on créer avec ces règles (les précédentes et la nouvelle) ?

### Problème #3

Chez Folhomee, nous classifions nos annonces en utilisant le moteur d'indexation de notre base de données. Dans cet exercice nous allons manipuler un moteur d'indexation particulier pour retrouver la place d'un objet en base de données.

Pour notre classification, nous allons utiliser pour nos ID un modèle de *partionnement d'espace binaire en deux dimension*, en écrivant nos chaine de caractère pour les ID de cette manière : `FBFBBFFRLR`, en ecrivant :

- `F` pour Front
- `B` pour Back
- `R` pour Right
- `L` pour Left

Nous allons classifier nos objets dans une matrice dans une matrice de 128 * 8, soit 1024 possibilité (on est sur une petit base de données :D )

Les 7 premiers caractères seront soit `F` soit `B`, qui doivent représenter exactement une des 128 lignes de notre matrice de positionnement. Chaque lettre vous indique dans quelle moitié se situe l'objet de cette manière : On prend la première lettre qui indique si on est dans la première moitié `F` (0 à 63) ou la seconde `B` (64 jusqu'à 127), puis la prochaine indique dans quelle moitié et ainsi de suite jusqu'à que vous ayez une seule ligne

Par exemple, en considérant les 7 premieres caractères de `FBFBBFFRLR`

- `F` veut dire la première partie, donc 0 à 63
- `B` veut dire la seconde partie, donc 32 à 63
- `F` veut dire la première partie, donc 32 à 47
- `B` veut dire la seconde partie, donc 40 à 47
- `B` veut dire la seconde partie, donc 44 à 47
- `F` veut dire la première partie, donc 44 à 45
- `F` veut dire la première partie, donc 44

Les 3 dernières lettres seront soit `L` soit `R`, qui doivent représenter les colonnes dans notre matrice, de la même manière que précédemment

Par exemple pour `FBFBBFFRLR`

- `R` veut dire la seconde partie, donc 4 à 7
- `L` veut dire la première partie, donc 4 à 5
- `R` veut dire la seconde partie, donc 5

Donc si on décode notre ID, l'objet en base se trouve sur la 44ème ligne et à la 5ème colonne.

Pour faciliter la lecture et offusquer un peu notre système, on va donner une ID publique à chaque objet en fonction de son placement dans notre matrice : Pour cela on va multiplier la ligne par 8 et lui ajouter la colonne. Dans notre exemple ca veut dire `44 * 8 + 5 = 357`

Voici quelques autres exemples :

- `BFFFBBFRRR` : ligne 70, colonne 7, id publique 567
- `FFFBBBFRRR` : ligne 14, colonne 7, id publique 119
- `BBFFBBFRLL` : ligne 102, colonne 4, id publique 820

[Votre input](https://raw.githubusercontent.com/FOLHOMEE/test-technique-stagiaire/master/input_3.txt) consiste en une liste d'ID, **quelle est la plus haute ID publique de la liste ?**
