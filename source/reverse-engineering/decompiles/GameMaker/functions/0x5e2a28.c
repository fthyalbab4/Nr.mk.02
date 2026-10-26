// rea decompile_all
// name: FUN_005e2a28
// address: 0x5e2a28
// body: available
// range: 0x5e2a28-0x5e2b3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e2a47 (push 0x5e2b3e followed by fs-segment stack chaining); handler 0x5e2b3e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e2a28(undefined4 param_1,int param_2,uint param_3,int *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005e2b3e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if ((int)param_3 < 0) {
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdGlobal.pas",
                 0x1120);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  iVar2 = FUN_00409a18(param_1);
  iVar2 = iVar2 - param_3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if ((-1 < param_2) && (param_2 < iVar2)) {
    iVar2 = param_2;
  }
  FUN_00409be0(param_4,&DAT_004108f8,1,iVar2);
  if (0 < iVar2) {
    FUN_00409d1c(&local_8,param_1,&DAT_004108f8);
    if ((int)param_3 < 0) {
      FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdGlobal.pas",
                   0xafa);
    }
    iVar3 = FUN_00409a18(local_8);
    iVar4 = iVar2 + param_3;
    if (SCARRY4(iVar2,param_3)) {
      iVar3 = FUN_00405944();
      iVar4 = extraout_EDX;
    }
    if (iVar3 < iVar4) {
      FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdGlobal.pas",
                   0xafb);
    }
    iVar3 = 0;
    iVar4 = *param_4;
    if ((iVar4 == 0) || (*(int *)(iVar4 + -4) == 0)) {
      iVar3 = thunk_FUN_00404478();
      iVar4 = extraout_EDX_00;
    }
    iVar4 = iVar4 + iVar3;
    if ((local_8 == 0) || (iVar3 = local_8, *(uint *)(local_8 + -4) <= param_3)) {
      iVar3 = thunk_FUN_00404478(local_8,iVar4);
      iVar4 = extraout_EDX_01;
    }
    FUN_0040450c(iVar3 + param_3,iVar4,iVar2);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005e2b45;
  puStack_1c = (undefined1 *)0x5e2b3d;
  FUN_00409ce0(&local_8,&DAT_004108f8,puVar1);
  return;
}
