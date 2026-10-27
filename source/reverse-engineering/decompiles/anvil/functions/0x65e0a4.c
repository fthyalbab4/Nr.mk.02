// rea decompile_all
// name: FUN_0065e0a4
// address: 0x65e0a4
// body: available
// range: 0x65e0a4-0x65e203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65e0da (push 0x65e204 followed by fs-segment stack chaining); handler 0x65e204 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065e0a4(int param_1,undefined4 *param_2,undefined4 *param_3,double param_4,double param_5,
                 double param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  int local_30;
  undefined4 local_1c [6];

  puVar8 = local_1c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = puVar8 + 1;
  }
  puStack_50 = (undefined1 *)0x65e0cf;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_54 = &LAB_0065e204;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  *param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  puStack_50 = &stack0xfffffffc;
  iVar5 = FUN_004102e4();
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  iVar2 = FUN_004102ac();
  iVar6 = *(int *)(param_1 + 4) + -1;
  if (iVar6 < iVar2) {
    iVar2 = iVar6;
  }
  iVar6 = FUN_004102e4();
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  iVar3 = FUN_004102ac();
  iVar7 = *(int *)(param_1 + 8) + -1;
  if (iVar7 < iVar3) {
    iVar3 = iVar7;
  }
  if (iVar5 <= iVar2) {
    local_30 = (iVar2 - iVar5) + 1;
    do {
      if (iVar6 <= iVar3) {
        iVar7 = (iVar3 - iVar6) + 1;
        iVar2 = iVar6;
        do {
          if (((double)iVar2 - param_5) * ((double)iVar2 - param_5) +
              ((double)iVar5 - param_6) * ((double)iVar5 - param_6) <= param_4 * param_4) {
            iVar4 = FUN_0065a204(*(int *)(*(int *)(param_1 + 0xc) + iVar5 * 4) + iVar2 * 0x18,
                                 local_1c);
            if (iVar4 == 0) {
              *(double *)(param_3 + 2) = (double)iVar2;
              goto LAB_0065e1e8;
            }
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar5 = iVar5 + 1;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
LAB_0065e1e8:
  puVar1 = puStack_50;
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_0065e20b;
  puStack_54 = (undefined1 *)0x65e203;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
