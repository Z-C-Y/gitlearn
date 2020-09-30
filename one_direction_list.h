#ifndef __SINGLE_LIST_H__
#define __SINGLE_LIST_H__

typedef short item_type;

#pragma pack(1)
typedef struct one_direction_list_head
{
    item_type node_cnt;
    item_type first_item_idx;
    item_type last_item_idx;
    /* data */
}odlist_head_t;
#pragma pack()

void odlist_init(odlist_head_t *odlist_head);

item_type odlist_get_cnt(odlist_head_t *odlist_head);

void odlist_insert(item_type *item_array, odlist_head_t* odlist_head, item_type item_idx, s32 (*cmp_func)(item_type item1,item_type item2));



#endif