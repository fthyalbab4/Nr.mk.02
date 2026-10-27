// rea decompile_all
// name: FUN_0043b3cc
// address: 0x43b3cc
// body: available
// range: 0x43b3cc-0x43b498 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43b3f1 (push 0x43b499 followed by fs-segment stack chaining); handler 0x43b499 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043b3cc(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_c;

  puStack_24 = (undefined1 *)0x43b3e6;
  FUN_0040b1b4(param_4);
  puStack_28 = &LAB_0043b499;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  local_c = param_2;
  do {
    uVar1 = *(undefined4 *)(param_1 + ((uint)(local_c + param_3) >> 1) * 4);
    iVar5 = local_c;
    iVar6 = param_3;
    do {
      while (iVar4 = (**(code **)(*param_4 + 0xc))
                               (param_4,*(undefined4 *)(param_1 + iVar5 * 4),uVar1), iVar4 < 0) {
        iVar5 = iVar5 + 1;
      }
      while (iVar4 = (**(code **)(*param_4 + 0xc))
                               (param_4,*(undefined4 *)(param_1 + iVar6 * 4),uVar1), 0 < iVar4) {
        iVar6 = iVar6 + -1;
      }
      if (iVar5 <= iVar6) {
        if (iVar6 != iVar5) {
          uVar2 = *(undefined4 *)(param_1 + iVar5 * 4);
          *(undefined4 *)(param_1 + iVar5 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
          *(undefined4 *)(param_1 + iVar6 * 4) = uVar2;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      }
    } while (iVar5 <= iVar6);
    if (local_c < iVar6) {
      FUN_0043b3cc(param_1,local_c,iVar6,param_4);
    }
    puVar3 = puStack_24;
    local_c = iVar5;
  } while (iVar5 < param_3);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0043b4a0;
  puStack_28 = (undefined1 *)0x43b498;
  FUN_0040b140(&param_4,uStack_2c,puVar3);
  return;
}
