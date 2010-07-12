/* list.h -- CoAP list structures
 *
 * (c) 2010 Olaf Bergmann <bergmann@tzi.org>
 */

#ifndef _COAP_LIST_H_
#define _COAP_LIST_H_

struct coap_linkedlistnode {
  struct coap_linkedlistnode *next;
  void *data;
};

typedef struct coap_linkedlistnode coap_list_t;

/* adds node to given queue, ordered by specified order function */
int coap_insert(coap_list_t **queue, coap_list_t *node, 
		int (*order)(void *, void *node) );

/* destroys specified node */
int coap_delete(coap_list_t *node);

/* removes all items from given queue and frees the allocated storage */
void coap_delete_list(coap_list_t *queue);

#endif /* _COAP_LIST_H_ */
