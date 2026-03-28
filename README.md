# Rubik's Cube Solver 🤖🧩


Un projet de robot capable de résoudre automatiquement un Rubik’s Cube 3x3.  
Ce projet combine **Python** pour l’interface utilisateur et la résolution de l’algorithme, et **Arduino** pour contrôler les moteurs pas-à-pas qui tournent les faces du cube.

---

## Description du projet

Le Rubik's Cube Solver est un robot qui peut résoudre un Rubik's Cube en temps réel.  

**Fonctionnement :**  
1. L’utilisateur entre la couleur de chaque case du cube via une interface graphique Python.  
2. Le programme utilise l’algorithme **Kociemba** pour calculer la séquence minimale de mouvements pour résoudre le cube.  
3. Cette séquence est envoyée à l’Arduino qui contrôle **6 moteurs pas-à-pas** pour tourner les faces correspondantes et résoudre le cube automatiquement.  

Ce projet est idéal pour comprendre la robotique, l’automatisation, et les algorithmes de résolution de puzzles.

---

## Fonctionnalités

- Interface graphique Python pour entrer les couleurs du cube.  
- Vérification automatique des couleurs et de la validité du cube.  
- Algorithme de résolution **Kociemba** intégré pour trouver la solution optimale.  
- Contrôle des 6 moteurs pas-à-pas via Arduino pour exécuter les mouvements.  
- Bouton **STOP** pour interrompre la résolution en cours.  

---

## Matériel utilisé

- Arduino Mega 2560  
- 6 x Moteurs pas-à-pas NEMA 17  
- 6 x Drivers A4988  
- Alimentation 12V  
- Rubik’s Cube standard 3x3  

---

## Schéma de connexion

- Chaque moteur pas-à-pas est connecté à un driver A4988, puis à l’Arduino Mega :  
  - U, D, F, B, R, L → canaux correspondants sur Arduino  
- Arduino communique avec le PC via **port série (COM)**.  
- Les moteurs sont alimentés en 12V, Arduino peut être alimenté via USB ou 12V.  


---

## Contact pour le code complet et fichiers STL
Pour obtenir le code complet Arduino + Python et les fichiers STL 3D, vous pouvez me contacter directement à :
**devranagiksu@gmail.com**





