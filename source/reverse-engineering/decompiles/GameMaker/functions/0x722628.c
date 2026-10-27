// rea decompile_all
// name: FUN_00722628
// address: 0x722628
// body: available
// range: 0x722628-0x722743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x72263e (push 0x722744 followed by fs-segment stack chaining); handler 0x722744 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00722628(void)

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
  puStack_14 = &LAB_00722744;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = FUN_00409a18(DAT_0077f608);
  if (iVar2 == DAT_0077f618) {
    FUN_00409be0(&DAT_0077f608,&DAT_0072207c,1,DAT_0077f618 + 5);
    FUN_00409be0(&DAT_0077f60c,&DAT_007220a4,1,DAT_0077f618 + 5);
    FUN_00409be0(&DAT_0077f610,&DAT_007220cc,1,DAT_0077f618 + 5);
    FUN_00409be0(&DAT_0077f614,&DAT_007220f4,1,DAT_0077f618 + 5);
  }
  DAT_0077f618 = DAT_0077f618 + 1;
  uVar3 = FUN_005357b0(&DAT_00534924,1);
  *(undefined4 *)(DAT_0077f608 + -4 + DAT_0077f618 * 4) = uVar3;
  FUN_0041666c(DAT_0077f618 + -1,&local_8);
  FUN_0040839c(DAT_0077f610 + -4 + DAT_0077f618 * 4,L"path",local_8);
  FUN_004199b0();
  puVar1 = puStack_10;
  *(double *)(DAT_0077f614 + -8 + DAT_0077f618 * 8) = (double)in_ST0;
  *(undefined4 *)(DAT_0077f60c + -4 + DAT_0077f618 * 4) = 0;
  DAT_007a4658 = 1;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0072274b;
  puStack_14 = (undefined1 *)0x722743;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
