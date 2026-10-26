// rea decompile_all
// name: FUN_0052b384
// address: 0x52b384
// body: available
// range: 0x52b384-0x52b3e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0052b384(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_14 [4];
  undefined4 local_10;

  local_10 = FUN_0043c834(param_2);
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,auStack_14,1);
  if (iVar1 == 1) {
    uVar2 = FUN_0052b360();
    iVar1 = FUN_0052b2e4(uVar2,auStack_14[0]);
    do {
      iVar3 = iVar1;
      if (iVar3 == 0) break;
      iVar1 = (**(code **)(iVar3 + 0x2c))(iVar3,param_2);
    } while (iVar3 != iVar1);
    FUN_0043c854(param_2);
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}
