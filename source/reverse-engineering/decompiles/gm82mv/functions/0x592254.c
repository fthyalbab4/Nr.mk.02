// rea decompile_all
// name: FUN_00592254
// address: 0x592254
// body: available
// range: 0x592254-0x59231c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00592254(int param_1,int param_2)

{
  char cVar1;
  HWND pHVar2;
  HWND pHVar3;
  bool bVar4;
  undefined4 local_10;
  undefined1 local_c [4];

  bVar4 = &stack0x00000000 == (undefined1 *)0x10;
  FUN_0040891c(param_2,*(undefined4 *)(param_1 + 0x2a0));
  if (!bVar4) {
    if ((((*(byte *)(param_1 + 0x1c) & 0x10) != 0) && (param_2 != 0)) &&
       ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
      FUN_00591d38(param_1,0);
    }
    cVar1 = FUN_004c4988(param_1);
    if (cVar1 != '\0') {
      FUN_00592358(param_1,&local_10,local_c);
    }
    FUN_00592164(param_1,param_2);
    *(byte *)(param_1 + 0x2ad) = *(byte *)(param_1 + 0x2ad) & 0xfe;
    if (*(int *)(param_1 + 0x2a0) != 0) {
      *(byte *)(param_1 + 0x2ad) = *(byte *)(param_1 + 0x2ad) | 1;
    }
    FUN_004776fc(param_1,0);
    cVar1 = FUN_00592154(param_1);
    if ((cVar1 != '\0') && (0 < *(int *)(param_1 + 0x2a8))) {
      FUN_004776fc(param_1,*(undefined4 *)(param_1 + 0x2a8));
    }
    cVar1 = FUN_004c4988(param_1);
    if (cVar1 != '\0') {
      pHVar2 = (HWND)FUN_004c45dc(param_1);
      pHVar3 = GetFocus();
      if ((pHVar2 == pHVar3) && ((*(byte *)(param_1 + 0x1c) & 0x10) == 0)) {
        FUN_005923a0(param_1,local_10);
      }
    }
  }
  return;
}
