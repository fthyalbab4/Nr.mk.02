// rea decompile_all
// name: FUN_004de120
// address: 0x4de120
// body: available
// range: 0x4de120-0x4de178 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004de120(HMENU param_1,uint param_2,int param_3,undefined2 param_4,int param_5)

{
  HMENU pHVar1;
  UINT UVar2;
  undefined4 uVar3;
  int iVar4;

  iVar4 = 0;
  if ((param_2 & 0x10) == 0) {
    UVar2 = GetMenuItemID(param_1,param_3);
    if (UVar2 != 0xffffffff) {
      iVar4 = FUN_004dd678(*(undefined4 *)(param_5 + -4),UVar2,0);
    }
  }
  else {
    pHVar1 = GetSubMenu(param_1,param_3);
    iVar4 = FUN_004dd678(*(undefined4 *)(param_5 + -4),pHVar1,1);
  }
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005136cc(param_4,*(undefined4 *)(iVar4 + 0x34));
  }
  return uVar3;
}
