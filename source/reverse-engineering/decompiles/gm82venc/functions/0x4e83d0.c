// rea decompile_all
// name: FUN_004e83d0
// address: 0x4e83d0
// body: available
// range: 0x4e83d0-0x4e8563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004e83d0(int param_1,char param_2)

{
  undefined *puVar1;
  HKL pHVar2;
  undefined4 uVar3;
  HDC hdc;
  int iVar4;
  char extraout_DL;
  char cVar5;
  undefined4 *in_FS_OFFSET;

  cVar5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar5 = extraout_DL;
  }
  FUN_00446094(param_1,0);
  puVar1 = PTR_DAT_00688b78;
  *(int *)(PTR_DAT_00688b78 + 4) = param_1;
  *(undefined1 **)puVar1 = &LAB_004e882c;
  puVar1 = PTR_DAT_00688b98;
  *(int *)(PTR_DAT_00688b98 + 4) = param_1;
  *(undefined1 **)puVar1 = &LAB_004e8838;
  FUN_004e8844(param_1);
  pHVar2 = GetKeyboardLayout(0);
  *(HKL *)(param_1 + 0x40) = pHVar2;
  uVar3 = FUN_00405fac(&PTR_LAB_0042e000,1);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  uVar3 = FUN_00405fac(&PTR_LAB_0042e000,1);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  uVar3 = FUN_00405fac(&PTR_LAB_0042e000,1);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  uVar3 = FUN_00405fac(&PTR_LAB_0042e000,1);
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  uVar3 = FUN_00405fac(&PTR_LAB_0042e000,1);
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  hdc = GetDC((HWND)0x0);
  iVar4 = GetDeviceCaps(hdc,0x5a);
  *(int *)(param_1 + 0x44) = iVar4;
  ReleaseDC((HWND)0x0,hdc);
  (**(code **)PTR_DAT_00688fd8)();
  uVar3 = FUN_0045b5a4(&PTR_FUN_004550c0,1);
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  uVar3 = FUN_0045b5a4(&PTR_FUN_004550c0,1);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  uVar3 = FUN_0045b5a4(&PTR_FUN_004550c0,1);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  uVar3 = FUN_0045b5a4(&PTR_FUN_004550c0,1);
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  uVar3 = FUN_0045b5a4(&PTR_FUN_004550c0,1);
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  FUN_004e8d9c(param_1);
  iVar4 = *(int *)(param_1 + 0x80);
  *(int *)(iVar4 + 0xc) = param_1;
  *(undefined1 **)(iVar4 + 8) = &LAB_004e8c0c;
  iVar4 = *(int *)(param_1 + 0x84);
  *(int *)(iVar4 + 0xc) = param_1;
  *(undefined1 **)(iVar4 + 8) = &LAB_004e8c0c;
  iVar4 = *(int *)(param_1 + 0x7c);
  *(int *)(iVar4 + 0xc) = param_1;
  *(undefined1 **)(iVar4 + 8) = &LAB_004e8c0c;
  iVar4 = *(int *)(param_1 + 0x88);
  *(int *)(iVar4 + 0xc) = param_1;
  *(undefined1 **)(iVar4 + 8) = &LAB_004e8c0c;
  iVar4 = *(int *)(param_1 + 0x8c);
  *(int *)(iVar4 + 0xc) = param_1;
  *(undefined1 **)(iVar4 + 8) = &LAB_004e8c0c;
  if (cVar5 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = 0;
  }
  return param_1;
}
