// rea decompile_all
// name: FUN_0055dd60
// address: 0x55dd60
// body: available
// range: 0x55dd60-0x55de1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55dd81 (push 0x55de3d followed by fs-segment stack chaining); handler 0x55de3d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55dd9e (push 0x55de1b followed by fs-segment stack chaining); handler 0x55de1b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055dd60(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  int local_14;
  int *local_10;
  undefined4 local_c;

  puStack_28 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_0055de3d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x55dd90;
  local_c = param_2;
  local_10 = (int *)FUN_0043c790(&PTR_FUN_00430700,1);
  puStack_38 = &LAB_0055de1b;
  puStack_3c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_3c;
  puStack_34 = &stack0xfffffffc;
  FUN_00543a68(param_1,&DAT_0055de58,local_10,0);
  iVar3 = (**(code **)(*local_10 + 0x14))();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      (**(code **)(*local_10 + 0xc))(local_10,iVar4,&local_18);
      FUN_00415c04(local_18,&local_14);
      if (local_14 == 0) {
        (**(code **)(*local_10 + 0x20))(local_10,iVar4,0);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar2 = local_c;
  FUN_00543b98(local_10,&DAT_0055de58,0);
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uVar2;
  puStack_3c = &LAB_0055de22;
  FUN_00405fdc(local_10,uVar2,puVar1);
  return;
}
