// rea decompile_all
// name: FUN_004be6a0
// address: 0x4be6a0
// body: available
// range: 0x4be6a0-0x4be809 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be6a0(int param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  HWND pHVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_3c;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_24;

  cVar2 = FUN_004f7a54(param_1);
  if (cVar2 != '\0') {
    iVar3 = FUN_004b8198(*(undefined4 *)(param_1 + 0x2ac),param_2);
    local_3c = 0x15;
    local_24 = *(undefined4 *)(iVar3 + 0x1c);
    local_30 = FUN_00407f44(*(undefined4 *)(iVar3 + 0x10));
    bVar1 = *(byte *)(iVar3 + 0xc);
    iVar4 = FUN_0043c914(iVar3);
    if (iVar4 == 0) {
      local_38 = 0;
    }
    else {
      uVar5 = FUN_00405d08(param_1);
      local_38 = *(uint *)(&DAT_007785b4 + (uint)bVar1 * 4 + (uVar5 & 0x7f) * 0xc);
    }
    if (*(int *)(iVar3 + 0x1c) == -1) {
      local_3c = local_3c & 0xffffffef;
    }
    else {
      local_38 = local_38 | 0x8800;
    }
    iStack_34 = *(int *)(iVar3 + 0x24);
    if (iStack_34 < 0) {
      pHVar6 = (HWND)FUN_004f76a8(param_1);
      iVar4 = FUN_004b8198(*(undefined4 *)(param_1 + 0x2ac),param_2);
      SendMessageW(pHVar6,0x1060,*(WPARAM *)(iVar4 + 0x28),(LPARAM)&local_3c);
      if (*(char *)(param_1 + 0x27d) == '\x02') {
        uVar7 = FUN_004f76a8(param_1);
        FUN_0040fa28(uVar7,0xffffffff,*(undefined4 *)(iVar3 + 0x24));
      }
      else if ((*(char *)(param_1 + 0x27d) == '\x03') && (*(char *)(param_1 + 0x2b4) == '\0')) {
        iVar4 = FUN_004b8198(*(undefined4 *)(param_1 + 0x2ac),param_2);
        uVar7 = *(undefined4 *)(iVar4 + 0x28);
        uVar8 = FUN_004f76a8(param_1);
        FUN_0040fa28(uVar8,uVar7,*(undefined4 *)(iVar3 + 0x24));
      }
    }
    else {
      local_3c = local_3c | 2;
      pHVar6 = (HWND)FUN_004f76a8(param_1);
      iVar3 = FUN_004b8198(*(undefined4 *)(param_1 + 0x2ac),param_2);
      SendMessageW(pHVar6,0x1060,*(WPARAM *)(iVar3 + 0x28),(LPARAM)&local_3c);
    }
  }
  return;
}
