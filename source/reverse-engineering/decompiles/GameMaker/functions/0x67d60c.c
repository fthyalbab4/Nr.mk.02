// rea decompile_all
// name: FUN_0067d60c
// address: 0x67d60c
// body: available
// range: 0x67d60c-0x67d7a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67d630 (push 0x67d7a7 followed by fs-segment stack chaining); handler 0x67d7a7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_0067d60c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  HDC pHVar3;
  LPRECT ptVar4;
  LPCWSTR pWVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  undefined1 *apuStackY_17fc [1511];
  int iVar9;
  UINT UVar10;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  UINT local_10;
  UINT local_c;
  undefined4 local_8;

  bVar8 = 0;
  puStack_44 = &stack0xfffffffc;
  local_2c = 0;
  local_30 = 0;
  local_24 = 0;
  local_28 = 0;
  puStack_48 = &LAB_0067d7a7;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffb4;
  FUN_0040c114(0x10,0,*(int *)(param_1 + 0x48) + -0x10,&stack0xffffffe0,0);
  puVar6 = (undefined4 *)(param_4 + -0xc + (uint)bVar8 * -8);
  *(undefined4 *)(param_4 + -0x10) = local_20;
  puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
  *puVar6 = *(undefined4 *)((int)&stack0xffffffe4 + (uint)bVar8 * 0xfffffffe * 4);
  *puVar7 = *(undefined4 *)(&stack0xffffffe8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  puVar7[(uint)bVar8 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xffffffe8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) + ((uint)bVar8 * -2 + 1) * 4)
  ;
  if (*(char *)(param_4 + -0x11) == '\0') {
    *(undefined4 *)(param_4 + -0x18) = 0xc10;
    pHVar3 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x270));
    piVar1 = *(int **)(*(int *)(param_4 + -0x1c) + 0x14);
    (**(code **)(*piVar1 + 0x1c))(piVar1,&stack0xffffffd0);
    FUN_00415dd0(local_30,&stack0xffffffd4);
    UVar10 = *(UINT *)(param_4 + -0x18);
    ptVar4 = (LPRECT)(param_4 + -0x10);
    iVar9 = -1;
    local_10 = UVar10;
    pWVar5 = (LPCWSTR)FUN_00407f44(local_2c);
    DrawTextW(pHVar3,pWVar5,iVar9,ptVar4,UVar10);
  }
  else {
    *(undefined4 *)(param_4 + -0x18) = 0xc10;
    pHVar3 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x270));
    piVar1 = *(int **)(*(int *)(param_4 + -0x1c) + 0x24);
    (**(code **)(*piVar1 + 0x1c))(piVar1,&stack0xffffffd8);
    FUN_00415dd0(local_28,&stack0xffffffdc);
    local_8 = local_24;
    UVar10 = *(UINT *)(param_4 + -0x18);
    ptVar4 = (LPRECT)(param_4 + -0x10);
    iVar9 = -1;
    local_c = UVar10;
    pWVar5 = (LPCWSTR)FUN_00407f44(local_24);
    DrawTextW(pHVar3,pWVar5,iVar9,ptVar4,UVar10);
    FUN_0045b498(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),1);
    FUN_0045bea4(*(undefined4 *)(param_1 + 0x270),*(undefined4 *)(*(int *)(param_4 + -0x1c) + 0x40))
    ;
    FUN_0045b498(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),0);
  }
  puVar2 = puStack_44;
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_0067d7ae;
  puStack_48 = (undefined1 *)0x67d7a6;
  thunk_FUN_00406e80(&stack0xffffffd0,4,puVar2);
  return;
}
