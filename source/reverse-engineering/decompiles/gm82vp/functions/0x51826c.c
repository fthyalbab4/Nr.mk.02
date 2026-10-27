// rea decompile_all
// name: FUN_0051826c
// address: 0x51826c
// body: available
// range: 0x51826c-0x51834f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0051826c(int param_1,char param_2,int param_3)

{
  int iVar1;
  int extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 uStack_2c;
  int local_10;

  bVar9 = 0;
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
  puVar5 = (undefined4 *)(param_1 + 0x14 + (uint)bVar9 * -8);
  puVar3 = (undefined4 *)(param_3 + 0x14 + (uint)bVar9 * -8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  puVar6 = puVar5 + (uint)bVar9 * -2 + 1;
  puVar4 = puVar3 + (uint)bVar9 * -2 + 1;
  *puVar5 = *puVar3;
  *puVar6 = *puVar4;
  puVar6[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
  FUN_00409dfc(param_1 + 0xc,&DAT_00517a94,1,*(undefined4 *)(param_1 + 4));
  local_10 = *(int *)(param_1 + 4);
  if (-1 < local_10 + -1) {
    iVar7 = 0;
    do {
      FUN_00409dfc(*(int *)(param_1 + 0xc) + iVar7 * 4,&DAT_00517a60,1,*(undefined4 *)(param_1 + 8))
      ;
      iVar7 = iVar7 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  local_10 = *(int *)(param_1 + 8);
  if (-1 < local_10 + -1) {
    iVar7 = 0;
    do {
      iVar1 = *(int *)(param_1 + 4);
      if (-1 < iVar1 + -1) {
        iVar8 = 0;
        do {
          *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar8 * 4) + iVar7) =
               *(undefined1 *)(*(int *)(*(int *)(param_3 + 0xc) + iVar8 * 4) + iVar7);
          iVar8 = iVar8 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar7 = iVar7 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_2c;
  }
  return param_1;
}
