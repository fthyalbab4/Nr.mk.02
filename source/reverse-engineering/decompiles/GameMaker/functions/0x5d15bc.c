// rea decompile_all
// name: FUN_005d15bc
// address: 0x5d15bc
// body: available
// range: 0x5d15bc-0x5d162d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d15dc (push 0x5d162e followed by fs-segment stack chaining); handler 0x5d162e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d15bc(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_005d162e;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00406f0c(&local_8,*(undefined4 *)(param_1[1] + 8 + param_2 * 0xc));
  FUN_00406eb0(param_1[1] + 8 + param_2 * 0xc,param_3);
  (**(code **)(*param_1 + 8))(param_1,local_8,1);
  (**(code **)(*param_1 + 8))(param_1,param_3,0);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005d1635;
  puStack_20 = (undefined1 *)0x5d162d;
  FUN_00406e5c(&local_8,uStack_24,puVar1);
  return;
}
