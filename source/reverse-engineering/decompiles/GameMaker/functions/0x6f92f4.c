// rea decompile_all
// name: FUN_006f92f4
// address: 0x6f92f4
// body: available
// range: 0x6f92f4-0x6f94d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f92f4(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_24 [4];
  int local_20;
  undefined1 local_14 [8];
  undefined4 local_c;
  int local_8;

  local_8 = param_3;
  if (*(int *)(param_1 + 0x434) == 0) {
    FUN_004d43f8(L"You need to select or add a moment before you can add actions.");
  }
  else {
    piVar2 = (int *)FUN_00405cbc(param_2,&PTR_LAB_00479ab8);
    FUN_00438bf4(param_5,param_4,local_14);
    iVar3 = FUN_00483b48(piVar2,local_14,1);
    if (iVar3 != -1) {
      FUN_00483bd0(piVar2,iVar3,local_24);
      uVar4 = FUN_00483710(piVar2);
      iVar5 = (int)uVar4 >> 1;
      if (iVar5 < 0) {
        iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
      }
      if (local_20 + iVar5 < param_4) {
        iVar3 = iVar3 + 1;
      }
    }
    if (iVar3 == -1) {
      iVar3 = (**(code **)(*(int *)piVar2[0xa0] + 0x14))();
    }
    cVar1 = FUN_00405c98(local_8,&PTR_FUN_00530470);
    if (cVar1 == '\0') {
      cVar1 = FUN_00405c98(local_8,&PTR_LAB_00479ab8);
      if ((cVar1 != '\0') && (-1 < DAT_0079017c)) {
        local_c = FUN_005a5250(*(undefined4 *)(param_1 + 0x434),iVar3,0,0);
        if ((iVar3 <= DAT_0079017c) && (param_1 == DAT_00790184)) {
          DAT_0079017c = DAT_0079017c + 1;
        }
        uVar6 = FUN_005a502c(*(undefined4 *)(DAT_00790184 + 0x434),DAT_0079017c);
        FUN_007106d8(local_c,uVar6);
        if (DAT_00790180 == '\0') {
          FUN_005a529c(*(undefined4 *)(DAT_00790184 + 0x434),DAT_0079017c);
          if (param_1 != DAT_00790184) {
            FUN_006f8f10(DAT_00790184);
          }
        }
        FUN_006f8f10(param_1);
        (**(code **)(*piVar2 + 0xf0))(piVar2,iVar3);
      }
    }
    else {
      local_c = FUN_005a5250(*(undefined4 *)(param_1 + 0x434),iVar3,*(int *)(local_8 + 0xc) / 1000,
                             *(int *)(local_8 + 0xc) % 1000);
      FUN_006f8f10(param_1);
      (**(code **)(*piVar2 + 0xf0))(piVar2,iVar3);
      cVar1 = FUN_006ff4dc(local_c);
      if (cVar1 == '\0') {
        FUN_005a529c(*(undefined4 *)(param_1 + 0x434),iVar3);
        FUN_006f8f10(param_1);
      }
      (**(code **)(**(int **)(param_1 + 0x394) + 0x94))();
    }
    FUN_006fa7b0(iVar3);
    *(undefined1 *)(param_1 + 0x42c) = 1;
  }
  return;
}
