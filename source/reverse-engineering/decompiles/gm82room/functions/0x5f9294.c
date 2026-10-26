// rea decompile_all
// name: FUN_005f9294
// address: 0x5f9294
// body: available
// range: 0x5f9294-0x5f9378 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f92b8 (push 0x5f9379 followed by fs-segment stack chaining); handler 0x5f9379 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f9294(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x5f92ad;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_20 = &LAB_005f9379;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if ((0 < param_1) && (puStack_1c = &stack0xfffffffc, param_1 < 1000000)) {
    puStack_1c = &stack0xfffffffc;
    iVar2 = FUN_00409c34(DAT_00850e10);
    if (iVar2 <= param_1) {
      iVar2 = FUN_00409c34(DAT_00850e10);
      FUN_00409dfc(&DAT_00850e10,&DAT_005f86e0,1,param_1 + 1000);
      FUN_00409dfc(&DAT_00850e14,&DAT_005f8714,1,param_1 + 1000);
      if (iVar2 <= param_1 + 999) {
        iVar3 = ((param_1 + 999) - iVar2) + 1;
        do {
          *(undefined4 *)(DAT_00850e10 + iVar2 * 4) = 0xffffffff;
          FUN_00408194(DAT_00850e14 + iVar2 * 4,0);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    *(undefined4 *)(DAT_00850e10 + param_1 * 4) = param_3;
    FUN_00408194(DAT_00850e14 + param_1 * 4,local_8);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005f9380;
  puStack_20 = (undefined1 *)0x5f9378;
  thunk_FUN_004072d8(&local_8,uStack_24,puVar1);
  return;
}
