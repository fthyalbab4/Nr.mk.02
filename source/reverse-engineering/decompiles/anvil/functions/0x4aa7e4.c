// rea decompile_all
// name: FUN_004aa7e4
// address: 0x4aa7e4
// body: available
// range: 0x4aa7e4-0x4aa8a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004aa7e4(int param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  LRESULT LVar5;
  HWND hWnd;
  undefined4 uVar6;
  int iVar7;

  uVar6 = 0;
  piVar4 = (int *)FUN_004aa728(param_1,param_2,1);
  if (piVar4 == (int *)0x0) {
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      cVar3 = FUN_004061f8(param_1,&PTR_FUN_004a48d4);
      if (cVar3 != '\0') {
        FUN_004a93f0(*(undefined4 *)(param_1 + 0x38));
      }
    }
  }
  else {
    if ((*(byte *)(piVar4 + 7) & 0x10) == 0) {
      FUN_004a93f0(piVar4);
    }
    (**(code **)(*piVar4 + 0x48))();
    uVar6 = FUN_004a9b54(piVar4,0);
    bVar2 = FUN_004aa374(piVar4,0);
    bVar2 = (byte)uVar6 | bVar2;
    if (bVar2 != 0) {
      FUN_004a602c(piVar4);
    }
    iVar1 = *(int *)(*(int *)PTR_DAT_0068917c + 0x44);
    iVar7 = CONCAT31((int3)((uint)uVar6 >> 8),bVar2);
    if (((iVar1 != 0) && (iVar7 = iVar1, *(char *)(iVar1 + 0x29e) == '\x02')) &&
       (piVar4 == *(int **)(iVar1 + 0x2c0))) {
      LVar5 = SendMessageW(*(HWND *)(iVar1 + 0x37c),0x234,0,0);
      if (LVar5 != 0) {
        hWnd = (HWND)FUN_004c45dc(iVar1);
        DrawMenuBar(hWnd);
      }
    }
    uVar6 = CONCAT31((int3)((uint)iVar7 >> 8),1);
  }
  return uVar6;
}
