# HowTo

l'organisation du dossier

- `src/`
- `include/odsi`
- `Makefile`


## Ajouter un service
Pour ajouter un fichier, il faut ajouter le fichier .c correspondant dans `src/`, et le header dans `include/odsi`

Au besoin, s'il est necessaire, pour ajouter des sous-repertoires dans `src/`, il faut par la suite mettre à jour le `Makefile` en ajoutant une entrée pour les fichiers .c :

```Makefile
  SOURCES+=$(wildcard $(SRCDIR)/DOSSIER_CREE/*.c)
```
ou pour les fichiers assembleurs :
```Makefile
  ASOURCES+=$(wildcard $(SRCDIR)/DOSSIER_CREE/*.S)
```


## Compilation et generation de la librairie

Pour compiler executer `make` dans un terminal


## Inclure dans le code source les services

Pour inclure dans votre code source les services que vous avez mis en place, il faut :

### Etape 1

Dans le Makefile inclure la librarie ODSI. exemple

```Makefile
LIBODSI=chemin_absolut/libodsi/
LIBODSI_INC=$(LIBODSI)/include/odsiDEMO
LIBODSI_LIB=$(LIBODSI)/lib/


CFLAGS+=-I$(LIBODSI_INC)
ASFLAGS+=-I$(LIBODSI_INC)
LDFLAGS+=-L$(LIBODSI_LIB) -lodsi
```

### Etape 2

Dans votre code source, pour utiliser un service present dans la librarie, inclure en haut du fichier .c le header le contenant.

```C
#include <odsi/LE_SERVICE.h>
```
