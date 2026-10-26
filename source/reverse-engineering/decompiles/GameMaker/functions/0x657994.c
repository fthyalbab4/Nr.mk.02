// rea decompile_all
// name: FUN_00657994
// address: 0x657994
// body: available
// range: 0x657994-0x657b46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00657994(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;

  bVar7 = 0;
  FUN_00657820(param_1);
  if (param_2 != 0) {
    FUN_00407eb8(param_1 + 4,*(undefined4 *)(param_2 + 4));
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
    FUN_00407eb8(param_1 + 0x2ec,*(undefined4 *)(param_2 + 0x2ec));
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(param_2 + 0x28 + iVar4 * 0x20);
      puVar6 = (undefined4 *)(param_1 + 0x28 + iVar4 * 0x20);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
    *(undefined1 *)(param_1 + 0x129) = *(undefined1 *)(param_2 + 0x129);
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(param_2 + 300 + iVar4 * 0x38);
      puVar6 = (undefined4 *)(param_1 + 300 + iVar4 * 0x38);
      for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    uVar1 = *(undefined4 *)(param_2 + 0x2f0);
    *(undefined4 *)(param_1 + 0x2f0) = uVar1;
    FUN_00409be0(param_1 + 0x2f4,&DAT_00656418,1,uVar1);
    iVar4 = *(int *)(param_1 + 0x2f0);
    if (-1 < iVar4 + -1) {
      iVar2 = 0;
      do {
        FUN_00409084(*(int *)(param_1 + 0x2f4) + iVar2 * 0x18,
                     *(int *)(param_2 + 0x2f4) + iVar2 * 0x18,&DAT_00656108);
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar1 = *(undefined4 *)(param_2 + 0x2f8);
    *(undefined4 *)(param_1 + 0x2f8) = uVar1;
    FUN_00409be0(param_1 + 0x2fc,&DAT_00656448,1,uVar1);
    iVar4 = *(int *)(param_1 + 0x2f8);
    if (-1 < iVar4 + -1) {
      iVar2 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_2 + 0x2fc) + iVar2 * 0x28);
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x2fc) + iVar2 * 0x28);
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    puVar5 = (undefined4 *)(param_2 + 0x300);
    puVar6 = (undefined4 *)(param_1 + 0x300);
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_00657b48(param_1);
  }
  return;
}
