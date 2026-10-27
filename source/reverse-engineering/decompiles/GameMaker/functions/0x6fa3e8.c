// rea decompile_all
// name: FUN_006fa3e8
// address: 0x6fa3e8
// body: available
// range: 0x6fa3e8-0x6fa503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6fa3fe (push 0x6fa504 followed by fs-segment stack chaining); handler 0x6fa504 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fa3e8(void)

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
  puStack_14 = &LAB_006fa504;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = FUN_00409a18(DAT_0077f4e4);
  if (iVar2 == DAT_0077f4f4) {
    FUN_00409be0(&DAT_0077f4e4,&DAT_006fa020,1,DAT_0077f4f4 + 5);
    FUN_00409be0(&DAT_0077f4e8,&DAT_006fa04c,1,DAT_0077f4f4 + 5);
    FUN_00409be0(&DAT_0077f4ec,&DAT_006fa078,1,DAT_0077f4f4 + 5);
    FUN_00409be0(&DAT_0077f4f0,&DAT_006fa0a4,1,DAT_0077f4f4 + 5);
  }
  DAT_0077f4f4 = DAT_0077f4f4 + 1;
  uVar3 = FUN_005adf3c(&DAT_005ad98c,1);
  *(undefined4 *)(DAT_0077f4e4 + -4 + DAT_0077f4f4 * 4) = uVar3;
  FUN_0041666c(DAT_0077f4f4 + -1,&local_8);
  FUN_0040839c(DAT_0077f4ec + -4 + DAT_0077f4f4 * 4,L"timeline",local_8);
  FUN_004199b0();
  puVar1 = puStack_10;
  *(double *)(DAT_0077f4f0 + -8 + DAT_0077f4f4 * 8) = (double)in_ST0;
  *(undefined4 *)(DAT_0077f4e8 + -4 + DAT_0077f4f4 * 4) = 0;
  DAT_00790188 = 1;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_006fa50b;
  puStack_14 = (undefined1 *)0x6fa503;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
