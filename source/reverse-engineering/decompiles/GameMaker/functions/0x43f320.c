// rea decompile_all
// name: FUN_0043f320
// address: 0x43f320
// body: available
// range: 0x43f320-0x43f385 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43f336 (push 0x43f386 followed by fs-segment stack chaining); handler 0x43f386 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043f320(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar2;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_14 = &stack0xfffffffc;
  local_10 = 0;
  puStack_18 = &LAB_0043f386;
  puStack_1c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1c;
  FUN_00405954(**(undefined4 **)(in_stack_00000004 + -0x14),&local_10);
  local_c = local_10;
  local_8 = 0x11;
  uVar2 = 0;
  FUN_0041c0bc(&PTR_LAB_0042e6f8,1,PTR_PTR_007827e8,0,&local_c);
  FUN_00406618();
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uVar2;
  puStack_1c = &LAB_0043f38d;
  thunk_FUN_00406e5c(&local_10,uVar2,puVar1);
  return;
}
