// rea decompile_all
// name: FUN_00692a34
// address: 0x692a34
// body: available
// range: 0x692a34-0x692c11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x692a55 (push 0x692c12 followed by fs-segment stack chaining); handler 0x692c12 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00692a34(undefined4 param_1)

{
  undefined1 *puVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar13;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  int local_10;
  char local_a;
  undefined1 local_9;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_00692c12;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_9 = 0;
  local_8 = param_1;
  FUN_00692994();
  iVar9 = FUN_0052f024(local_8);
  if ((iVar9 == 0x1a4) || (iVar9 == 800)) {
    DAT_0077f3b8 = FUN_0052f024(local_8);
    FUN_00409be0(&DAT_0077f3a8,&DAT_006928f8,1,DAT_0077f3b8);
    FUN_00409be0(&DAT_0077f3ac,&DAT_00692920,1,DAT_0077f3b8);
    FUN_00409be0(&DAT_0077f3b0,&DAT_00692948,1,DAT_0077f3b8);
    FUN_00409be0(&DAT_0077f3b4,&DAT_00692970,1,DAT_0077f3b8);
    if (-1 < DAT_0077f3b8 + -1) {
      local_10 = DAT_0077f3b8;
      iVar12 = 0;
      do {
        uVar10 = local_8;
        fVar13 = in_ST0;
        fVar2 = in_ST1;
        fVar3 = in_ST2;
        fVar4 = in_ST3;
        fVar5 = in_ST4;
        fVar6 = in_ST5;
        fVar7 = in_ST6;
        if (799 < iVar9) {
          uVar10 = FUN_0052f2e4(local_8);
          fVar13 = in_ST0;
          fVar2 = in_ST1;
          fVar3 = in_ST2;
          fVar4 = in_ST3;
          fVar5 = in_ST4;
          fVar6 = in_ST5;
          fVar7 = in_ST6;
        }
        in_ST6 = in_ST7;
        in_ST5 = fVar7;
        in_ST4 = fVar6;
        in_ST3 = fVar5;
        in_ST2 = fVar4;
        in_ST1 = fVar3;
        in_ST0 = fVar2;
        local_a = FUN_0052f114(uVar10);
        *(undefined4 *)(DAT_0077f3a8 + iVar12 * 4) = 0;
        *(undefined4 *)(DAT_0077f3ac + iVar12 * 4) = 0;
        FUN_00407eb8(DAT_0077f3b0 + iVar12 * 4,0);
        FUN_004199b0();
        *(double *)(DAT_0077f3b4 + iVar12 * 8) = (double)fVar13;
        in_ST7 = in_ST6;
        if (local_a != '\0') {
          FUN_0052f060(uVar10,&local_14);
          FUN_00407eb8(DAT_0077f3b0 + iVar12 * 4,local_14);
          if (799 < iVar9) {
            FUN_0052f038(uVar10);
            *(double *)(DAT_0077f3b4 + iVar12 * 8) = (double)in_ST0;
            in_ST0 = in_ST1;
            in_ST1 = in_ST2;
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            in_ST6 = in_ST7;
          }
          uVar11 = FUN_006577b8(&DAT_006564cc,1);
          *(undefined4 *)(DAT_0077f3a8 + iVar12 * 4) = uVar11;
          cVar8 = FUN_00657cfc(*(undefined4 *)(DAT_0077f3a8 + iVar12 * 4),uVar10);
          if (cVar8 == '\0') goto LAB_00692bfc;
        }
        if (799 < iVar9) {
          FUN_00405a7c(uVar10);
        }
        iVar12 = iVar12 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    uVar10 = FUN_0052f024(local_8);
    *(undefined4 *)PTR_DAT_00782288 = uVar10;
    uVar10 = FUN_0052f024(local_8);
    *(undefined4 *)PTR_DAT_00781860 = uVar10;
    DAT_0078a1f8 = 0;
    local_9 = 1;
  }
LAB_00692bfc:
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00692c19;
  puStack_28 = (undefined1 *)0x692c11;
  thunk_FUN_00406e5c(&local_14,uStack_2c,puVar1);
  return;
}
