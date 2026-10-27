// rea decompile_all
// name: FUN_006700a8
// address: 0x6700a8
// body: available
// range: 0x6700a8-0x67010f inclusive
// range: 0x67017d-0x670197 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6700c9 (push 0x6701ba followed by fs-segment stack chaining); handler 0x6701ba lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6700eb (push 0x670198 followed by fs-segment stack chaining); handler 0x670198 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6700f9 (push 0x670110 followed by fs-segment stack chaining); handler 0x670110 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006700a8(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;

  puStack_2c = &stack0xfffffffc;
  puStack_30 = &LAB_006701ba;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x20;
  puStack_3c = (undefined1 *)0x6700dd;
  uVar2 = FUN_0043fc08(&PTR_LAB_00433204,1,param_2);
  puStack_3c = &LAB_00670198;
  local_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_40;
  puStack_48 = &LAB_00670110;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  puStack_38 = &stack0xfffffffc;
  FUN_006701cc(param_1,uVar2);
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_4c;
  *in_FS_OFFSET = local_40;
  puStack_38 = &LAB_0067019f;
  puStack_3c = (undefined1 *)0x670197;
  FUN_00405a7c(uVar2,0,puVar1);
  return;
}
