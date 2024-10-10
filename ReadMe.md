# PROG - Cours de programmation année 2024 - 2025
## Infos Pratique - Bonne pratique git

1. Créer un compte sur un serveur GIT => pour l'ES nous utiliserons <span sytle="color: #FF0000">Github</span>
	
=> **deux approches possible** <= 
* => vous créez et gérez votre **propre dépôt** (local -> serveur)
	
	A. => sur votre machine (local) -> créez un **répertoire vide** où vous voulez
	```
	// exemple sous windows 
	c:\mesDossierGit\monDepot 
	```
	B. => sur votre serveur Git, créer un dépôt (new repository) 
	
	C. => lié les deux *en ligne de commande* 
		* => ouvrir un **shell** 
		* => placez-vous dans votre répertoire vide créé précédemment :  
	
	D. => tapez les ligne de commande suivante : 	
	```
	git init
	git branch -M votreBranche
	git remote add origin https://github.com/nomUserGit/votreNomDepotGit.git
	```
	
	E. => pour mettre à jour votre dépôt distant -> placez-vous dans votre répertoire de travail local 
	```
	// exemple sous windows - répertoire de travail  
	c:\mesDossierGit\monDepot 
	```
	* => 3 commandes à connaitre 
	
	```
	git add -A 
	git commit -m "votre commentaire" 
	git push 
	```
* => vous voulez utiliser un dépôt distant (serveur) de quelqu'un 
	
	A. => depuis le serveur -> forker le dépôt qui vous intéresse sur votre serveur 
	```
	FORK -> creat fork
	```
	
	B.  => sur votre machine (local) -> créez un **répertoire vide** où vous voulez 
	```
	// exemple sous windows 
	c:\mesDossierGit\monDepot 
	```
	
	C. => associez votre dépot (serveur) -> à votre dépôt local (machine) 
	```
	git clone <adresse serveur> 
	``` 

*=> avec un outil graphqiue* -> sourceTree pour l'ES - GitDescktop - TortoiseGit - etc. 

## Suivi des exercices 
---

| Exercice \ Initial Etudiant | **[KGR](https://github.com/Kazanaris)** | **[RBN](https://github.com/Renato1226)** | **[LCX](https://github.com/REXI38)** | **[LFO](https://github.com/VolutedPenny235)** | **[FGT](https://github.com/fredericgoyet)** | **[HMT](https://github.com/HENRIIIIIIIII)** | **[ANE](https://github.com/Nintalbdly)** | **[ARD](https://github.com/Alex84628)** | **[DSY](https://github.com/Z1nghy)** | **[BSH](https://github.com/Hayatache)** | **[BZI](https://github.com/P60B40)** | 
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| [Ex1](https://github.com/ETML-ES-SLO/PROG_SLO1_24_25/tree/main/Exercice/Exo1) | OK | OK| OK| OK | OK | OK | OK | OK | OK | OK | OK | 
| [Ex2A](https://github.com/ETML-ES-SLO/PROG_SLO1_24_25/tree/main/Exercice/Exo2) | OK | OK| OK| OK | OK | OK | OK | OK | OK | OK | OK | 
| [Ex2B] | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex2C](https://github.com/PBYetml/PROG_SLO1_24_25/issues/33) | OK | OK| OK| OK | OK | OK | OK | OK | OK | OK | OK | 
| Ex3 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex4 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  
| Ex5 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex6 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex7 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex8 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex9 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex10 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex11 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex12 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex13 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex14 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex15 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex16 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex17 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex18 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex19 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex20 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex21 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex22 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex23 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex24 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  
| Ex25 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 

## Exercice 2
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo2)
* lien avec le chapitre 2 
* source à disposition : - 

### Groupe
* Flow chart 			=> BZI - LCX - ANE	| verificateur => FGT - DSY 
* Structogramme NSI		=> HMT - BSH		| verificateur => BZI - KGR - RBN 
* Structogramme Jackson	=> KGR - LFO - FGT 	| verificateur => LCX - BSH - ARD 
* Pseudo-Code 			=> RBN - DSY - ARD 	| verificateur => ANE - HMT - LFO 

### Suivi projet
* [Partie A](https://github.com/PBYetml/PROG_SLO1_24_25/tree/main/Exercice/Exo2) => réaliser un flow chart / pseudo code / structogramme : jackson ou NSI => Etat fini !!!
* Partie B => réaliser code selon diagramme reçu => voir état d'avancement : 
* [Partie C](https://github.com/PBYetml/PROG_SLO1_24_25/tree/main/CodeDemo/codeDemoSLO24_25/demoSLO1_24_25/demoSLO1_24_25) => réaliser un code permettant de calculer la surface d'une forme géométrique 

## Exercice 3
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo3)
* lien avec le chapitre 3 - 4  	
* source à disposition : Ex3_V02.c

### Suivi projet
* codage "individuel" 
* etat d'avancement => voir [#4](https://github.com/PBYetml/PROG_SLO1_23_24/issues/4)

## Exercice 4
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo4)
* lien avec le chapitre 3 - 4  	
* source à disposition : Ex4_V2.C

### Suivi projet
* codage "individuel" 
* état d'avancement => [#7](https://github.com/PBYetml/PROG_SLO1_23_24/issues/7)

## Exercice 5
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo5)
* lien avec le chapitre 3 - 4 - 5 - 6 	
* source à disposition : - 

### Suivi projet
* codage "individuel" 
* état d'avancement => [#15](https://github.com/PBYetml/PROG_SLO1_23_24/issues/15)

## Exercice 6
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo6)
* lien avec le chapitre 3 - 4 - 5 - 6 	
* source à disposition : - 

