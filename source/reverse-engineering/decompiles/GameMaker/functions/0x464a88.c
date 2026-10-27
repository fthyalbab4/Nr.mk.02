// rea decompile_all
// name: FUN_00464a88
// address: 0x464a88
// body: available
// range: 0x464a88-0x464b15 inclusive
// range: 0x464b2d-0x464b3c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x464aaf (push 0x464b16 followed by fs-segment stack chaining); handler 0x464b16 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00464a88(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_e [2];
  ushort local_c;
  int *local_8;

  puStack_20 = (undefined1 *)0x464aa1;
  local_8 = (int *)FUN_00405a4c(&LAB_00433630,1);
  puStack_24 = &LAB_00464b16;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar1 = (**(code **)*param_2)();
  iVar2 = FUN_0043f234(param_2);
  (**(code **)(*local_8 + 4))(local_8,iVar1 - iVar2);
  uVar3 = (**(code **)*local_8)();
  FUN_0043f488(param_2,local_8[1],uVar3);
  FUN_0043f488(local_8,local_e,6);
  if (1 < local_c) {
    FUN_0045d0f0(local_c - 2);
  }
  FUN_00464b40(param_1,0,local_8);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x464b36;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}
