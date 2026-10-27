// rea decompile_all
// name: FUN_00679ec8
// address: 0x679ec8
// body: available
// range: 0x679ec8-0x679fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x679ee6 (push 0x679fac followed by fs-segment stack chaining); handler 0x679fac lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00679ec8(int param_1)

{
  undefined1 *puVar1;
  HDC pHVar2;
  LPCWSTR pWVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined1 *apuStackY_17f0 [1513];
  int iVar7;
  LPRECT ptVar8;
  UINT UVar9;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  bVar6 = 0;
  puStack_30 = &stack0xfffffffc;
  local_20 = 0;
  local_18 = 0;
  puStack_34 = &LAB_00679fac;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc8;
  FUN_0040c114(0,0,0,&stack0xffffffec,0);
  puVar4 = (undefined4 *)(param_1 + 0x1e0 + (uint)bVar6 * -8);
  *(undefined4 *)(param_1 + 0x1dc) = local_14;
  puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
  *puVar4 = *(undefined4 *)((int)&stack0xfffffff0 + (uint)bVar6 * 0xfffffffe * 4);
  *puVar5 = *(undefined4 *)(&stack0xfffffff4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  puVar5[(uint)bVar6 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xfffffff4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
  ;
  if (*(int *)(param_1 + 0x1b4) == 0) {
    pHVar2 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x1a8));
    FUN_004ee6a0(param_1,&stack0xffffffe0);
    ptVar8 = (LPRECT)(param_1 + 0x1dc);
    UVar9 = 0x400;
    iVar7 = -1;
    local_1c = local_20;
    pWVar3 = (LPCWSTR)FUN_00407f44(local_20);
    DrawTextW(pHVar2,pWVar3,iVar7,ptVar8,UVar9);
  }
  else {
    pHVar2 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x1a8));
    FUN_00673fe0(*(undefined4 *)(param_1 + 0x1b4),&stack0xffffffe8);
    ptVar8 = (LPRECT)(param_1 + 0x1dc);
    UVar9 = 0x400;
    iVar7 = -1;
    local_1c = local_18;
    pWVar3 = (LPCWSTR)FUN_00407f44(local_18);
    DrawTextW(pHVar2,pWVar3,iVar7,ptVar8,UVar9);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00679fb3;
  puStack_34 = (undefined1 *)0x679fa3;
  thunk_FUN_00406e5c(&stack0xffffffe0,uStack_38,puVar1);
  puStack_34 = (undefined1 *)0x679fab;
  thunk_FUN_00406e5c(&stack0xffffffe8);
  return;
}
