## 📄 E-KFC
School Project | Workshop -- Smart Campagne -- Octobre 2022

**Projet en Groupe -- Gagnant du Workshop EPSI Grenoble**

## ✏️ Consigne pour le projet :

L'étendu du réseau internet en France métropolitaine a facilité la migration des familles qui quittent la ville pour vivre à la campagne et travailler à distance. La crise sanitaire a favorisé cet environnement de travail qui bénéficie notamment le secteur de service.
Qu'en est-il de nos campagnes et de nos agriculteurs, éleveurs, horticulteurs et en général tous les acteurs liés à la production alimentaire ? Comment les nouvelles technologies pourraient les aider à mieux travailler en tenant en compte toutes les variables des métiers en lien avec la nature ? Comment peut-on créer une smart camapagne ?
Les propositions peuvent toucher n'importe quel type d'activité agricole. La solution idéale serait un prototype en état de marche ou une proposition avec une analyse complète et pertinente avec les contraintes technologiques mises en place. Vous pouvez aussi penser à une application développée selon les directives de l'éco-conception. Les contraintes à tenir en compte : viabilité de la solution (prix, taille de l'appareillage, connectivité, analyse du marché), l'intérêt de votre solution (retombées écologiques, allégement du travail, ...).

LIVRABLES ATTENDUS
Rendu final :

L'idée proposée doit être fonctionnelle.
Toute innovation permettant d’améliorer l’expérience utilisateur sera appréciée.
Rendus intermédiaires
Lundi, fin de journée : point avec le coach local pour obtenir son feu vert pour la poursuite du projet.

COMPETENCES TRANSVERSALES ET PROFESSIONNELLES VISEES:
SAVOIR-ÊTRE :

- Travailler de façon autonome vers un objectif commun à toute l’équipe
- Collaborer et travailler en équipe
- Communiquer et rendre compte auprès de ses partenaires et de sa hiérarchie

SAVOIR-FAIRE :
- Rechercher des solutions innovantes
- Concevoir une solution digitale innovante

VOTRE BOITE A OUTILS POUR CE WORKSHOP :

- Langages de programmation, environnements et outils libres
- L’hébergement du site/de l’application est libre, au choix des équipes avec l’aide du ou des coachs
- Les mails doivent être envoyés en mettant en copie le/la Responsable Pédagogique de votre école. Tout mail doit avoir en objet : la ville du Campus + le nom de l’équipe. Et les pièces jointes doivent être bien nommées pour être clairement identifiables.
Merci de respecter les consignes. Tout envoi de rendu qui ne respecterait pas ce formalisme ne sera pas évalué.

Jury local : vendredi
Matin :
Un jury local est organisé par chacun des campus. Ce jury donne lieu à une évaluation.
Le/la Responsable Pédagogique communique le nom du vainqueur à l’équipe nationale.
Après-midi :
13h00-15h00 : l’équipe gagnante de chaque campus réalise 2 vidéos (pitch et démonstration technique).
15h00 au plus tard : les vidéos et rendus (lien vers la solution et documentation) sont envoyés sur le mail du Workshop.
- Un pitch vidéo de 3 min : Ce pitch doit pouvoir convaincre un public non technique. Il doit convaincre de l’utilité et de la pertinence de la solution choisie.
- Une vidéo de démonstration : Une vidéo de 5 minutes maximum faisant la démonstration du fonctionnement de la solution et des choix techniques.
La solution doit être fonctionnelle et ne doit pas nécessiter d’installation.
Afin de permettre une meilleure évaluation des rendus des équipes gagnantes par un panel de jurys appartenant aux différents campus, les résultats finaux seront diffusés en milieu de semaine suivante.

### Languages et Technologies utilisées : 
* Carte Arduino UNO
* Carte Réseau ESP8266
* Capteur de température TMP36
* Arduino IDE
* Python & C
* BDD - PhpMyAdmin

## 🐔 Explication du Projet E-KFC:

Notre but est de concevoir une application mobile prête à aider nos eleveurs de poule à automatiser un poulaillier. 
Nous avons donc conçu une applications mobile avec différentes fonctionnalitées : 
  * Détecter la température dans le poulailler
  * Détection du npmbre de poule à l'intérieur, avec un caméra pour surveiller à tout moment
  * Détection du nombre d'oeufs présent
  * Statistique présente sur l'application mobile pour avoir une moyenne d'oeuf, de température, ect...

### 💻 Mon rôle dans ce projet
  * Câblage, configuration et codage en C de l'arduino et de la carte ESP8266.
  * Création de la Base de donnée sur phpmyadmin pour récolter les températures obtenue
  * Relation entre l'arduino et la base de donnée en Python
  * Configuration du Serveur Web présent sur l'ESP8266 pour envoyé les données sur ce serveur et ainsi les récoltés pour l'application mobile

### 👨‍💻 Code sur GitHub
  * Code Python Relation BDD et Arduino ( XAMP est utilisé pour la BDD en local )
  * Code C ( WebServ ) arduino pour relation ESP8266 et TMP36
  * Code C ( temperatursensor ) arduino pour capter la température sans l'ESP8266 --- Utilisation pour les tests de capteur

## Bibliothèques installées
  * Entrer http://arduino.esp8266.com/stable/package_esp8266com_index.json, https://dl.espressif.com/dl/package_esp32_index.json sur l'IDE Arduino dans   File>Preferences>Additional Boards Manager URLs field. Vous pouvez ajouter plusieurs URL en les séparants de virgule.
  
  
