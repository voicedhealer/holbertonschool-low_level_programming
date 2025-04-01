#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
size_t print_list(const list_t *h){
     
    size_t count = 0;
    const list_t *data = h;

    if(h == NULL) {
        return 0;
    }
   
    while (data != NULL)
    {   
        printf("%s\n", data->str);
        count++;
        data = data->next;
    }
    return count;
}
