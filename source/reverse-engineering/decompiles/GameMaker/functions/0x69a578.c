// rea decompile_all
// name: FUN_0069a578
// address: 0x69a578
// body: available
// range: 0x69a578-0x69a991 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069a578(void)

{
  FUN_00696ed4(L"is_real",1);
  FUN_00696ed4(L"is_string",1);
  FUN_00696ed4(L"random",1);
  FUN_00696ed4(L"random_range",2);
  FUN_00696ed4(L"irandom",1);
  FUN_00696ed4(L"irandom_range",2);
  FUN_00696ed4(L"random_set_seed",1);
  FUN_00696ed4(L"random_get_seed",0);
  FUN_00696ed4(L"randomize",0);
  FUN_00696ed4(L"choose",0xffffffff);
  FUN_00696ed4(&DAT_0069aaf8,1);
  FUN_00696ed4(L"round",1);
  FUN_00696ed4(L"floor",1);
  FUN_00696ed4(L"ceil",1);
  FUN_00696ed4(L"sign",1);
  FUN_00696ed4(L"frac",1);
  FUN_00696ed4(L"sqrt",1);
  FUN_00696ed4(&DAT_0069ab9c,1);
  FUN_00696ed4(&DAT_0069abb0,1);
  FUN_00696ed4(&DAT_0069abc4,1);
  FUN_00696ed4(L"log2",1);
  FUN_00696ed4(L"log10",1);
  FUN_00696ed4(&DAT_0069ac08,1);
  FUN_00696ed4(&DAT_0069ac1c,1);
  FUN_00696ed4(&DAT_0069ac30,1);
  FUN_00696ed4(L"arcsin",1);
  FUN_00696ed4(L"arccos",1);
  FUN_00696ed4(L"arctan",1);
  FUN_00696ed4(L"arctan2",2);
  FUN_00696ed4(L"degtorad",1);
  FUN_00696ed4(L"radtodeg",1);
  FUN_00696ed4(L"power",2);
  FUN_00696ed4(L"logn",2);
  FUN_00696ed4(&DAT_0069ad24,0xffffffff);
  FUN_00696ed4(&DAT_0069ad38,0xffffffff);
  FUN_00696ed4(L"min3",3);
  FUN_00696ed4(L"max3",3);
  FUN_00696ed4(L"mean",0xffffffff);
  FUN_00696ed4(L"median",0xffffffff);
  FUN_00696ed4(L"clamp",3);
  FUN_00696ed4(L"lerp",3);
  FUN_00696ed4(L"real",1);
  FUN_00696ed4(L"string",1);
  FUN_00696ed4(L"string_format",3);
  FUN_00696ed4(&DAT_0069ae3c,1);
  FUN_00696ed4(L"ansi_char",1);
  FUN_00696ed4(&DAT_0069ae70,1);
  FUN_00696ed4(L"string_length",1);
  FUN_00696ed4(L"string_byte_length",1);
  FUN_00696ed4(L"string_pos",2);
  FUN_00696ed4(L"string_copy",3);
  FUN_00696ed4(L"string_char_at",2);
  FUN_00696ed4(L"string_byte_at",2);
  FUN_00696ed4(L"string_delete",3);
  FUN_00696ed4(L"string_insert",3);
  FUN_00696ed4(L"string_lower",1);
  FUN_00696ed4(L"string_upper",1);
  FUN_00696ed4(L"string_repeat",2);
  FUN_00696ed4(L"string_letters",1);
  FUN_00696ed4(L"string_digits",1);
  FUN_00696ed4(L"string_lettersdigits",1);
  FUN_00696ed4(L"string_replace",3);
  FUN_00696ed4(L"string_replace_all",3);
  FUN_00696ed4(L"string_count",2);
  FUN_00696ed4(L"dot_product",4);
  FUN_00696ed4(L"dot_product_3d",6);
  FUN_00696ed4(L"point_distance_3d",6);
  FUN_00696ed4(L"point_distance",4);
  FUN_00696ed4(L"point_direction",4);
  FUN_00696ed4(L"lengthdir_x",2);
  FUN_00696ed4(L"lengthdir_y",2);
  return;
}
