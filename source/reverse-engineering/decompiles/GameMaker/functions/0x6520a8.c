// rea decompile_all
// name: FUN_006520a8
// address: 0x6520a8
// body: available
// range: 0x6520a8-0x6521c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6520be (push 0x6521c4 followed by fs-segment stack chaining); handler 0x6521c4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006520a8(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_006521c4;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = FUN_00409a18(DAT_0077f2b8);
  if (iVar2 == DAT_0077f2c8) {
    FUN_00409be0(&DAT_0077f2b8,&DAT_00651ce0,1,DAT_0077f2c8 + 5);
    FUN_00409be0(&DAT_0077f2bc,&DAT_00651d0c,1,DAT_0077f2c8 + 5);
    FUN_00409be0(&DAT_0077f2c0,&DAT_00651d38,1,DAT_0077f2c8 + 5);
    FUN_00409be0(&DAT_0077f2c4,&DAT_00651d64,1,DAT_0077f2c8 + 5);
  }
  DAT_0077f2c8 = DAT_0077f2c8 + 1;
  uVar3 = FUN_0064fb70(&DAT_0064f674,1);
  *(undefined4 *)(DAT_0077f2b8 + -4 + DAT_0077f2c8 * 4) = uVar3;
  FUN_0041666c(DAT_0077f2c8 + -1,&local_8);
  FUN_0040839c(DAT_0077f2c0 + -4 + DAT_0077f2c8 * 4,L"sound",local_8);
  FUN_004199b0();
  puVar1 = puStack_10;
  *(double *)(DAT_0077f2c4 + -8 + DAT_0077f2c8 * 8) = (double)in_ST0;
  *(undefined4 *)(DAT_0077f2bc + -4 + DAT_0077f2c8 * 4) = 0;
  DAT_0078a1b0 = 1;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_006521cb;
  puStack_14 = (undefined1 *)0x6521c3;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
