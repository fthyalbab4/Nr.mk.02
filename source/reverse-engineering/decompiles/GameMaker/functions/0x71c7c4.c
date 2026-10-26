// rea decompile_all
// name: FUN_0071c7c4
// address: 0x71c7c4
// body: available
// range: 0x71c7c4-0x71c866 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71c7e4 (push 0x71c867 followed by fs-segment stack chaining); handler 0x71c867 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071c7c4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18 [2];
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = (undefined1 *)0x71c7d9;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_28 = &LAB_0071c867;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  DAT_0079a9f0 = 0xffffff9c;
  uVar3 = 0;
  uVar2 = 0;
  puStack_24 = &stack0xfffffffc;
  piVar1 = (int *)FUN_0071c51c(param_1,local_8,0,0,0,0,0,0,0);
  FUN_004fd580(*(undefined4 *)PTR_DAT_007827e4,local_10);
  FUN_004fd580(*(undefined4 *)PTR_DAT_007827e4,local_18);
  (**(code **)(*piVar1 + 0x44))(piVar1,local_18[0],local_c);
  FUN_0051f71c(*(undefined4 *)PTR_DAT_00782280);
  FUN_00405a7c(piVar1);
  *in_FS_OFFSET = uVar2;
  thunk_FUN_00406e5c(&local_8,uVar2,uVar3,&LAB_0071c86e);
  return;
}
