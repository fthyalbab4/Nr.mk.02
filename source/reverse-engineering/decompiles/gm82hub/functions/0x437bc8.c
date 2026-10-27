// rea decompile_all
// name: FUN_00437bc8
// address: 0x437bc8
// body: available
// range: 0x437bc8-0x437c3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x437be1 (push 0x437c3e followed by fs-segment stack chaining); handler 0x437c3e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00437bc8(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_1c = &LAB_00437c3e;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  FUN_00405eb4(*(undefined4 *)(in_stack_00000004 + -4),&local_10);
  local_c = local_10;
  local_8 = 0x11;
  puVar3 = &local_c;
  uVar2 = 0;
  FUN_0040b9d0(PTR_LAB_0068951c,&local_14);
  FUN_0041bd88(&LAB_0042d580,1,local_14,uVar2,puVar3);
  FUN_00406ab4();
  puVar1 = puStack_20;
  *in_FS_OFFSET = uVar2;
  puStack_20 = &LAB_00437c45;
  thunk_FUN_004072fc(&local_14,2,puVar1);
  return;
}
