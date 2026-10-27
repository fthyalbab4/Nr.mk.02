// rea decompile_all
// name: FUN_0070d1c4
// address: 0x70d1c4
// body: available
// range: 0x70d1c4-0x70d3d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x70d1e0 (push 0x70d3d5 followed by fs-segment stack chaining); handler 0x70d3d5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0070d1c4(undefined4 param_1)

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
  puStack_20 = &LAB_0070d3d5;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  DAT_00790958 = FUN_0052f114(param_1);
  DAT_00790954 = FUN_0052f024(param_1);
  FUN_00409be0(&DAT_00790940,&DAT_0070d094,1,DAT_00790954);
  FUN_00409be0(&DAT_00790944,&DAT_0070d0c0,1,DAT_00790954);
  FUN_00409be0(&DAT_00790948,&DAT_0070d0ec,1,DAT_00790954);
  FUN_00409be0(&DAT_0079094c,&DAT_0070d118,1,DAT_00790954);
  if (-1 < DAT_00790954 + -1) {
    iVar4 = 0;
    iVar5 = DAT_00790954;
    do {
      *(undefined4 *)(DAT_00790940 + iVar4 * 4) = 0;
      uVar2 = FUN_0052f114(param_1);
      *(undefined1 *)(DAT_00790944 + iVar4) = uVar2;
      FUN_0052f060(param_1,&local_c);
      FUN_00407eb8(DAT_00790948 + iVar4 * 4,local_c);
      FUN_0052f038(param_1);
      *(double *)(DAT_0079094c + iVar4 * 8) = (double)in_ST0;
      fVar6 = in_ST7;
      if ((DAT_00790958 != '\0') && (*(char *)(DAT_00790944 + iVar4) != '\0')) {
        uVar3 = FUN_007049a8(&DAT_00704428,1);
        *(undefined4 *)(DAT_00790940 + iVar4 * 4) = uVar3;
        FUN_00704bc8(*(undefined4 *)(DAT_00790940 + iVar4 * 4),param_1);
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
  FUN_00409be0(&DAT_0079095c,&DAT_0070d170,1,0);
  FUN_00409be0(&DAT_00790960,&DAT_0070d19c,1,0);
  while( true ) {
    FUN_0052f060(param_1,&local_8);
    iVar5 = FUN_0052f024(param_1);
    puVar1 = puStack_1c;
    if (iVar5 < 0) break;
    iVar4 = FUN_00409a18(DAT_0079095c);
    FUN_00409be0(&DAT_0079095c,&DAT_0070d170,1,iVar4 + 1);
    iVar4 = FUN_00409a18(DAT_00790960);
    FUN_00409be0(&DAT_00790960,&DAT_0070d19c,1,iVar4 + 1);
    iVar4 = FUN_00409a18(DAT_0079095c);
    FUN_00407eb8(DAT_0079095c + -4 + iVar4 * 4,local_8);
    iVar4 = FUN_00409a18(DAT_00790960);
    *(int *)(DAT_00790960 + -4 + iVar4 * 4) = iVar5;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0070d3dc;
  puStack_20 = (undefined1 *)0x70d3d4;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
