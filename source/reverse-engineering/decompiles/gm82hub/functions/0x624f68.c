// rea decompile_all
// name: FUN_00624f68
// address: 0x624f68
// body: available
// range: 0x624f68-0x625067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00624f68(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  byte bVar8;

  bVar8 = 0;
  FUN_00624edc(param_1);
  puVar5 = (undefined4 *)(param_1 + 0x18 + (uint)bVar8 * -8);
  puVar2 = (undefined4 *)(param_2 + 0x18 + (uint)bVar8 * -8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  puVar6 = puVar5 + (uint)bVar8 * -2 + 1;
  puVar3 = puVar2 + (uint)bVar8 * -2 + 1;
  *puVar5 = *puVar2;
  *puVar6 = *puVar3;
  puVar6[(uint)bVar8 * -2 + 1] = puVar3[(uint)bVar8 * -2 + 1];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  FUN_00409dfc(param_1 + 8,&DAT_00622864,1,*(undefined4 *)(param_1 + 4));
  iVar7 = *(int *)(param_1 + 4);
  if (-1 < iVar7 + -1) {
    iVar4 = 0;
    do {
      uVar1 = FUN_00515ac8(&DAT_00514cd4,1,*(undefined4 *)(*(int *)(param_2 + 8) + iVar4 * 4),1);
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar4 * 4) = uVar1;
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_00409dfc(param_1 + 0x24,&DAT_00622898,1,*(undefined4 *)(param_1 + 4));
    if (0 < *(int *)(param_1 + 4)) {
      uVar1 = FUN_0051826c(&DAT_00517b1c,1,**(undefined4 **)(param_2 + 0x24));
      **(undefined4 **)(param_1 + 0x24) = uVar1;
    }
  }
  else {
    FUN_00409dfc(param_1 + 0x24,&DAT_00622898,1,*(undefined4 *)(param_1 + 4));
    iVar7 = *(int *)(param_1 + 4);
    if (-1 < iVar7 + -1) {
      iVar4 = 0;
      do {
        uVar1 = FUN_0051826c(&DAT_00517b1c,1,*(undefined4 *)(*(int *)(param_2 + 0x24) + iVar4 * 4));
        *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar4 * 4) = uVar1;
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  FUN_00624a08(param_1);
  return;
}
