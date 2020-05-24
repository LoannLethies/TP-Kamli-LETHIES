Utilisation du programme: Pour lancer le programme il vous suffira de lancer le fichier .sln sous Visual Studio. Une fois chargé, il suffit de lancer le Débogueur Windows local et de suivre les instructions qui s’afficheront. (La console peut mettre du temps à s’afficher, il faut donc être patient).

 
Explication architecture: Le programme est composé de plusieurs parties afin de le rendre plus lisible. En suivant l’architecture MVC, il devient facile de se repérer dans le programme.
Trois classes ont été créés pour optimiser le travail: 
-Une classe Model dans laquelle on y retrouve toutes les fonctions permettant la création des filtres.
-Une classe View dans laquelle on y retrouve la fonction permettant l’affichage des images que vous voudrez charger.
-Une classe Controller, la fonction permettant le choix du filtre par l’utilisateur y est programmée.

Ces classes sont reliées entre-elles pour former un tout et utiliser toutes les fonctions nécessaires en gardant une certaine lisibilité dans le code. Pour se faire, elles communiquent entre elles par des systèmes d’héritage. Les fonctions Controller/Model et Model/View présentent des agrégations. Elles sont nécessaires pour le bon fonctionnement du programme. Par exemple, la fonction Controller pourra utiliser des fonctions présentent dans la classe Model.


Explication des Filtres :
-Filtre Médian :Le filtre va parcourir l'image de pixel en pixel et remplacer l'élément par la valeur moyenne des pixels voisins.
-Filtre Gaussien :Le filtre va appliquer un flou aussi appelé un lissage. Cela supprime les « bruits à haute fréquence » de l'image.
-Calcul du Gradient :Pour faire simple, l'opérateur calcule le gradient de l'intensité de chaque pixel. Cela indique la direction de la plus forte variation du clair au sombre. On se retrouve avec une image en noir et blanc.
-Dilatation :L'opérateur va calculer la valeur d'un pixel et le remplacer par la valeur maximale.
-Érosion:L'opérateur va calculer la valeur d'un pixel et le remplacer par la valeur minimale.
-Détection de contours :Permet la détection de contours en surlignant les contours sur un fond noir.
-Seuillage :Permet de passer les valeurs d'un pixel supérieur ou égale à un seuil à une valeur choisie et le reste à 0.
-Segmentation : Cette opération consiste à faire grossir les régions autour d'un point de départ.
