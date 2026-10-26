// rea decompile_all
// name: FUN_006106b0
// address: 0x6106b0
// body: available
// range: 0x6106b0-0x610926 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6106c9 (push 0x610927 followed by fs-segment stack chaining); handler 0x610927 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006106b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_00610927;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar4 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0xc) == 6) {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      in_stack_ffffffd4 = *(undefined4 *)(param_1 + 0x50);
      in_stack_ffffffcc = *(undefined4 *)(param_1 + 0x54);
      FUN_0040875c(param_1 + 0x1c,3,param_3,in_stack_ffffffcc,&DAT_0061095c);
    }
    else {
      in_stack_ffffffd4 = *(undefined4 *)(param_1 + 0x50);
      in_stack_ffffffcc = *(undefined4 *)(param_1 + 0x54);
      puStack_20 = &stack0xfffffffc;
      FUN_0040875c(param_1 + 0x1c,3,param_3,in_stack_ffffffcc,L" += ");
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    puVar4 = puStack_20;
  }
  puStack_20 = puVar4;
  if (*(int *)(param_1 + 0xc) == 7) {
    FUN_00408194(param_1 + 0x1c,*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x14) == 2) {
    uVar6 = FUN_00616588(&DAT_006160fc,1,*(undefined4 *)(param_1 + 0x1c),0);
    *(undefined4 *)(param_1 + 0x20) = uVar6;
    cVar5 = FUN_00616664(uVar6);
    if (cVar5 == '\0') {
      FUN_00408678(&local_8,L"COMPILATION ERROR in code action\r",*(undefined4 *)PTR_DAT_00689674);
      FUN_0061156c(local_8,1);
      goto LAB_0061090c;
    }
  }
  uVar6 = 0x61078b;
  FUN_00408194(param_1 + 0x1c,0);
  iVar8 = 0;
  do {
    *(undefined4 *)(param_1 + 0x130 + iVar8 * 4) = 0;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 8);
  iVar8 = *(int *)(param_1 + 0x24);
  if (-1 < iVar8 + -1) {
    iVar9 = 0;
    do {
      if (*(int *)(param_1 + 0x28 + iVar9 * 4) == 2) {
        iVar2 = *(int *)(param_1 + 0x50 + iVar9 * 4);
        iVar7 = 0;
        if (iVar2 != 0) {
          iVar7 = *(int *)(iVar2 + -4);
        }
        if (iVar7 < 1) {
          bVar3 = false;
        }
        else {
          sVar1 = **(short **)(param_1 + 0x50 + iVar9 * 4);
          if ((sVar1 == 0x27) || (sVar1 == 0x22)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
        }
        if (bVar3) {
          *(undefined4 *)(param_1 + 0x28 + iVar9 * 4) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x28 + iVar9 * 4) = 1;
        }
      }
      iVar2 = *(int *)(param_1 + 0x28 + iVar9 * 4);
      if ((iVar2 == 1) || (iVar2 == 0xf)) {
        *(undefined4 *)(param_1 + 0x70 + iVar9 * 0x18) = 1;
        uVar6 = 0x610825;
        FUN_004083e8(param_1 + 0x80 + iVar9 * 0x18,*(undefined4 *)(param_1 + 0x50 + iVar9 * 4),
                     0xfde9);
        *(undefined4 *)(param_1 + 0x28 + iVar9 * 4) = 0xffffffff;
      }
      if (*(int *)(param_1 + 0x28 + iVar9 * 4) != -1) {
        *(undefined4 *)(param_1 + 0x28 + iVar9 * 4) = 0;
        in_stack_ffffffcc = 1;
        uVar6 = FUN_00616588(&DAT_006160fc,1,*(undefined4 *)(param_1 + 0x50 + iVar9 * 4),uVar6);
        *(undefined4 *)(param_1 + 0x130 + iVar9 * 4) = uVar6;
        cVar5 = FUN_00616664(*(undefined4 *)(param_1 + 0x130 + iVar9 * 4));
        if (cVar5 == '\0') {
          FUN_0041636c(iVar9,&local_10);
          in_stack_ffffffcc = *(undefined4 *)PTR_DAT_00689674;
          FUN_0040875c(&local_c,4);
          FUN_0061156c(local_c,1);
          break;
        }
        if (*(int *)(*(int *)(param_1 + 0x130 + iVar9 * 4) + 4) == 3) {
          FUN_00409360(param_1 + 0x70 + iVar9 * 0x18,*(int *)(param_1 + 0x130 + iVar9 * 4) + 0x48,
                       &DAT_00615f70);
          *(undefined4 *)(param_1 + 0x28 + iVar9 * 4) = 0xffffffff;
        }
      }
      if ((*(int *)(param_1 + 0x28 + iVar9 * 4) == -1) &&
         (*(int *)(param_1 + 0x130 + iVar9 * 4) != 0)) {
        FUN_00405fdc(*(undefined4 *)(param_1 + 0x130 + iVar9 * 4));
        *(undefined4 *)(param_1 + 0x130 + iVar9 * 4) = 0;
      }
      uVar6 = 0x610902;
      FUN_00408194(param_1 + 0x50 + iVar9 * 4,0);
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
LAB_0061090c:
  *in_FS_OFFSET = in_stack_ffffffcc;
  thunk_FUN_004072fc(&local_10,3,in_stack_ffffffd4,&LAB_0061092e);
  return;
}
