#include <stdio.h>
#include "tests/threads/tests.h"
#include "lib/kernel/list.h"

struct test_struct{
	struct list_elem elem;
	int num;
};



void test_simple(){
	printf("This is simple test\n");
	// struct list tmp_list;
	// list_init(&tmp_list);

	// // int i;
	// // for (i=0; i<10; i++){
	// // 	struct thread a
	// // 	list_insert_ordered(&tmp_list, )
	// // }

	// //list_push_back (struct list *list, struct list_elem *elem)
	// struct test_struct* t1;
	

	// t1 = (struct test_struct*) malloc(sizeof (struct test_struct));


	// list_push_back(&tmp_list, )


}


// void bigger(struct list_elem* a, struct list_elem*, void* aux){
// 	struct test_struct* t_a = list_entry(a, struct test_struct, elem);
// 	struct test_struct* t_b = list_entry(b, struct test_struct, elem);

// }
