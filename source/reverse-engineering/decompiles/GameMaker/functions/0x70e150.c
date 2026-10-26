// rea decompile_all
// name: FUN_0070e150
// address: 0x70e150
// body: available
// range: 0x70e150-0x70e291 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x70e16a (push 0x70e292 followed by fs-segment stack chaining); handler 0x70e292 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0070e150(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  float10 fVar6;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0070e292;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  DAT_007909b4 = FUN_0052f114(param_1);
  DAT_007909b0 = FUN_0052f024(param_1);
  FUN_00409be0(&DAT_007909a0,&DAT_0070e0a4,1,DAT_007909b0);
  FUN_00409be0(&DAT_007909a4,&DAT_0070e0d0,1,DAT_007909b0);
  FUN_00409be0(&DAT_007909a8,&DAT_0070e0fc,1,DAT_007909b0);
  FUN_00409be0(&DAT_007909ac,&DAT_0070e128,1,DAT_007909b0);
  if (-1 < DAT_007909b0 + -1) {
    iVar4 = 0;
    iVar5 = DAT_007909b0;
    do {
      *(undefined4 *)(DAT_007909a0 + iVar4 * 4) = 0;
      uVar2 = FUN_0052f114(param_1);
      *(undefined1 *)(DAT_007909a4 + iVar4) = uVar2;
      FUN_0052f060(param_1,&local_8);
      FUN_00407eb8(DAT_007909a8 + iVar4 * 4,local_8);
      FUN_0052f038(param_1);
      *(double *)(DAT_007909ac + iVar4 * 8) = (double)in_ST0;
      fVar6 = in_ST7;
      if ((DAT_007909b4 != '\0') && (*(char *)(DAT_007909a4 + iVar4) != '\0')) {
        uVar3 = FUN_006ca800(&DAT_006ca360,1);
        *(undefined4 *)(DAT_007909a0 + iVar4 * 4) = uVar3;
        FUN_006ca918(*(undefined4 *)(DAT_007909a0 + iVar4 * 4),param_1);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
      in_ST7 = fVar6;
    } while (iVar5 != 0);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0070e299;
  puStack_1c = (undefined1 *)0x70e291;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
