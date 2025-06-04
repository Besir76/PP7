# Erklärung der Kompilierungsstufen in Task 1 (PP7)

**1. sample.c → sample.i (Preprocessing):**  
Der Präprozessor ersetzt `#include`-Anweisungen (z. B. `#include <stdio.h>`) durch den kompletten Code der Header-Dateien.

**2. sample.i → sample.s (Compilation):**  
Der Compiler übersetzt den C-Code in Assembler-Code. Dabei wird z. B. aus `printf()` ein Aufruf zu `puts@PLT`.

**3. sample.s → sample.o (Assembling):**  
Der Assembler verwandelt den Assembler-Code in Maschinen-Code (Objektdatei im ELF-Format).

**4. sample.o → sample (Linking):**  
Der Linker verbindet die Objektdatei mit Bibliotheken und erzeugt die ausführbare Datei `sample`.

**Beobachtung:**  
Der gesamte Ablauf zeigt, wie C-Code systematisch in eine lauffähige Datei überführt wird – Schritt für Schritt.

