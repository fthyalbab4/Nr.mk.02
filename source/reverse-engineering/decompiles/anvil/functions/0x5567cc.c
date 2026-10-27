// rea decompile_all
// name: FUN_005567cc
// address: 0x5567cc
// body: available
// range: 0x5567cc-0x556852 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5567eb (push 0x556853 followed by fs-segment stack chaining); handler 0x556853 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005567cc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_28 = &LAB_00556853;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uVar1 = FUN_00438ec4(*(undefined4 *)(param_1 + 0xc),param_2);
  FUN_00407590(&local_10,uVar1,0);
  uStack_2c = 0x556818;
  FUN_00534a58(local_10,&local_c);
  uStack_2c = 0x556823;
  FUN_0040840c(&local_8,local_c);
  uStack_2c = 0x55682d;
  FUN_00408194(param_3,local_8);
  *in_FS_OFFSET = puStack_28;
  puStack_24 = (undefined1 *)0x556842;
  FUN_004072d8(&local_10,puStack_28,unaff_EDI);
  puStack_24 = (undefined1 *)0x55684a;
  FUN_00407dd0(&local_c);
  puStack_24 = (undefined1 *)0x556852;
  thunk_FUN_004072d8(&local_8);
  return;
}
