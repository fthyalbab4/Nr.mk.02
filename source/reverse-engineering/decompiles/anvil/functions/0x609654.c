// rea decompile_all
// name: FUN_00609654
// address: 0x609654
// body: available
// range: 0x609654-0x609955 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00609654(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;

  bVar7 = 0;
  FUN_006094b8(param_1);
  if (param_2 != 0) {
    FUN_00408194(param_1 + 4,*(undefined4 *)(param_2 + 4));
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
    *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
    FUN_00408194(param_1 + 100,*(undefined4 *)(param_2 + 100));
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x20 + iVar3 * 4);
      *(undefined1 *)(iVar4 + 4) = *(undefined1 *)(*(int *)(param_2 + 0x20 + iVar3 * 4) + 4);
      *(undefined1 *)(iVar4 + 5) = *(undefined1 *)(*(int *)(param_2 + 0x20 + iVar3 * 4) + 5);
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(*(int *)(param_2 + 0x20 + iVar3 * 4) + 8);
      iVar2 = *(int *)(param_2 + 0x20 + iVar3 * 4);
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
      iVar2 = *(int *)(param_2 + 0x20 + iVar3 * 4);
      *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
      *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined1 *)(iVar4 + 0x20) = *(undefined1 *)(*(int *)(param_2 + 0x20 + iVar3 * 4) + 0x20);
      *(undefined1 *)(iVar4 + 0x21) = *(undefined1 *)(*(int *)(param_2 + 0x20 + iVar3 * 4) + 0x21);
      iVar2 = *(int *)(param_2 + 0x20 + iVar3 * 4);
      *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(iVar2 + 0x38);
      *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(iVar2 + 0x3c);
      iVar2 = *(int *)(param_2 + 0x20 + iVar3 * 4);
      *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar2 + 0x44);
      iVar2 = *(int *)(param_2 + 0x20 + iVar3 * 4);
      *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
      *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
      iVar2 = *(int *)(param_2 + 0x20 + iVar3 * 4);
      *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
      *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
      *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(*(int *)(param_2 + 0x20 + iVar3 * 4) + 0x48);
      iVar2 = *(int *)(param_2 + 0x20 + iVar3 * 4);
      *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
      *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 8);
    *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x44 + iVar3 * 4);
      *(undefined1 *)(iVar4 + 4) = *(undefined1 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 4);
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 8);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 0xc);
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 0x10);
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 0x14);
      *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 0x18);
      *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 0x1c);
      *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 0x20);
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 0x24);
      iVar2 = *(int *)(param_2 + 0x44 + iVar3 * 4);
      *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
      *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
      *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 0x30);
      *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 0x34);
      *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 0x38);
      *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 0x3c);
      *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(*(int *)(param_2 + 0x44 + iVar3 * 4) + 0x40);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 8);
    uVar1 = *(undefined4 *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    FUN_00409dfc(param_1 + 0x6c,&DAT_006080a4,1,uVar1);
    iVar3 = *(int *)(param_1 + 0x68);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        uVar1 = FUN_0060d2cc(&DAT_0060b63c,1,0,0,0,0,0,0);
        *(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar4 * 4) = uVar1;
        FUN_0060d4e0(*(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar4 * 4),
                     *(undefined4 *)(*(int *)(param_2 + 0x6c) + iVar4 * 4));
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar1 = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    FUN_00409dfc(param_1 + 0x74,&DAT_006080d4,1,uVar1);
    iVar3 = *(int *)(param_1 + 0x70);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        uVar1 = FUN_0060d2cc(&DAT_0060b63c,1,0,0,0,0,0,0);
        *(undefined4 *)(*(int *)(param_1 + 0x74) + iVar4 * 4) = uVar1;
        FUN_0060d4e0(*(undefined4 *)(*(int *)(param_1 + 0x74) + iVar4 * 4),
                     *(undefined4 *)(*(int *)(param_2 + 0x74) + iVar4 * 4));
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar1 = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    FUN_00409dfc(param_1 + 0x8c,&DAT_00608224,1,uVar1);
    iVar3 = *(int *)(param_1 + 0x88);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_2 + 0x8c) + iVar4 * 0x60);
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x8c) + iVar4 * 0x60);
        for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00609080(param_1);
    FUN_00609218(param_1);
  }
  return;
}
