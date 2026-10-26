// rea decompile_all
// name: FUN_004aaebc
// address: 0x4aaebc
// body: available
// range: 0x4aaebc-0x4aaf8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aaebc(HMENU param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  UINT UVar5;
  UINT uId;

  iVar1 = GetMenuItemCount(param_1);
  puVar4 = (undefined2 *)(param_4 + -0x400);
  uId = 0;
  while (((int)uId < iVar1 && (puVar4 < (undefined2 *)(param_4 + -10)))) {
    uVar2 = (param_4 + -10) - (int)puVar4;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    FUN_004ab490(*(undefined4 *)(param_4 + -0x404),param_1,uId,0x400,iVar3,puVar4);
    puVar4 = (undefined2 *)FUN_00417644(puVar4);
    UVar5 = GetMenuState(param_1,uId,0x400);
    if ((UVar5 & 2) != 0) {
      *puVar4 = 0x24;
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
    }
    if ((UVar5 & 0x40) != 0) {
      *puVar4 = 0x40;
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
    }
    if ((UVar5 & 1) != 0) {
      *puVar4 = 0x23;
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
    }
    *puVar4 = 0x3b;
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    uId = uId + 1;
  }
  return;
}
