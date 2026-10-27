// rea decompile_all
// name: FUN_005f4804
// address: 0x5f4804
// body: available
// range: 0x5f4804-0x5f4863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f481a (push 0x5f4864 followed by fs-segment stack chaining); handler 0x5f4864 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f4804(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined *puVar2;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_005f4864;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar2 = PTR_DAT_00688ab4;
  FUN_005f46a4(param_1,&local_8,param_3,param_2,PTR_DAT_00688ab4,PTR_DAT_00688ab4,PTR_DAT_00688ab4,
               PTR_DAT_00688ab4);
  piVar1 = local_8;
  (**(code **)(*local_8 + 0x2c))();
  FUN_0040b378();
  *in_FS_OFFSET = piVar1;
  FUN_0040b268(&local_8,piVar1,puVar2,&LAB_005f486b);
  return;
}
