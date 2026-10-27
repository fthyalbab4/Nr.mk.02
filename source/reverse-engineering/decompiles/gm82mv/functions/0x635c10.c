// rea decompile_all
// name: FUN_00635c10
// address: 0x635c10
// body: available
// range: 0x635c10-0x63621a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00635c10(void)

{
  FUN_0058917c(L"is_real",FUN_00633a50,1,0);
  FUN_0058917c(&PTR_DAT_00636244,&LAB_00633a78,1,0);
  FUN_0058917c(L"random",&LAB_00633aa0,1,0);
  FUN_0058917c(&PTR_DAT_00636280,FUN_00633ac0,2,0);
  FUN_0058917c(L"irandom",FUN_00633b34,1,0);
  FUN_0058917c(L"irandom_range",FUN_00633b68,2,0);
  FUN_0058917c(&PTR_DAT_006362ec,FUN_00633bc4,1,0);
  FUN_0058917c(&PTR_DAT_00636318,&LAB_00633be0,0,0);
  FUN_0058917c(&PTR_DAT_00636344,&LAB_00633bfc,0,0);
  FUN_0058917c(&DAT_00636364,FUN_00633c08,1,0);
  FUN_0058917c(L"round",FUN_00633c24,1,0);
  FUN_0058917c(L"floor",&LAB_00633c54,1,0);
  FUN_0058917c(L"ceil",&LAB_00633c84,1,0);
  FUN_0058917c(L"sign",&LAB_00633cb4,1,0);
  FUN_0058917c(L"frac",&LAB_00633d20,1,0);
  FUN_0058917c(L"sqrt",&LAB_00633d48,1,0);
  FUN_0058917c(&PTR_DAT_00636408,&LAB_00633df8,1,0);
  FUN_0058917c(&PTR_DAT_0063641c,FUN_00633e14,1,0);
  FUN_0058917c(&PTR_DAT_00636430,&LAB_00633eac,1,0);
  FUN_0058917c(L"log2",&LAB_00633f40,1,0);
  FUN_0058917c(L"log10",&LAB_00633fd8,1,0);
  FUN_0058917c(&PTR_DAT_00636474,&LAB_00634074,1,0);
  FUN_0058917c(&PTR_DAT_00636488,&LAB_0063409c,1,0);
  FUN_0058917c(&PTR_DAT_0063649c,&LAB_006340c4,1,0);
  FUN_0058917c(L"arcsin",&LAB_006340ec,1,0);
  FUN_0058917c(L"arccos",&LAB_00634184,1,0);
  FUN_0058917c(L"arctan",&LAB_0063421c,1,0);
  FUN_0058917c(L"arctan2",&LAB_006342b8,2,0);
  FUN_0058917c(&PTR_DAT_00636520,&LAB_00634364,1,0);
  FUN_0058917c(&PTR_DAT_00636540,&LAB_006343a4,1,0);
  FUN_0058917c(L"power",&LAB_006343e4,2,0);
  FUN_0058917c(L"logn",&LAB_00634484,2,0);
  FUN_0058917c(&PTR_DAT_00636590,FUN_00634528,0xffffffff,0);
  FUN_0058917c(&PTR_DAT_006365a4,FUN_00634600,0xffffffff,0);
  FUN_0058917c(L"min3",FUN_006346d8,3,0);
  FUN_0058917c(L"max3",&LAB_00634704,3,0);
  FUN_0058917c(L"mean",&LAB_00634730,0xffffffff,0);
  FUN_0058917c(L"median",FUN_00634788,0xffffffff,0);
  FUN_0058917c(L"choose",&LAB_0063484c,0xffffffff,0);
  FUN_0058917c(L"clamp",&LAB_006348a0,3,1);
  FUN_0058917c(L"lerp",FUN_006348f4,3,1);
  FUN_0058917c(L"real",FUN_00634940,1,0);
  FUN_0058917c(L"string",&LAB_00634acc,1,0);
  FUN_0058917c(&PTR_DAT_0063669c,&LAB_00634c54,3,0);
  FUN_0058917c(&PTR_DAT_006366c4,&LAB_00634de4,1,0);
  FUN_0058917c(L"ansi_char",&LAB_00634ec4,1,0);
  FUN_0058917c(&PTR_DAT_006366f8,FUN_00634ef0,1,0);
  FUN_0058917c(&PTR_DAT_0063670c,&LAB_00634f38,1,0);
  FUN_0058917c(L"string_byte_length",FUN_00634f60,1,0);
  FUN_0058917c(L"string_byte_at",FUN_0063513c,2,0);
  FUN_0058917c(&PTR_DAT_00636794,FUN_00634f90,2,0);
  FUN_0058917c(L"string_copy",FUN_00635008,3,0);
  FUN_0058917c(L"string_char_at",FUN_00635090,2,0);
  FUN_0058917c(&PTR_DAT_00636808,FUN_00635170,3,0);
  FUN_0058917c(&PTR_DAT_00636830,FUN_006351ec,3,0);
  FUN_0058917c(&PTR_DAT_00636858,FUN_00635224,1,0);
  FUN_0058917c(&PTR_DAT_00636880,&LAB_00635298,1,0);
  FUN_0058917c(&PTR_DAT_006368a8,&LAB_0063530c,2,0);
  FUN_0058917c(&PTR_DAT_006368d0,&LAB_0063534c,1,0);
  FUN_0058917c(&PTR_DAT_006368fc,FUN_00635440,1,0);
  FUN_0058917c(&PTR_DAT_00636924,&LAB_00635524,1,0);
  FUN_0058917c(&PTR_DAT_0063695c,&LAB_00635624,3,0);
  FUN_0058917c(&PTR_DAT_00636988,&LAB_006356c8,3,0);
  FUN_0058917c(L"string_count",&LAB_0063576c,2,0);
  FUN_0058917c(L"dot_product",&LAB_00635850,4,1);
  FUN_0058917c(L"dot_product_3d",FUN_006358c0,6,1);
  FUN_0058917c(L"point_distance_3d",FUN_00635998,6,1);
  FUN_0058917c(L"point_distance",&LAB_00635954,4,0);
  FUN_0058917c(L"point_direction",FUN_006359f8,4,0);
  FUN_0058917c(&PTR_DAT_00636abc,&LAB_00635ae4,2,0);
  FUN_0058917c(&PTR_DAT_00636ae0,&LAB_00635b78,2,0);
  return;
}
