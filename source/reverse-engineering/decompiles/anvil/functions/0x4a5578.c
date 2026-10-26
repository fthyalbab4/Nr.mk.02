// rea decompile_all
// name: FUN_004a5578
// address: 0x4a5578
// body: available
// range: 0x4a5578-0x4a5682 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a5578(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_1a;
  byte local_19;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  byte local_5;

  local_14 = 0;
  local_18 = 0;
  iVar2 = 0;
  iVar3 = 0;
  local_10 = param_3;
  local_c = param_1;
  if (param_2 != 0) {
    iVar2 = FUN_004a8eb8(param_2);
  }
  if (local_10 != 0) {
    iVar3 = FUN_004a8eb8(local_10);
  }
  local_1a = '\0';
  while ((local_1a == '\0' && ((local_14 < iVar2 || (local_18 < iVar3))))) {
    local_5 = 0xff;
    local_19 = 0xff;
    if (local_14 < iVar2) {
      iVar1 = FUN_004a8ec8(param_2,local_14);
      local_5 = *(byte *)(iVar1 + 0x3f);
    }
    if (local_18 < iVar3) {
      iVar1 = FUN_004a8ec8(local_10,local_18);
      local_19 = *(byte *)(iVar1 + 0x3f);
    }
    if (local_19 < local_5) {
      local_5 = local_19;
      local_1a = FUN_004a5514(&local_18,local_10,local_c,&stack0xfffffffc);
    }
    else {
      local_1a = FUN_004a5514(&local_14,param_2,local_c,&stack0xfffffffc);
    }
    while ((local_14 < iVar2 &&
           (iVar1 = FUN_004a8ec8(param_2,local_14), *(byte *)(iVar1 + 0x3f) <= local_5))) {
      local_14 = local_14 + 1;
    }
    while ((local_18 < iVar3 &&
           (iVar1 = FUN_004a8ec8(local_10,local_18), *(byte *)(iVar1 + 0x3f) <= local_5))) {
      local_18 = local_18 + 1;
    }
  }
  return;
}