### Suivi projet
* codage "individuel" 
* état d'avancement => [#16](https://github.com/PBYetml/PROG_SLO1_23_24/issues/16)

## Exercices - Série 7
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo7)
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo7_1)
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo7_2)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 
* source à disposition : Ex7.c 

### Suivi projet
* codage "individuel" 
* état d'avancement => [#17](https://github.com/PBYetml/PROG_SLO1_23_24/issues/17)

## Exercices - Série 8
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo8)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 	
* source à disposition : - 

### Suivi projet
* codage "individuel" 
* état d'avancement => [#19](https://github.com/PBYetml/PROG_SLO1_23_24/issues/19)

## Exercices - Série 9
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo9)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 	
* source à disposition : - 

### Suivi projet
* codage "individuel" 
* état d'avancement => [#](https://github.com/PBYetml/PROG_SLO1_23_24/issues/23)

## Exercices - Série 10
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo10)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8	
* source à disposition : - 

### Suivi projet
* codage "individuel" 
* état d'avancement => [#](https://github.com/PBYetml/PROG_SLO1_23_24/issues/24)

## Exercices - Série 11
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo11)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8 	
* source à disposition : - 

### Suivi projet
* codage "individuel" 
* état d'avancement => [#](https://github.com/PBYetml/PROG_SLO1_23_24/issues/25)

## Exercices - Série 12
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo12)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8	
* source à disposition : - 

### Suivi projet
* codage "individuel" 
* état d'avancement => [#](https://github.com/PBYetml/PROG_SLO1_23_24/issues/26)

## Exercices - Série 13
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo13)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8 	
* source à disposition : - 

### Suivi projet
* codage "individuel" 
* état d'avancement => [#](https://github.com/PBYetml/PROG_SLO1_23_24/issues/27)

## Exercices - Série 14
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo14)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 	
* source à disposition : - 

### Suivi projet
* codage "individuel" 
* état d'avancement => [#](https://github.com/PBYetml/PROG_SLO1_23_24/issues/28)

## TESTS & PROJET => SLO1 
### Test1 Novembre 2023
=> voir sources étudiants concernant certaines questions : [Réponses Etudiants SLO Test1](https://github.com/PBYetml/PROG_SLO1_TEST1_23_24)

=> voir [discussion](https://github.com/PBYetml/PROG_SLO1_23_24/discussions/11) - taille d'un caractère : 
![Resultat Code Demo ](/CodeDemo/CodeDemoEtudiants/ResultatSolution.PNG)

