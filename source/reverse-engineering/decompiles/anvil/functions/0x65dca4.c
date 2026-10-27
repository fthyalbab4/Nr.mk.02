// rea decompile_all
// name: FUN_0065dca4
// address: 0x65dca4
// body: available
// range: 0x65dca4-0x65ddad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65dcdf (push 0x65ddae followed by fs-segment stack chaining); handler 0x65ddae lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065dca4(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                 int param_6,int param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int local_28;
  int local_24;
  undefined4 local_1c [6];

  puVar5 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *param_5;
    param_5 = param_5 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_3c = (undefined1 *)0x65dcd4;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_40 = &LAB_0065ddae;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  *param_4 = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  local_24 = param_7;
  if (param_2 < param_7) {
    local_24 = param_2;
  }
  if (local_24 < 0) {
    local_24 = 0;
  }
  if (param_7 < param_2) {
    param_7 = param_2;
  }
  iVar2 = *(int *)(param_1 + 4) + -1;
  if (iVar2 < param_7) {
    param_7 = iVar2;
  }
  puStack_3c = &stack0xfffffffc;
  if (local_24 <= param_7) {
    local_28 = (param_7 - local_24) + 1;
    puStack_3c = &stack0xfffffffc;
    do {
      iVar2 = param_6;
      if (param_3 < param_6) {
        iVar2 = param_3;
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      iVar4 = param_6;
      if (param_6 < param_3) {
        iVar4 = param_3;
      }
      iVar3 = *(int *)(param_1 + 8) + -1;
      if (iVar3 < iVar4) {
        iVar4 = iVar3;
      }
      if (iVar2 <= iVar4) {
        iVar4 = (iVar4 - iVar2) + 1;
        do {
          iVar3 = FUN_0065a204(*(int *)(*(int *)(param_1 + 0xc) + local_24 * 4) + iVar2 * 0x18,
                               local_1c);
          if (iVar3 == 0) {
            *(double *)(param_4 + 2) = (double)iVar2;
            goto LAB_0065dd92;
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_24 = local_24 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
LAB_0065dd92:
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0065ddb5;
  puStack_40 = (undefined1 *)0x65ddad;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
