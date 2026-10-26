// rea decompile_all
// name: FUN_006a8a0c
// address: 0x6a8a0c
// body: available
// range: 0x6a8a0c-0x6a906f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a8a0c(void)

{
  FUN_00696ed4(L"ds_set_precision",1);
  FUN_00696ed4(L"ds_stack_create",0);
  FUN_00696ed4(L"ds_stack_destroy",1);
  FUN_00696ed4(L"ds_stack_clear",1);
  FUN_00696ed4(L"ds_stack_copy",2);
  FUN_00696ed4(L"ds_stack_size",1);
  FUN_00696ed4(L"ds_stack_empty",1);
  FUN_00696ed4(L"ds_stack_push",2);
  FUN_00696ed4(L"ds_stack_pop",1);
  FUN_00696ed4(L"ds_stack_top",1);
  FUN_00696ed4(L"ds_stack_write",1);
  FUN_00696ed4(L"ds_stack_read",2);
  FUN_00696ed4(L"ds_queue_create",0);
  FUN_00696ed4(L"ds_queue_destroy",1);
  FUN_00696ed4(L"ds_queue_clear",1);
  FUN_00696ed4(L"ds_queue_copy",2);
  FUN_00696ed4(L"ds_queue_size",1);
  FUN_00696ed4(L"ds_queue_empty",1);
  FUN_00696ed4(L"ds_queue_enqueue",2);
  FUN_00696ed4(L"ds_queue_dequeue",1);
  FUN_00696ed4(L"ds_queue_head",1);
  FUN_00696ed4(L"ds_queue_tail",1);
  FUN_00696ed4(L"ds_queue_write",1);
  FUN_00696ed4(L"ds_queue_read",2);
  FUN_00696ed4(L"ds_list_create",0);
  FUN_00696ed4(L"ds_list_destroy",1);
  FUN_00696ed4(L"ds_list_clear",1);
  FUN_00696ed4(L"ds_list_copy",2);
  FUN_00696ed4(L"ds_list_size",1);
  FUN_00696ed4(L"ds_list_empty",1);
  FUN_00696ed4(L"ds_list_add",2);
  FUN_00696ed4(L"ds_list_insert",3);
  FUN_00696ed4(L"ds_list_replace",3);
  FUN_00696ed4(L"ds_list_delete",2);
  FUN_00696ed4(L"ds_list_find_index",2);
  FUN_00696ed4(L"ds_list_find_value",2);
  FUN_00696ed4(L"ds_list_sort",2);
  FUN_00696ed4(L"ds_list_shuffle",1);
  FUN_00696ed4(L"ds_list_write",1);
  FUN_00696ed4(L"ds_list_read",2);
  FUN_00696ed4(L"ds_map_create",0);
  FUN_00696ed4(L"ds_map_destroy",1);
  FUN_00696ed4(L"ds_map_clear",1);
  FUN_00696ed4(L"ds_map_copy",2);
  FUN_00696ed4(L"ds_map_size",1);
  FUN_00696ed4(L"ds_map_empty",1);
  FUN_00696ed4(L"ds_map_add",3);
  FUN_00696ed4(L"ds_map_replace",3);
  FUN_00696ed4(L"ds_map_delete",2);
  FUN_00696ed4(L"ds_map_exists",2);
  FUN_00696ed4(L"ds_map_find_value",2);
  FUN_00696ed4(L"ds_map_find_previous",2);
  FUN_00696ed4(L"ds_map_find_next",2);
  FUN_00696ed4(L"ds_map_find_first",1);
  FUN_00696ed4(L"ds_map_find_last",1);
  FUN_00696ed4(L"ds_map_write",1);
  FUN_00696ed4(L"ds_map_read",2);
  FUN_00696ed4(L"ds_priority_create",0);
  FUN_00696ed4(L"ds_priority_destroy",1);
  FUN_00696ed4(L"ds_priority_clear",1);
  FUN_00696ed4(L"ds_priority_copy",2);
  FUN_00696ed4(L"ds_priority_size",1);
  FUN_00696ed4(L"ds_priority_empty",1);
  FUN_00696ed4(L"ds_priority_add",3);
  FUN_00696ed4(L"ds_priority_change_priority",3);
  FUN_00696ed4(L"ds_priority_find_priority",2);
  FUN_00696ed4(L"ds_priority_delete_value",2);
  FUN_00696ed4(L"ds_priority_delete_min",1);
  FUN_00696ed4(L"ds_priority_find_min",1);
  FUN_00696ed4(L"ds_priority_delete_max",1);
  FUN_00696ed4(L"ds_priority_find_max",1);
  FUN_00696ed4(L"ds_priority_write",1);
  FUN_00696ed4(L"ds_priority_read",2);
  FUN_00696ed4(L"ds_grid_create",2);
  FUN_00696ed4(L"ds_grid_destroy",1);
  FUN_00696ed4(L"ds_grid_copy",2);
  FUN_00696ed4(L"ds_grid_resize",3);
  FUN_00696ed4(L"ds_grid_width",1);
  FUN_00696ed4(L"ds_grid_height",1);
  FUN_00696ed4(L"ds_grid_clear",2);
  FUN_00696ed4(L"ds_grid_set",4);
  FUN_00696ed4(L"ds_grid_add",4);
  FUN_00696ed4(L"ds_grid_multiply",4);
  FUN_00696ed4(L"ds_grid_set_region",6);
  FUN_00696ed4(L"ds_grid_add_region",6);
  FUN_00696ed4(L"ds_grid_multiply_region",6);
  FUN_00696ed4(L"ds_grid_set_disk",5);
  FUN_00696ed4(L"ds_grid_add_disk",5);
  FUN_00696ed4(L"ds_grid_multiply_disk",5);
  FUN_00696ed4(L"ds_grid_set_grid_region",8);
  FUN_00696ed4(L"ds_grid_add_grid_region",8);
  FUN_00696ed4(L"ds_grid_multiply_grid_region",8);
  FUN_00696ed4(L"ds_grid_get",3);
  FUN_00696ed4(L"ds_grid_get_sum",5);
  FUN_00696ed4(L"ds_grid_get_max",5);
  FUN_00696ed4(L"ds_grid_get_min",5);
  FUN_00696ed4(L"ds_grid_get_mean",5);
  FUN_00696ed4(L"ds_grid_get_disk_sum",4);
  FUN_00696ed4(L"ds_grid_get_disk_max",4);
  FUN_00696ed4(L"ds_grid_get_disk_min",4);
  FUN_00696ed4(L"ds_grid_get_disk_mean",4);
  FUN_00696ed4(L"ds_grid_value_exists",6);
  FUN_00696ed4(L"ds_grid_value_x",6);
  FUN_00696ed4(L"ds_grid_value_y",6);
  FUN_00696ed4(L"ds_grid_value_disk_exists",5);
  FUN_00696ed4(L"ds_grid_value_disk_x",5);
  FUN_00696ed4(L"ds_grid_value_disk_y",5);
  FUN_00696ed4(L"ds_grid_shuffle",1);
  FUN_00696ed4(L"ds_grid_write",1);
  FUN_00696ed4(L"ds_grid_read",2);
  return;
}
