// rea decompile_all
// name: FUN_0047d07c
// address: 0x47d07c
// body: available
// range: 0x47d07c-0x47d148 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47d092 (push 0x47d149 followed by fs-segment stack chaining); handler 0x47d149 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047d07c(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0047d149;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((byte)((char)param_1[0xa8] - 3U) < 2) {
    puStack_14 = &stack0xfffffffc;
    if ((*(short *)((int)param_1 + 0x2ca) != 0) &&
       (puStack_14 = &stack0xfffffffc, -1 < *(int *)(param_2 + 4))) {
      puStack_14 = &stack0xfffffffc;
      iVar2 = (**(code **)(*param_1 + 0x108))();
      if (*(int *)(param_2 + 4) < iVar2) {
        FUN_004081e8(&local_8,0);
        (*(code *)param_1[0xb2])(param_1[0xb3],param_1,*(undefined4 *)(param_2 + 4),&local_8);
        uVar3 = FUN_00408220(local_8);
        FUN_00417680(*(undefined4 *)(param_2 + 8),uVar3);
        iVar2 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar2 = FUN_00407488(&local_8,local_8);
        }
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = *(undefined4 *)(iVar2 + -4);
        }
        *(undefined4 *)(param_2 + 0xc) = uVar3;
        goto LAB_0047d133;
      }
    }
    *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
  }
  else {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
LAB_0047d133:
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0047d150;
  puStack_18 = (undefined1 *)0x47d148;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
