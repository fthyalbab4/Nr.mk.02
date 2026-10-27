// rea decompile_all
// name: FUN_0064dba0
// address: 0x64dba0
// body: available
// range: 0x64dba0-0x64dd0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64dbb7 (push 0x64dd0b followed by fs-segment stack chaining); handler 0x64dd0b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064dba0(void)

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
  puStack_18 = &LAB_0064dd0b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = FUN_00409a18(DAT_0077f1ac);
  if (iVar2 == DAT_0077f1c0) {
    FUN_00409be0(&DAT_0077f1ac,&DAT_0064d734,1,DAT_0077f1c0 + 5);
    FUN_00409be0(&DAT_0077f1b0,&DAT_0064d764,1,DAT_0077f1c0 + 5);
    FUN_00409be0(&DAT_0077f1b4,&DAT_0064d794,1,DAT_0077f1c0 + 5);
    FUN_00409be0(&DAT_0077f1b8,&DAT_0064d7c4,1,DAT_0077f1c0 + 5);
    FUN_00409be0(&DAT_0077f1bc,&DAT_0064d7f4,1,DAT_0077f1c0 + 5);
  }
  DAT_0077f1c0 = DAT_0077f1c0 + 1;
  uVar3 = FUN_0062dba4(&DAT_0062d408,1);
  *(undefined4 *)(DAT_0077f1ac + -4 + DAT_0077f1c0 * 4) = uVar3;
  FUN_0041666c(DAT_0077f1c0 + -1,&local_8);
  FUN_0040839c(DAT_0077f1b4 + -4 + DAT_0077f1c0 * 4,L"background",local_8);
  FUN_004199b0();
  *(double *)(DAT_0077f1b8 + -8 + DAT_0077f1c0 * 8) = (double)in_ST0;
  *(undefined4 *)(DAT_0077f1b0 + -4 + DAT_0077f1c0 * 4) = 0;
  uVar3 = FUN_0062e5e8(*(undefined4 *)(DAT_0077f1ac + -4 + DAT_0077f1c0 * 4));
  uVar4 = FUN_005a9c14(uVar3);
  *(undefined4 *)(DAT_0077f1bc + -4 + DAT_0077f1c0 * 4) = uVar4;
  FUN_00405a7c(uVar3);
  puVar1 = puStack_14;
  DAT_0078a168 = 1;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0064dd12;
  puStack_18 = (undefined1 *)0x64dd0a;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
