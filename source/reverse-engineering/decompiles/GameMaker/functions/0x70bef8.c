// rea decompile_all
// name: FUN_0070bef8
// address: 0x70bef8
// body: available
// range: 0x70bef8-0x70c108 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x70bf14 (push 0x70c109 followed by fs-segment stack chaining); handler 0x70c109 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0070bef8(undefined4 param_1)

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
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0070c109;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  DAT_007908ec = FUN_0052f114(param_1);
  DAT_007908e8 = FUN_0052f024(param_1);
  FUN_00409be0(&DAT_007908d4,&DAT_0070bdc8,1,DAT_007908e8);
  FUN_00409be0(&DAT_007908d8,&DAT_0070bdf4,1,DAT_007908e8);
  FUN_00409be0(&DAT_007908dc,&DAT_0070be20,1,DAT_007908e8);
  FUN_00409be0(&DAT_007908e0,&DAT_0070be4c,1,DAT_007908e8);
  if (-1 < DAT_007908e8 + -1) {
    iVar4 = 0;
    iVar5 = DAT_007908e8;
    do {
      *(undefined4 *)(DAT_007908d4 + iVar4 * 4) = 0;
      uVar2 = FUN_0052f114(param_1);
      *(undefined1 *)(DAT_007908d8 + iVar4) = uVar2;
      FUN_0052f060(param_1,&local_c);
      FUN_00407eb8(DAT_007908dc + iVar4 * 4,local_c);
      FUN_0052f038(param_1);
      *(double *)(DAT_007908e0 + iVar4 * 8) = (double)in_ST0;
      fVar6 = in_ST7;
      if ((DAT_007908ec != '\0') && (*(char *)(DAT_007908d8 + iVar4) != '\0')) {
        uVar3 = FUN_00652860(&DAT_0065267c,1);
        *(undefined4 *)(DAT_007908d4 + iVar4 * 4) = uVar3;
        FUN_006528c4(*(undefined4 *)(DAT_007908d4 + iVar4 * 4),param_1);
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
  FUN_00409be0(&DAT_007908f0,&DAT_0070bea4,1,0);
  FUN_00409be0(&DAT_007908f4,&DAT_0070bed0,1,0);
  while( true ) {
    FUN_0052f060(param_1,&local_8);
    iVar5 = FUN_0052f024(param_1);
    puVar1 = puStack_1c;
    if (iVar5 < 0) break;
    iVar4 = FUN_00409a18(DAT_007908f0);
    FUN_00409be0(&DAT_007908f0,&DAT_0070bea4,1,iVar4 + 1);
    iVar4 = FUN_00409a18(DAT_007908f4);
    FUN_00409be0(&DAT_007908f4,&DAT_0070bed0,1,iVar4 + 1);
    iVar4 = FUN_00409a18(DAT_007908f0);
    FUN_00407eb8(DAT_007908f0 + -4 + iVar4 * 4,local_8);
    iVar4 = FUN_00409a18(DAT_007908f4);
    *(int *)(DAT_007908f4 + -4 + iVar4 * 4) = iVar5;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0070c110;
  puStack_20 = (undefined1 *)0x70c108;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
