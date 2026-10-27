// rea decompile_all
// name: FUN_00655924
// address: 0x655924
// body: available
// range: 0x655924-0x655a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65593a (push 0x655a40 followed by fs-segment stack chaining); handler 0x655a40 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00655924(void)

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
  puStack_14 = &LAB_00655a40;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = FUN_00409a18(DAT_0077f2cc);
  if (iVar2 == DAT_0077f2dc) {
    FUN_00409be0(&DAT_0077f2cc,&DAT_006550a8,1,DAT_0077f2dc + 5);
    FUN_00409be0(&DAT_0077f2d0,&DAT_006550d4,1,DAT_0077f2dc + 5);
    FUN_00409be0(&DAT_0077f2d4,&DAT_00655100,1,DAT_0077f2dc + 5);
    FUN_00409be0(&DAT_0077f2d8,&DAT_0065512c,1,DAT_0077f2dc + 5);
  }
  DAT_0077f2dc = DAT_0077f2dc + 1;
  uVar3 = FUN_00652860(&DAT_0065267c,1);
  *(undefined4 *)(DAT_0077f2cc + -4 + DAT_0077f2dc * 4) = uVar3;
  FUN_0041666c(DAT_0077f2dc + -1,&local_8);
  FUN_0040839c(DAT_0077f2d4 + -4 + DAT_0077f2dc * 4,L"script",local_8);
  FUN_004199b0();
  puVar1 = puStack_10;
  *(double *)(DAT_0077f2d8 + -8 + DAT_0077f2dc * 8) = (double)in_ST0;
  *(undefined4 *)(DAT_0077f2d0 + -4 + DAT_0077f2dc * 4) = 0;
  DAT_0078a1b8 = 1;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00655a47;
  puStack_14 = (undefined1 *)0x655a3f;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
