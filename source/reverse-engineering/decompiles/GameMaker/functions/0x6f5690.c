// rea decompile_all
// name: FUN_006f5690
// address: 0x6f5690
// body: available
// range: 0x6f5690-0x6f57fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6f56a7 (push 0x6f57fb followed by fs-segment stack chaining); handler 0x6f57fb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f5690(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_006f57fb;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = FUN_00409a18(DAT_0077f4c4);
  if (iVar2 == DAT_0077f4d8) {
    FUN_00409be0(&DAT_0077f4c4,&DAT_006f522c,1,DAT_0077f4d8 + 5);
    FUN_00409be0(&DAT_0077f4c8,&DAT_006f5258,1,DAT_0077f4d8 + 5);
    FUN_00409be0(&DAT_0077f4cc,&DAT_006f5284,1,DAT_0077f4d8 + 5);
    FUN_00409be0(&DAT_0077f4d0,&DAT_006f52b0,1,DAT_0077f4d8 + 5);
    FUN_00409be0(&DAT_0077f4d4,&DAT_006f52dc,1,DAT_0077f4d8 + 5);
  }
  DAT_0077f4d8 = DAT_0077f4d8 + 1;
  uVar3 = FUN_005b325c(&DAT_005b27dc,1);
  *(undefined4 *)(DAT_0077f4c4 + -4 + DAT_0077f4d8 * 4) = uVar3;
  FUN_0041666c(DAT_0077f4d8 + -1,&local_8);
  FUN_0040839c(DAT_0077f4cc + -4 + DAT_0077f4d8 * 4,L"sprite",local_8);
  FUN_004199b0();
  *(double *)(DAT_0077f4d0 + -8 + DAT_0077f4d8 * 8) = (double)in_ST0;
  *(undefined4 *)(DAT_0077f4c8 + -4 + DAT_0077f4d8 * 4) = 0;
  uVar3 = FUN_005b401c(*(undefined4 *)(DAT_0077f4c4 + -4 + DAT_0077f4d8 * 4));
  uVar4 = FUN_005a9c14(uVar3);
  *(undefined4 *)(DAT_0077f4d4 + -4 + DAT_0077f4d8 * 4) = uVar4;
  FUN_00405a7c(uVar3);
  puVar1 = puStack_14;
  DAT_00790170 = 1;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006f5802;
  puStack_18 = (undefined1 *)0x6f57fa;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
