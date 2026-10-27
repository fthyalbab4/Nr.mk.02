// rea decompile_all
// name: FUN_0058f9f8
// address: 0x58f9f8
// body: available
// range: 0x58f9f8-0x58fd2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x58fa20 (push 0x58fd2d followed by fs-segment stack chaining); handler 0x58fd2d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f9f8(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined *puVar9;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [16];
  undefined4 local_8;

  puVar1 = PTR_DAT_0068939c;
  puStack_3c = &stack0xfffffffc;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_8 = 0;
  puStack_40 = &LAB_0058fd2d;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  FUN_0058ebcc();
  FUN_0060aad4(*(undefined4 *)puVar1);
  FUN_0060b0e8(*(undefined4 *)puVar1);
  if (*(char *)(*(int *)puVar1 + 0x40) == '\0') {
    *(undefined4 *)PTR_DAT_0068911c = 0;
    DAT_0084f01c = *(undefined4 *)(*(int *)puVar1 + 0xc);
    DAT_0084f020 = *(undefined4 *)(*(int *)puVar1 + 0x10);
    FUN_0061fc50(0,0,*(undefined4 *)(*(int *)puVar1 + 0xc));
    FUN_0061fc94();
    puVar9 = local_18;
    FUN_00436ad0(0,0,*(undefined4 *)(*(int *)puVar1 + 0xc),puVar9,
                 *(undefined4 *)(*(int *)puVar1 + 0x10));
    FUN_0058f138(local_18);
  }
  else {
    if (*(char *)(*(int *)puVar1 + 0x41) != '\0') {
      FUN_0056214c();
      FUN_00566200();
    }
    iVar8 = 0;
    do {
      *(int *)PTR_DAT_0068911c = iVar8;
      iVar2 = FUN_00608fd8(*(undefined4 *)puVar1,iVar8);
      if (*(char *)(iVar2 + 4) != '\0') {
        FUN_0061fc50(*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c),
                     *(undefined4 *)(iVar2 + 0x20));
        DAT_0084f01c = *(undefined4 *)(iVar2 + 0x20);
        DAT_0084f020 = *(undefined4 *)(iVar2 + 0x24);
        FUN_0061fc94();
        if (_DAT_0058fd3c <= ABS((float10)*(double *)(iVar2 + 0x28))) {
          iVar7 = (int)*(uint *)(iVar2 + 0x10) >> 1;
          if (iVar7 < 0) {
            iVar7 = iVar7 + (uint)((*(uint *)(iVar2 + 0x10) & 1) != 0);
          }
          iVar3 = (int)*(uint *)(iVar2 + 0x14) >> 1;
          if (iVar3 < 0) {
            iVar3 = iVar3 + (uint)((*(uint *)(iVar2 + 0x14) & 1) != 0);
          }
          iVar4 = (int)*(uint *)(iVar2 + 0x10) >> 1;
          if (iVar4 < 0) {
            iVar4 = iVar4 + (uint)((*(uint *)(iVar2 + 0x10) & 1) != 0);
          }
          iVar5 = (int)*(uint *)(iVar2 + 0x14) >> 1;
          if (iVar5 < 0) {
            iVar5 = iVar5 + (uint)((*(uint *)(iVar2 + 0x14) & 1) != 0);
          }
          FUN_00436ad0(*(int *)(iVar2 + 8) - iVar5,*(int *)(iVar2 + 0xc) - iVar4,
                       *(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x10) + iVar3,local_18,
                       *(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x14) + iVar7);
          FUN_0058f138(local_18);
        }
        else {
          FUN_00436ad0(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                       *(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x10),local_18,
                       *(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x14));
          FUN_0058f138(local_18);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 8);
    FUN_0056255c();
    uVar6 = FUN_00562554();
    FUN_0061fc50(0,0,uVar6);
    puVar9 = (undefined *)0x0;
    local_1c = FUN_00562554();
    local_20 = FUN_0056255c();
    FUN_0061fc94();
  }
  uVar6 = 0;
  FUN_004081e8(&local_8,*(undefined4 *)(*(int *)puVar1 + 4));
  if ((*PTR_DAT_00689610 != '\0') && ((*PTR_PTR_00689198 != '\0' || (0 < *(int *)PTR_DAT_00688f94)))
     ) {
    puVar9 = &DAT_0058fd54;
    FUN_0041636c(*(undefined4 *)PTR_DAT_00688f94,&local_24);
    uVar6 = local_24;
    FUN_0040875c(&local_8,4);
  }
  if (*PTR_PTR_00689268 != '\0') {
    FUN_0041636c(*(undefined4 *)PTR_DAT_00688b88,&local_28);
    FUN_0040875c(&local_8,4);
  }
  if (*PTR_PTR_006892ec != '\0') {
    FUN_004048b8();
    FUN_004165b0(&local_2c);
    FUN_0040875c(&local_8,4);
  }
  FUN_005620c0(local_8);
  *(undefined4 *)PTR_DAT_0068911c = 0;
  *in_FS_OFFSET = uVar6;
  thunk_FUN_004072fc(&local_2c,3,puVar9,&LAB_0058fd34);
  thunk_FUN_004072d8(&local_8);
  return;
}
