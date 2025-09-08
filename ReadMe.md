# PROG - Cours de programmation année 2025 - 2026 -> V0.3
## Infos Pratique - Bonne pratique git
### Créer un compte sur un serveur GIT => pour l'ES nous utiliserons <span sytle="color:#FF0000;">Github</span>
	
* => vous créez et gérez votre **propre dépôt** (local -> serveur)
	
	A. => sur votre machine (local) -> créez un **répertoire vide** où vous voulez
	```
	// exemple sous windows 
	C:
	> mkdir c:\mesDossierGit\monDepot 
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
	C:
	> cd c:\mesDossierGit\monDepot 
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
	C:
	> mkdir c:\mesDossierGit\monDepot 
	```
	
	C. => associez votre dépot (serveur) -> à votre dépôt local (machine) 
	```
	git clone https://github.com/nomUserGit/votreNomDepotGit.git 
	``` 

*=> avec un outil graphqiue* -> sourceTree pour l'ES - GitDescktop - TortoiseGit - etc. 

## Suivi des exercices 
---

| Exercice \ Initial Etudiant | **[NAM](https://github.com/Noe-Alam)** | **[CAH](https://github.com/christophe-Allen)** | **[MBY](https://github.com/mthbnny)** | **[LDE](https://github.com/LDE10)** | **[TDS](https://github.com/TimeDol)** | **[DEA](https://github.com/DEA-v1)** | **[LMY](https://github.com/Marmitte2)** | **[VMD](https://github.com/Valentin055)** | **[AOD](https://github.com/Alexandre-legrand281)** | **[SPY](https://github.com/SgtJams)** | **[SSR](https://github.com/norlag)** | **[NTN](https://github.com/NicoTf40)** | **[SVD](https://github.com/Samuel-Es)** |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| [Ex1]()  | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex2A]() | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex2B]()   | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex2C]() | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex3]() | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex4]() | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex5]() | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex6]() | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex7]() | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex7B]() | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex8]() | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex9]() | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex10]() | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex11]() | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex12 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex13 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex14 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex15 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex16 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex17 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex18 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex19 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex20 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex21 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex22 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex23 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex24 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex25 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 

## Exercice 2
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo2)
* lien avec le chapitre 2 
* source à disposition : - 

### Groupe
* Flow chart 			=> NAM LDE AOD  	| 	verificateur => LMY VMD SVD NTN 
* Structogramme NSI		=> CAH SPY TDS		| 	verificateur => SSR MBY DEA  ^25
* Structogramme Jackson	=> LMY VMD SVD NTN	| 	verificateur => NAM LDE AOD 
* Pseudo-Code 			=> SSR MBY DEA 		| 	verificateur => CAH SPY TDS

### Suivi projet
* [Partie A](https://github.com/PBYetml/PROG_SLO1_24_25/tree/main/Exercice/Exo2) => réaliser un flow chart / pseudo code / structogramme : 
* Partie B => réaliser code selon diagramme reçu => voir état d'avancement : 
* [Partie C](https://github.com/PBYetml/PROG_SLO1_24_25/tree/main/CodeDemo/codeDemoSLO24_25/demoSLO1_24_25/demoSLO1_24_25) => réaliser un code permettant de calculer la surface d'une forme géométrique 

## Exercice 3
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo3)
* lien avec le chapitre 3 - 4  	
* source à disposition : Ex3_V02.c

## Exercice 4
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo4)
* lien avec le chapitre 3 - 4  	
* source à disposition : Ex4_V2.C

## Exercice 5
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo5)
* lien avec le chapitre 3 - 4 - 5 - 6 	
* source à disposition : - 

## [CORRECTION TEST 1 -> Q3](https://github.com/PBYetml/PROG__RESULTAS_ETUDIANTS_TEST1_SLO1_24_25)
* etat d'avancement => voir [#18](https://github.com/PBYetml/PROG__RESULTAS_ETUDIANTS_TEST1_SLO1_24_25/issues/18)
* lien avec le chapitre 3 - 4 - 5 - 6 
* source à disposition : Test 1 (individuel)  

## [CORRECTION TEST 1 -> Q6](https://github.com/PBYetml/PROG__RESULTAS_ETUDIANTS_TEST1_SLO1_24_25)
* état d'avancement => [#8](https://github.com/PBYetml/PROG__RESULTAS_ETUDIANTS_TEST1_SLO1_24_25/issues/8)
* lien avec le chapitre 3 - 4 - 5 - 6 
* source à disposition : Test 1 (individuel)  

## Exercice 6
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo6)
* lien avec le chapitre 3 - 4 - 5 - 6 	
* source à disposition : - 

## Exercice 7 
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo7)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 
* source à disposition : -

## Exercice 7B 
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo7B)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 
* source à disposition : - 

## Exercice 8
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo8)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 	
* source à disposition : Ex8.c 

## [PRJ 1](https://github.com/PBYetml/PROG_PRJ1_2024_SLO1_Resultat)
* état d'avancement => [#49](https://github.com/PBYetml/PROG_SLO1_24_25/issues/49) -> [issues](https://github.com/PBYetml/PROG_PRJ1_2024_SLO1_Resultat/issues)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7
* source à disposition : [Projet 1](https://github.com/PBYetml/PROG_PRJ1_2024_SLO1_Resultat)  

## Exercice 9
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo9)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 	
* source à disposition : Ex9.c 

## Exercice 10
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo10)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8	
* source à disposition : Ex10.c 

## Exercice 11
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo10)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8	
* source à disposition : Ex11.c 

## Exercices - Série 12
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo12)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8	
* source à disposition : Ex12.c - Ex12c.c - Ex12d.c

## Exercices - Série 13
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo13)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8 	
* source à disposition : Ex13.c - Ex13B.c - Ex13_SG.c

## Exercices - Série 14
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo14)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8  	
* source à disposition :  Ex14.c 

## Exercices - Série 15
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo15)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8  	
* source à disposition :  

## Exercices - Série 16
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo16)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8  	
* source à disposition :  Ex16.c 

## Exercices - Série 17
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo17)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8  	
* source à disposition :  Ex17.c 


voir sources étudiants concernant certaines questions : [Réponses Etudiants SLO Test1](https://github.com/PBYetml/PROG_SLO1_TEST1_23_24)

=> voir [discussion](https://github.com/PBYetml/PROG_SLO1_23_24/discussions/11) - taille d'un caractère : 
![Resultat Code Demo ](/CodeDemo/CodeDemoEtudiants/ResultatSolution.PNG)

