// rea decompile_all
// name: FUN_00572940
// address: 0x572940
// body: available
// range: 0x572940-0x5729de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00572940(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int local_18;
  int iStack_14;
  int local_10;
  int iStack_c;
  undefined4 local_8;

  local_18 = *param_5;
  iStack_14 = param_5[1];
  local_10 = param_5[2];
  iStack_c = param_5[3];
  if (*(short *)(param_1 + 0x342) != 0) {
    local_8 = param_3;
    cVar1 = FUN_00405d08(param_1);
    if (cVar1 != '\0') {
      iVar2 = FUN_004edf8c(param_1);
      local_18 = iVar2 - local_18;
      iVar2 = FUN_004edf8c(param_1);
      iVar2 = iVar2 - local_10;
      local_10 = local_18;
      local_18 = iVar2;
      FUN_0056e1d0(param_1,0);
    }
    (**(code **)(param_1 + 0x340))
              (*(undefined4 *)(param_1 + 0x344),param_1,param_2,param_4,&local_18,local_8);
    cVar1 = FUN_00405d08(param_1);
    if (cVar1 != '\0') {
      FUN_0056e1d0(param_1,1);
    }
  }
  return;
}
