// rea decompile_all
// name: FUN_0065db84
// address: 0x65db84
// body: available
// range: 0x65db84-0x65dc91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65dbc0 (push 0x65dc92 followed by fs-segment stack chaining); handler 0x65dc92 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065db84(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                 int param_6,int param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int local_28;
  undefined4 local_1c [6];

  puVar6 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *param_5;
    param_5 = param_5 + 1;
    puVar6 = puVar6 + 1;
  }
  puStack_3c = (undefined1 *)0x65dbb5;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_40 = &LAB_0065dc92;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  *param_4 = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  iVar2 = param_7;
  if (param_2 < param_7) {
    iVar2 = param_2;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (param_7 < param_2) {
    param_7 = param_2;
  }
  iVar3 = *(int *)(param_1 + 4) + -1;
  if (iVar3 < param_7) {
    param_7 = iVar3;
  }
  puStack_3c = &stack0xfffffffc;
  if (iVar2 <= param_7) {
    local_28 = (param_7 - iVar2) + 1;
    puStack_3c = &stack0xfffffffc;
    do {
      iVar3 = param_6;
      if (param_3 < param_6) {
        iVar3 = param_3;
      }
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      iVar5 = param_6;
      if (param_6 < param_3) {
        iVar5 = param_3;
      }
      iVar4 = *(int *)(param_1 + 8) + -1;
      if (iVar4 < iVar5) {
        iVar5 = iVar4;
      }
      if (iVar3 <= iVar5) {
        iVar5 = (iVar5 - iVar3) + 1;
        do {
          iVar4 = FUN_0065a204(*(int *)(*(int *)(param_1 + 0xc) + iVar2 * 4) + iVar3 * 0x18,local_1c
                              );
          if (iVar4 == 0) {
            *(double *)(param_4 + 2) = (double)iVar2;
            goto LAB_0065dc76;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar2 = iVar2 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
LAB_0065dc76:
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0065dc99;
  puStack_40 = (undefined1 *)0x65dc91;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
