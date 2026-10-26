// rea decompile_all
// name: FUN_005b33a8
// address: 0x5b33a8
// body: available
// range: 0x5b33a8-0x5b3433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b33a8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  byte bVar8;

  bVar8 = 0;
  FUN_005b32a4(param_1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  puVar5 = (undefined4 *)(param_1 + 0x24 + (uint)bVar8 * -8);
  puVar3 = (undefined4 *)(param_2 + 0x24 + (uint)bVar8 * -8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  puVar6 = puVar5 + (uint)bVar8 * -2 + 1;
  puVar4 = puVar3 + (uint)bVar8 * -2 + 1;
  *puVar5 = *puVar3;
  *puVar6 = *puVar4;
  puVar6[(uint)bVar8 * -2 + 1] = puVar4[(uint)bVar8 * -2 + 1];
  FUN_00409be0(param_1 + 0x30,&DAT_005b2754,1,*(undefined4 *)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 4);
  if (-1 < iVar2 + -1) {
    iVar7 = 0;
    do {
      uVar1 = FUN_00701cf4(&DAT_00700d94,1,*(undefined4 *)(*(int *)(param_2 + 0x30) + iVar7 * 4));
      *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar7 * 4) = uVar1;
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
