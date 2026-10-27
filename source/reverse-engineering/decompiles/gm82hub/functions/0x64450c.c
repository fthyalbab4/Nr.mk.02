// rea decompile_all
// name: FUN_0064450c
// address: 0x64450c
// body: available
// range: 0x64450c-0x644560 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x644520 (push 0x644561 followed by fs-segment stack chaining); handler 0x644561 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064450c(void)

{
  double dVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_0000000c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_00644561;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  dVar1 = *(double *)(in_stack_0000000c + 8);
  FUN_005b5dfc(CONCAT11(dVar1 < 0.5 | (byte)((ushort)((ushort)NAN(dVar1) << 10) >> 8) |
                        (byte)((ushort)((ushort)(dVar1 == 0.5) << 0xe) >> 8),dVar1 >= 0.5));
  FUN_004083c0(&local_8,*(undefined4 *)(in_stack_0000000c + 0x28));
  FUN_005b5db0(local_8);
  puVar2 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00644568;
  puStack_14 = (undefined1 *)0x644560;
  thunk_FUN_004072d8(&local_8,uStack_18,puVar2);
  return;
}
