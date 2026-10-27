// rea decompile_all
// name: FUN_006126f8
// address: 0x6126f8
// body: available
// range: 0x6126f8-0x612771 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x612718 (push 0x612772 followed by fs-segment stack chaining); handler 0x612772 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006126f8(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00612772;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_2;
  (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3);
  FUN_00415f30(param_1[0x12],&local_c);
  iVar2 = (**(code **)PTR_u__0077d7dc_0x20_00781758)(local_c,*param_3);
  if (SBORROW4(iVar2,1)) {
    FUN_00405944();
  }
  FUN_004086a8(*param_3,1);
  puVar1 = puStack_20;
  *in_FS_OFFSET = param_3;
  puStack_20 = &LAB_00612779;
  uStack_24 = 0x612771;
  thunk_FUN_00406e5c(&local_c,param_3,puVar1);
  return;
}
