// rea decompile_all
// name: FUN_006311d0
// address: 0x6311d0
// body: available
// range: 0x6311d0-0x631429 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006311d0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bStack_7;
  byte bStack_6;
  byte bStack_5;

  *(undefined1 *)
   (*(int *)(param_4 + -0xc) + *(int *)(*(int *)(param_4 + -0x10) + 4) * param_2 + param_1) = 1;
  uVar1 = FUN_0070284c(*(undefined4 *)(param_4 + -0x10),param_1,param_2);
  bStack_7 = (byte)(uVar1 >> 8);
  bStack_6 = (byte)(uVar1 >> 0x10);
  if (*(char *)(param_4 + 0x10) == '\0') {
    bStack_5 = (byte)(uVar1 >> 0x18);
    uVar3 = (uint)bStack_5;
    uVar2 = bStack_6 * uVar3 - (uint)*(byte *)(param_4 + -0x12) * (uint)*(byte *)(param_4 + -0x11);
    uVar8 = (int)uVar2 >> 0x1f;
    iVar4 = (uVar2 ^ uVar8) - uVar8;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    uVar2 = bStack_7 * uVar3 - (uint)*(byte *)(param_4 + -0x13) * (uint)*(byte *)(param_4 + -0x11);
    uVar8 = (int)uVar2 >> 0x1f;
    iVar5 = (uVar2 ^ uVar8) - uVar8;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    uVar1 = (uVar1 & 0xff) * uVar3 -
            (uint)*(byte *)(param_4 + -0x14) * (uint)*(byte *)(param_4 + -0x11);
    uVar2 = (int)uVar1 >> 0x1f;
    iVar6 = (uVar1 ^ uVar2) - uVar2;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    uVar1 = (uint)bStack_5 - (uint)*(byte *)(param_4 + -0x11);
    uVar2 = (int)uVar1 >> 0x1f;
    iVar4 = ((uVar1 ^ uVar2) - uVar2) + (iVar6 >> 8) + (iVar4 >> 8) + (iVar5 >> 8);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    iVar4 = iVar4 >> 2;
  }
  else {
    uVar2 = (uint)bStack_6 - (uint)*(byte *)(param_4 + -0x12);
    uVar8 = (int)uVar2 >> 0x1f;
    uVar1 = (uVar1 & 0xff) - (uint)*(byte *)(param_4 + -0x14);
    uVar9 = (int)uVar1 >> 0x1f;
    uVar3 = (uint)bStack_7 - (uint)*(byte *)(param_4 + -0x13);
    uVar10 = (int)uVar3 >> 0x1f;
    iVar4 = (int)(((uVar2 ^ uVar8) - uVar8) + ((uVar1 ^ uVar9) - uVar9) +
                 ((uVar3 ^ uVar10) - uVar10)) / 3;
  }
  if (iVar4 <= *(int *)(param_4 + 0xc)) {
    uVar7 = FUN_005a58cc(*(undefined4 *)
                          (*(int *)(*(int *)(param_4 + -0x10) + 0xc) +
                          (*(int *)(*(int *)(param_4 + -0x10) + 4) * param_2 + param_1) * 4),
                         DAT_0078a0e4,DAT_0078a0f0);
    *(undefined4 *)
     (*(int *)(*(int *)(param_4 + -0x10) + 0xc) +
     (*(int *)(*(int *)(param_4 + -0x10) + 4) * param_2 + param_1) * 4) = uVar7;
    iVar4 = FUN_00409a18(*(undefined4 *)(param_4 + -4));
    if (iVar4 <= *(int *)(param_4 + -0x18)) {
      FUN_00409be0(param_4 + -4,&DAT_00631184,1,*(int *)(param_4 + -0x18) + 10000);
      FUN_00409be0(param_4 + -8,&DAT_00631184,1,*(int *)(param_4 + -0x18) + 10000);
    }
    *(int *)(*(int *)(param_4 + -4) + *(int *)(param_4 + -0x18) * 4) = param_1;
    *(int *)(*(int *)(param_4 + -8) + *(int *)(param_4 + -0x18) * 4) = param_2;
    *(int *)(param_4 + -0x18) = *(int *)(param_4 + -0x18) + 1;
    iVar4 = *(int *)(param_4 + -0x1c);
    if (param_1 <= *(int *)(param_4 + -0x1c)) {
      iVar4 = param_1;
    }
    *(int *)(param_4 + -0x1c) = iVar4;
    iVar4 = *(int *)(param_4 + -0x20);
    if (*(int *)(param_4 + -0x20) <= param_1) {
      iVar4 = param_1;
    }
    *(int *)(param_4 + -0x20) = iVar4;
    iVar4 = *(int *)(param_4 + -0x24);
    if (param_2 <= *(int *)(param_4 + -0x24)) {
      iVar4 = param_2;
    }
    *(int *)(param_4 + -0x24) = iVar4;
    iVar4 = *(int *)(param_4 + -0x28);
    if (*(int *)(param_4 + -0x28) <= param_2) {
      iVar4 = param_2;
    }
    *(int *)(param_4 + -0x28) = iVar4;
  }
  return;
}
