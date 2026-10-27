// rea decompile_all
// name: FUN_006133e8
// address: 0x6133e8
// body: available
// range: 0x6133e8-0x6135bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x613413 (push 0x6135be followed by fs-segment stack chaining); handler 0x6135be lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006133e8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  double local_24;
  undefined8 local_1c;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  local_10 = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  puStack_34 = (undefined1 *)0x613408;
  FUN_0040923c(&local_10,&DAT_00611918);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  *param_3 = 5;
  local_1c = 0.0;
  local_24 = 1.0;
  bVar3 = false;
  bVar2 = false;
  iVar5 = 0;
  if (local_c != 0) {
    iVar5 = *(int *)(local_c + -4);
  }
  if (0 < iVar5) {
    iVar4 = 1;
    do {
      sVar1 = *(short *)(local_c + -2 + iVar4 * 2);
      if (sVar1 == 0x24) {
        bVar2 = true;
      }
      else if (sVar1 == 0x2e) {
        bVar3 = true;
      }
      else if ((bVar2) && ((ushort)(*(short *)(local_c + -2 + iVar4 * 2) - 0x41U) < 6)) {
        local_1c = (double)(((float)*(ushort *)(local_c + -2 + iVar4 * 2) +
                            (float)local_1c * 16.0 + 10.0) - 65.0);
      }
      else if ((bVar2) && ((ushort)(*(short *)(local_c + -2 + iVar4 * 2) - 0x61U) < 6)) {
        local_1c = (double)(((float)*(ushort *)(local_c + -2 + iVar4 * 2) +
                            (float)local_1c * 16.0 + 10.0) - 97.0);
      }
      else if (bVar2) {
        local_1c = (double)(((float)*(ushort *)(local_c + -2 + iVar4 * 2) + (float)local_1c * 16.0)
                           - 48.0);
      }
      else if (bVar3) {
        local_24 = local_24 / 10.0;
        local_1c = (double)(int)(*(ushort *)(local_c + -2 + iVar4 * 2) - 0x30) * local_24 + local_1c
        ;
      }
      else {
        local_1c = (double)(((float)*(ushort *)(local_c + -2 + iVar4 * 2) + (float)local_1c * 10.0)
                           - 48.0);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_3[2] = 0;
  param_3[4] = (undefined4)local_1c;
  param_3[5] = local_1c._4_4_;
  param_3[8] = local_8;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_006135c5;
  uStack_38 = 0x6135bd;
  FUN_004090d0(&local_10,&DAT_00611918,&stack0xfffffffc);
  return;
}
