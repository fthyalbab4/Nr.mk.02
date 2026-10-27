// rea decompile_all
// name: FUN_0070c524
// address: 0x70c524
// body: available
// range: 0x70c524-0x70c734 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x70c540 (push 0x70c735 followed by fs-segment stack chaining); handler 0x70c735 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0070c524(undefined4 param_1)

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
  puStack_20 = &LAB_0070c735;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  DAT_00790910 = FUN_0052f114(param_1);
  DAT_0079090c = FUN_0052f024(param_1);
  FUN_00409be0(&DAT_007908f8,&DAT_0070c3f4,1,DAT_0079090c);
  FUN_00409be0(&DAT_007908fc,&DAT_0070c420,1,DAT_0079090c);
  FUN_00409be0(&DAT_00790900,&DAT_0070c44c,1,DAT_0079090c);
  FUN_00409be0(&DAT_00790904,&DAT_0070c478,1,DAT_0079090c);
  if (-1 < DAT_0079090c + -1) {
    iVar4 = 0;
    iVar5 = DAT_0079090c;
    do {
      *(undefined4 *)(DAT_007908f8 + iVar4 * 4) = 0;
      uVar2 = FUN_0052f114(param_1);
      *(undefined1 *)(DAT_007908fc + iVar4) = uVar2;
      FUN_0052f060(param_1,&local_c);
      FUN_00407eb8(DAT_00790900 + iVar4 * 4,local_c);
      FUN_0052f038(param_1);
      *(double *)(DAT_00790904 + iVar4 * 8) = (double)in_ST0;
      fVar6 = in_ST7;
      if ((DAT_00790910 != '\0') && (*(char *)(DAT_007908fc + iVar4) != '\0')) {
        uVar3 = FUN_005a8760(&DAT_005a6628,1);
        *(undefined4 *)(DAT_007908f8 + iVar4 * 4) = uVar3;
        FUN_005a8838(*(undefined4 *)(DAT_007908f8 + iVar4 * 4),param_1);
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
  FUN_00409be0(&DAT_00790914,&DAT_0070c4d0,1,0);
  FUN_00409be0(&DAT_00790918,&DAT_0070c4fc,1,0);
  while( true ) {
    FUN_0052f060(param_1,&local_8);
    iVar5 = FUN_0052f024(param_1);
    puVar1 = puStack_1c;
    if (iVar5 < 0) break;
    iVar4 = FUN_00409a18(DAT_00790914);
    FUN_00409be0(&DAT_00790914,&DAT_0070c4d0,1,iVar4 + 1);
    iVar4 = FUN_00409a18(DAT_00790918);
    FUN_00409be0(&DAT_00790918,&DAT_0070c4fc,1,iVar4 + 1);
    iVar4 = FUN_00409a18(DAT_00790914);
    FUN_00407eb8(DAT_00790914 + -4 + iVar4 * 4,local_8);
    iVar4 = FUN_00409a18(DAT_00790918);
    *(int *)(DAT_00790918 + -4 + iVar4 * 4) = iVar5;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0070c73c;
  puStack_20 = (undefined1 *)0x70c734;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
