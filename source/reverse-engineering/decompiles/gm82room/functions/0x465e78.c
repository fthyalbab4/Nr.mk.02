// rea decompile_all
// name: FUN_00465e78
// address: 0x465e78
// body: available
// range: 0x465e78-0x465fee inclusive
// range: 0x466011-0x466034 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x465e97 (push 0x466035 followed by fs-segment stack chaining); handler 0x466035 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x465f80 (push 0x465fef followed by fs-segment stack chaining); handler 0x465fef lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465e78(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  UINT ColorUse;
  UINT start;
  undefined4 uVar3;
  HBITMAP hbm;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_8c;
  undefined1 *puStackY_88;
  undefined1 *puStackY_84;
  int *piStackY_80;
  UINT cLines;
  undefined *lpBits;
  BITMAPINFO *lpbmi;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined2 local_30;
  undefined2 local_2e;
  int local_10;
  UINT local_c;
  int *local_8;

  puStack_4c = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = 0;
  puStack_50 = &LAB_00466035;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puVar2 = &stack0xfffffffc;
  local_10 = param_1;
  if ((*(int *)(param_1 + 0x30) == 0) && (puVar2 = &stack0xfffffffc, *(int *)(param_1 + 0x38) != 0))
  {
    piVar1 = *(int **)(param_1 + 0x38);
    (**(code **)(*piVar1 + 0xc))();
    FUN_00409dfc(&local_c,&DAT_00465e48,1);
    ColorUse = FUN_0040b268(&local_8);
    lpbmi = *(BITMAPINFO **)(local_10 + 0x38);
    lpBits = PTR_DAT_00688c70;
    WICConvertBitmapSource();
    cLines = local_c;
    start = FUN_00409c34(local_c);
    piStackY_80 = local_8;
    puStackY_84 = (undefined1 *)0x465f2b;
    (**(code **)(*local_8 + 0x1c))();
    puStackY_84 = (undefined1 *)0x465f3a;
    FUN_00404f38(&local_3c,0x2c,0);
    local_3c = 0x2c;
    local_38 = *(undefined4 *)(local_10 + 0x28);
    local_34 = -*(int *)(local_10 + 0x2c);
    local_30 = 1;
    local_2e = 0x20;
    puStackY_84 = (undefined1 *)0x465f6d;
    uVar3 = FUN_00462804(&PTR_FUN_00458e94,1);
    *(undefined4 *)(local_10 + 0x30) = uVar3;
    puStackY_88 = &LAB_00465fef;
    uStackY_8c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_8c;
    puStackY_84 = &stack0xfffffffc;
    FUN_00464480(uVar3,7);
    (**(code **)(**(int **)(local_10 + 0x30) + 0x6c))
              (*(int **)(local_10 + 0x30),*(undefined4 *)(local_10 + 0x28),
               *(undefined4 *)(local_10 + 0x2c));
    hbm = (HBITMAP)(**(code **)(**(int **)(local_10 + 0x30) + 0x70))();
    FUN_00463124(*(undefined4 *)(local_10 + 0x30));
    hdc = (HDC)FUN_0045d4ec();
    piStackY_80 = (int *)0x465fd8;
    SetDIBits(hdc,hbm,start,cLines,lpBits,lpbmi,ColorUse);
    FUN_00463490(*(undefined4 *)(local_10 + 0x30),1);
    *in_FS_OFFSET = piVar1;
    puVar2 = puStack_4c;
  }
  puStack_4c = puVar2;
  puVar2 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_0046603c;
  puStack_50 = (undefined1 *)0x46602c;
  FUN_00409e08(&local_c,&DAT_00465e48,puVar2);
  puStack_50 = (undefined1 *)0x466034;
  FUN_0040b268(&local_8);
  return;
}
