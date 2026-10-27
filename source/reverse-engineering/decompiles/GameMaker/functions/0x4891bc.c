// rea decompile_all
// name: FUN_004891bc
// address: 0x4891bc
// body: available
// range: 0x4891bc-0x489217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4891de (push 0x489218 followed by fs-segment stack chaining); handler 0x489218 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004891bc(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  HANDLE pvVar2;
  HANDLE pvVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = (undefined1 *)0x4891d3;
  (**(code **)(*param_1 + 0x18))();
  puStack_20 = &LAB_00489218;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  pvVar2 = GetClipboardData(2);
  pvVar3 = GetClipboardData(9);
  (**(code **)(*param_2 + 100))(param_2,CONCAT22(extraout_var,2),pvVar2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = pvVar3;
  puStack_20 = &LAB_0048921f;
  uStack_24 = 0x489217;
  (**(code **)(*param_1 + 0x14))(param_1,*param_1,puVar1);
  return;
}
