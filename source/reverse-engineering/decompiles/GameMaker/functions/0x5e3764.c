// rea decompile_all
// name: FUN_005e3764
// address: 0x5e3764
// body: available
// range: 0x5e3764-0x5e388c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e3788 (push 0x5e388d followed by fs-segment stack chaining); handler 0x5e388d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e3764(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_005e388d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if ((int)param_3 < 0) {
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdGlobal.pas",
                 0x1120);
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  iVar2 = FUN_00409a18(param_2);
  iVar2 = iVar2 - param_3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if ((-1 < param_4) && (param_4 < iVar2)) {
    iVar2 = param_4;
  }
  if (0 < iVar2) {
    uVar3 = FUN_00409a18(*param_1);
    FUN_00409be0(param_1,&DAT_004108f8,1,iVar2 + uVar3);
    FUN_00409d1c(&local_8,param_2,&DAT_004108f8);
    if ((int)param_3 < 0) {
      FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdGlobal.pas",
                   0xafa);
    }
    iVar4 = FUN_00409a18(local_8);
    iVar5 = iVar2 + param_3;
    if (SCARRY4(iVar2,param_3)) {
      iVar4 = FUN_00405944();
      iVar5 = extraout_EDX;
    }
    if (iVar4 < iVar5) {
      FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdGlobal.pas",
                   0xafb);
    }
    iVar5 = *param_1;
    if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar3)) {
      iVar5 = thunk_FUN_00404478();
    }
    iVar5 = iVar5 + uVar3;
    if ((local_8 == 0) || (iVar4 = local_8, *(uint *)(local_8 + -4) <= param_3)) {
      iVar4 = thunk_FUN_00404478(local_8,iVar5);
      iVar5 = extraout_EDX_00;
    }
    FUN_0040450c(iVar4 + param_3,iVar5,iVar2);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005e3894;
  puStack_24 = (undefined1 *)0x5e388c;
  FUN_00409ce0(&local_8,&DAT_004108f8,puVar1);
  return;
}
