// rea decompile_all
// name: FUN_006a1c70
// address: 0x6a1c70
// body: available
// range: 0x6a1c70-0x6a20ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a1c70(void)

{
  FUN_00696ed4(L"file_bin_open",2);
  FUN_00696ed4(L"file_bin_rewrite",1);
  FUN_00696ed4(L"file_bin_close",1);
  FUN_00696ed4(L"file_bin_position",1);
  FUN_00696ed4(L"file_bin_size",1);
  FUN_00696ed4(L"file_bin_seek",2);
  FUN_00696ed4(L"file_bin_read_byte",1);
  FUN_00696ed4(L"file_bin_write_byte",2);
  FUN_00696ed4(L"file_text_open_read",1);
  FUN_00696ed4(L"file_text_open_write",1);
  FUN_00696ed4(L"file_text_open_append",1);
  FUN_00696ed4(L"file_text_close",1);
  FUN_00696ed4(L"file_text_read_string",1);
  FUN_00696ed4(L"file_text_read_real",1);
  FUN_00696ed4(L"file_text_readln",1);
  FUN_00696ed4(L"file_text_eof",1);
  FUN_00696ed4(L"file_text_eoln",1);
  FUN_00696ed4(L"file_text_write_string",2);
  FUN_00696ed4(L"file_text_write_real",2);
  FUN_00696ed4(L"file_text_writeln",1);
  FUN_00696ed4(L"file_open_read",1);
  FUN_00696ed4(L"file_open_write",1);
  FUN_00696ed4(L"file_open_append",1);
  FUN_00696ed4(L"file_close",0);
  FUN_00696ed4(L"file_read_string",0);
  FUN_00696ed4(L"file_read_real",0);
  FUN_00696ed4(L"file_readln",0);
  FUN_00696ed4(L"file_eof",0);
  FUN_00696ed4(L"file_eoln",0);
  FUN_00696ed4(L"file_write_string",1);
  FUN_00696ed4(L"file_write_real",1);
  FUN_00696ed4(L"file_writeln",0);
  FUN_00696ed4(L"file_exists",1);
  FUN_00696ed4(L"file_delete",1);
  FUN_00696ed4(L"file_rename",2);
  FUN_00696ed4(L"file_copy",2);
  FUN_00696ed4(L"directory_exists",1);
  FUN_00696ed4(L"directory_create",1);
  FUN_00696ed4(L"file_find_first",2);
  FUN_00696ed4(L"file_find_next",0);
  FUN_00696ed4(L"file_find_close",0);
  FUN_00696ed4(L"file_attributes",2);
  FUN_00696ed4(L"filename_name",1);
  FUN_00696ed4(L"filename_path",1);
  FUN_00696ed4(L"filename_dir",1);
  FUN_00696ed4(L"filename_drive",1);
  FUN_00696ed4(L"filename_ext",1);
  FUN_00696ed4(L"filename_change_ext",2);
  FUN_00696ed4(L"export_include_file",1);
  FUN_00696ed4(L"export_include_file_location",2);
  FUN_00696ed4(L"discard_include_file",1);
  FUN_00696ed4(L"execute_program",3);
  FUN_00696ed4(L"execute_shell",2);
  FUN_00696ed4(L"parameter_count",0);
  FUN_00696ed4(L"parameter_string",1);
  FUN_00696ed4(L"environment_get_variable",1);
  FUN_00696ed4(L"registry_write_string",2);
  FUN_00696ed4(L"registry_write_real",2);
  FUN_00696ed4(L"registry_read_string",1);
  FUN_00696ed4(L"registry_read_real",1);
  FUN_00696ed4(L"registry_exists",1);
  FUN_00696ed4(L"registry_write_string_ext",3);
  FUN_00696ed4(L"registry_write_real_ext",3);
  FUN_00696ed4(L"registry_read_string_ext",2);
  FUN_00696ed4(L"registry_read_real_ext",2);
  FUN_00696ed4(L"registry_exists_ext",2);
  FUN_00696ed4(L"registry_set_root",1);
  FUN_00696ed4(L"ini_open",1);
  FUN_00696ed4(L"ini_close",0);
  FUN_00696ed4(L"ini_read_string",3);
  FUN_00696ed4(L"ini_read_real",3);
  FUN_00696ed4(L"ini_write_string",3);
  FUN_00696ed4(L"ini_write_real",3);
  FUN_00696ed4(L"ini_key_exists",2);
  FUN_00696ed4(L"ini_section_exists",1);
  FUN_00696ed4(L"ini_key_delete",2);
  FUN_00696ed4(L"ini_section_delete",1);
  FUN_00696ed4(L"disk_free",0xffffffff);
  FUN_00696ed4(L"disk_size",0xffffffff);
  return;
}
