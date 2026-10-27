// rea decompile_all
// name: FUN_00712e90
// address: 0x712e90
// body: available
// range: 0x712e90-0x712f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x712ea7 (push 0x712f48 followed by fs-segment stack chaining); handler 0x712f48 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00712e90(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_00712f48;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (-1 < DAT_0077f5d8 + -1) {
    iVar2 = 0;
    iVar3 = DAT_0077f5d8;
    do {
      *(undefined1 *)(DAT_00790a14 + iVar2) = 0;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_0052f024(param_1);
  if (iVar3 == 700) {
    iVar3 = FUN_0052f024(param_1);
    if (-1 < iVar3 + -1) {
      do {
        FUN_0052f060(param_1,&local_8);
        iVar2 = FUN_0071335c(local_8,0);
        if (iVar2 < 0) {
          FUN_0040839c(&local_c,L"Cannot find extension package: ",local_8);
          FUN_004d43f8(local_c);
        }
        else {
          *(undefined1 *)(DAT_00790a14 + iVar2) = 1;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    DAT_00790a0c = 0;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00712f4f;
  puStack_20 = (undefined1 *)0x712f47;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
