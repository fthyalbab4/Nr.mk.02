// rea decompile_all
// name: FUN_004c0000
// address: 0x4c0000
// body: available
// range: 0x4c0000-0x4c009e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c0000(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *local_18;
  undefined4 local_14;

  local_18 = param_2;
  local_14 = param_1;
  FUN_004bcb48(param_1,0xb036,param_2,0);
  cVar1 = FUN_004061f8(param_2,&PTR_LAB_004b3174);
  if (cVar1 == '\0') {
    cVar1 = FUN_004c4988(param_1);
    if (cVar1 != '\0') {
      FUN_004bbb38(param_2,*(undefined1 *)((int)param_2 + 0x59),0);
    }
  }
  else {
    FUN_004bfe2c(param_2,1);
    (**(code **)(*param_2 + 0xc0))();
  }
  FUN_004bfe98(param_1,param_2);
  FUN_004bcb48(param_1,0xb02c,param_2,0);
  FUN_004bcb48(param_1,0xb04c,&local_18,0);
  FUN_004bfb38(param_1,0);
  return;
}
