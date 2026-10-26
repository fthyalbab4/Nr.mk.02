// rea decompile_all
// name: FUN_00753560
// address: 0x753560
// body: available
// range: 0x753560-0x75364c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00753560(int param_1,char param_2,ushort *param_3,int param_4)

{
  undefined4 uVar1;
  ushort *extraout_ECX;
  char extraout_DL;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  uint local_18;
  int local_14;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00405a4c(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 1);
  uVar1 = FUN_0044d8a0(&LAB_0044ce38,1);
  *(undefined4 *)(param_1 + 4) = uVar1;
  local_18 = (uint)*param_3;
  if (-1 < (int)(local_18 - 1)) {
    local_14 = 0;
    do {
      iVar3 = *(int *)(param_3 + local_14 * 2 + 3) + param_4;
      uVar5 = (uint)*(ushort *)(iVar3 + 2);
      if (-1 < (int)(uVar5 - 1)) {
        iVar4 = 0;
        do {
          uVar1 = FUN_00753518(&DAT_007514c0,1,
                               *(undefined2 *)
                                (iVar3 + 4 + (uint)*(ushort *)(iVar3 + 2) * 4 + iVar4 * 2),
                               *(undefined4 *)(iVar3 + 4 + iVar4 * 4));
          FUN_0043ae88(*(undefined4 *)(param_1 + 4),uVar1);
          iVar4 = iVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  *(ushort **)(param_1 + 8) = param_3 + (uint)*param_3 * 2 + 3;
  *(uint *)(param_1 + 0xc) = (uint)*param_3;
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_34;
  }
  return param_1;
}
