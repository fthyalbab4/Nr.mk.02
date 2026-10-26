// rea decompile_all
// name: FUN_005e0428
// address: 0x5e0428
// body: available
// range: 0x5e0428-0x5e056d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e0428(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_EDX;
  int iVar5;
  int extraout_EDX_00;
  uint uVar6;
  uint extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  uint extraout_EDX_05;
  int extraout_EDX_06;
  int iVar7;

  iVar1 = FUN_005e1ab0(param_1,param_2,param_3);
  if (iVar1 < 1) {
    FUN_00407eb8(param_4,0);
  }
  else {
    if ((longlong)(int)((longlong)iVar1 * 2) != (longlong)iVar1 * 2) {
      FUN_00405944();
    }
    FUN_00408244(param_4);
    if (SBORROW4(iVar1,1)) {
      FUN_00405944();
    }
    if (-1 < iVar1 + -1) {
      iVar7 = 0;
      do {
        iVar2 = thunk_FUN_004089c0(param_4);
        iVar4 = (int)((longlong)iVar7 * 2);
        if ((longlong)iVar4 != (longlong)iVar7 * 2) {
          iVar2 = FUN_00405944();
          iVar4 = extraout_EDX;
        }
        iVar5 = iVar4 + 1;
        if (SCARRY4(iVar4,1)) {
          iVar2 = FUN_00405944();
          iVar5 = extraout_EDX_00;
        }
        uVar6 = iVar5 - 1;
        if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= uVar6)) {
          iVar2 = thunk_FUN_00404478();
          uVar6 = extraout_EDX_01;
        }
        uVar3 = param_3 + iVar7;
        if (SCARRY4(param_3,iVar7)) {
          uVar3 = FUN_00405944();
        }
        if ((param_1 == 0) || (iVar4 = param_1, *(uint *)(param_1 + -4) <= uVar3)) {
          uVar3 = thunk_FUN_00404478();
          iVar4 = extraout_EDX_02;
        }
        uVar3 = (uint)(*(byte *)(iVar4 + uVar3) >> 4);
        if (0xf < uVar3) {
          uVar3 = thunk_FUN_00404478();
        }
        *(wchar_t *)(iVar2 + -2 + (uVar6 + 1) * 2) = u_0123456789ABCDEF_0077d7dc[uVar3];
        iVar2 = thunk_FUN_004089c0(param_4);
        iVar4 = (int)((longlong)iVar7 * 2);
        if ((longlong)iVar4 != (longlong)iVar7 * 2) {
          iVar2 = FUN_00405944();
          iVar4 = extraout_EDX_03;
        }
        iVar5 = iVar4 + 2;
        if (SCARRY4(iVar4,2)) {
          iVar2 = FUN_00405944();
          iVar5 = extraout_EDX_04;
        }
        uVar6 = iVar5 - 1;
        if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= uVar6)) {
          iVar2 = thunk_FUN_00404478();
          uVar6 = extraout_EDX_05;
        }
        uVar3 = param_3 + iVar7;
        if (SCARRY4(param_3,iVar7)) {
          uVar3 = FUN_00405944();
        }
        if ((param_1 == 0) || (iVar4 = param_1, *(uint *)(param_1 + -4) <= uVar3)) {
          uVar3 = thunk_FUN_00404478();
          iVar4 = extraout_EDX_06;
        }
        uVar3 = (uint)(*(byte *)(iVar4 + uVar3) & 0xf);
        if (0xf < uVar3) {
          uVar3 = thunk_FUN_00404478();
        }
        *(wchar_t *)(iVar2 + -2 + (uVar6 + 1) * 2) = u_0123456789ABCDEF_0077d7dc[uVar3];
        iVar7 = iVar7 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}
