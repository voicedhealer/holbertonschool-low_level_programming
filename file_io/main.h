#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdint.h> /* Pour uint16_t, uint32_t, uintptr_t */

/* Définir EI_NIDENT si non défini */
#ifndef EI_NIDENT
#define EI_NIDENT 16
#endif

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(const char *msg);
void display_elf_header(int fd);
const char *get_osabi_string(unsigned char osabi);
const char *get_type_string(uint16_t type);

/**
 * struct elf_header - Représente la structure d'un en-tête ELF.
 *
 * @e_ident: Tableau d'octets identifiant le fichier comme un fichier ELF.
 * @e_type: Type du fichier objet (par exemple, ET_REL, ET_EXEC, ET_DYN).
 * @e_machine: Architecture de la machine (par exemple, EM_X86_64).
 * @e_version: Version du fichier objet (doit être EV_CURRENT).
 * @e_entry: Adresse virtuelle du point d'entrée pour les fichiers exécutables.
 * @e_phoff: Décalage en octets de la table des en-têtes de programme.
 * @e_shoff: Décalage en octets de la table des en-têtes de section.
 * @e_flags: Indicateurs spécifiques au processeur.
 * @e_ehsize: Taille de l'en-tête ELF en octets.
 * @e_phentsize: Taille en octets d'une entrée dans la table des en-têtes de programme.
 * @e_phnum: Nombre d'entrées dans la table des en-têtes de programme.
 * @e_shentsize: Taille en octets d'une entrée dans la table des en-têtes de section.
 * @e_shnum: Nombre d'entrées dans la table des en-têtes de section.
 * @e_shstrndx: Index de la table des noms de section.
 */
typedef struct elf_header
{
	unsigned char e_ident[EI_NIDENT];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uintptr_t e_entry;
	uintptr_t e_phoff;
	uintptr_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} elf_header_t;

#endif /* MAIN_H */
