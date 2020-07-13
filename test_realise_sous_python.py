#exerice 1

[x for x in range(1,1001) if x%3==0 or x%5==0]

#j'ai réalisé cette exercice en 10-20 secondes sachant que j'avais au préalable déjà lu l'énoncé plusieurs fois avant

#exerice 2

a=[1,2]
tourne=True
somme=0
while tourne:
    a+=[a[-1]+a[-2]]

    if a[-1] > 4000000:
        tourne=False
    if a[-1]%2==0:
        somme+=a[-1]

somme


#exerice réalisé en 2-3 minutes

#exerice 3

a=20 # on pourrait mettre 2520
tourne=True
while tourne:
    a+=1
    if (a%7==0 and a%11==0 and a%13==0 and a%16==0 and a%17==0 and a%18==0 and a%19==0 and a%20==0):
    #if (a%7==0 and a%9==0 and a%10==0 and a%8==0 ): test pour retrouver le 2520
        tourne =False
    
a

#on peut trouver mathématiquement le résultat
#en effet le résultat sera égal à 2*2*2*2*3*3*5*7*11*13*17*19= 232792560
#ce programme est fonctionnel mais prend quand même un certain temps pour afficher le résultat, je vous envoie cette première réponse, néanmois je continue ma réflexion afin
#d'améliorer le temps de réponse, je mettrais à jour git directement
#cet exercice a été réalisé en 3-4 minutes
