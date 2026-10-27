// rea decompile_all
// name: FUN_0070e5b4
// address: 0x70e5b4
// body: available
// range: 0x70e5b4-0x70e6df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x70e5c9 (push 0x70e6e0 followed by fs-segment stack chaining); handler 0x70e6e0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070e5b4(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0070e6e0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  DAT_007909e0 = FUN_0052f114(param_1);
  FUN_0052f038(param_1);
  _DAT_007909d8 = (double)in_ST0;
  DAT_007909d4 = FUN_0052f024(param_1);
  FUN_00409be0(&DAT_007909c4,&DAT_0070e508,1,DAT_007909d4);
  FUN_00409be0(&DAT_007909c8,&DAT_0070e534,1,DAT_007909d4);
  FUN_00409be0(&DAT_007909cc,&DAT_0070e560,1,DAT_007909d4);
  if (-1 < DAT_007909d4 + -1) {
    iVar4 = 0;
    iVar5 = DAT_007909d4;
    do {
      *(undefined4 *)(DAT_007909c4 + iVar4 * 4) = 0;
      uVar2 = FUN_0052f114(param_1);
      *(undefined1 *)(DAT_007909c8 + iVar4) = uVar2;
      FUN_0052f060(param_1,&local_8);
      FUN_00407eb8(DAT_007909cc + iVar4 * 4,local_8);
      if ((DAT_007909e0 != '\0') && (*(char *)(DAT_007909c8 + iVar4) != '\0')) {
        uVar3 = FUN_0062d200(&DAT_0062cf48,1);
        *(undefined4 *)(DAT_007909c4 + iVar4 * 4) = uVar3;
        FUN_0062d298(*(undefined4 *)(DAT_007909c4 + iVar4 * 4),param_1);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0070e6e7;
  puStack_1c = (undefined1 *)0x70e6df;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
