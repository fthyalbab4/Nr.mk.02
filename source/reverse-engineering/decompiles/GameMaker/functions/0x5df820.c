// rea decompile_all
// name: FUN_005df820
// address: 0x5df820
// body: available
// range: 0x5df820-0x5df914 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005df820(undefined4 param_1,int *param_2,int *param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 local_8;

  if (param_2 == (int *)0x0) {
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdStreamVCL.pas",
                 0x3a);
  }
  local_8 = 0;
  if (*param_3 == 0) {
    FUN_00409be0(param_3,&DAT_004108f8,1,0);
  }
  if (param_5 < 0) {
    uVar1 = (**(code **)*param_2)();
    iVar4 = extraout_EDX;
    uVar2 = FUN_0043f234(param_2);
    param_5 = uVar1 - uVar2;
    if (param_5 >> 0x1f != (iVar4 - extraout_EDX_00) - (uint)(uVar1 < uVar2)) {
      param_5 = thunk_FUN_00404478();
    }
  }
  if (param_5 != 0) {
    iVar3 = FUN_00409a18(*param_3);
    iVar4 = param_4 + param_5;
    if (SCARRY4(param_4,param_5)) {
      iVar3 = FUN_00405944();
      iVar4 = extraout_EDX_01;
    }
    if (iVar3 < iVar4) {
      iVar4 = param_4 + param_5;
      if (SCARRY4(param_4,param_5)) {
        iVar4 = FUN_00405944();
      }
      FUN_00409be0(param_3,&DAT_004108f8,1,iVar4);
    }
    if (*param_3 == 0) {
      FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdStreamVCL.pas"
                   ,0x51);
    }
    iVar4 = *param_3;
    if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= param_4)) {
      param_4 = thunk_FUN_00404478();
      iVar4 = extraout_EDX_02;
    }
    local_8 = (**(code **)(*param_2 + 0xc))(param_2,iVar4 + param_4,param_5);
  }
  return local_8;
}
