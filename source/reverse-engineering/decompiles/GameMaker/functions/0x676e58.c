// rea decompile_all
// name: FUN_00676e58
// address: 0x676e58
// body: available
// range: 0x676e58-0x676f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00676e58(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  local_14 = param_4;
  local_18 = param_3;
  local_8 = param_1;
  uVar2 = FUN_006763bc(param_1,&local_18,param_3,param_4);
  uVar2 = FUN_00675394(local_8,uVar2,param_3,param_4);
  uVar3 = FUN_006767e4(local_8);
  piVar4 = (int *)FUN_0043cf44(uVar3,uVar2);
  FUN_00674454(piVar4,*(undefined4 *)(param_2 + 0x50));
  iVar5 = FUN_00674d58(param_2);
  if (iVar5 == 0) {
    return;
  }
  uVar2 = FUN_0043c914(piVar4);
  uVar3 = FUN_006767e4(local_8);
  uVar2 = FUN_00672cc0(uVar3,uVar2);
  FUN_00674454(uVar2,*(undefined4 *)(param_2 + 0x50));
  iVar5 = FUN_00674d58(param_2);
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    local_c = iVar5;
    do {
      uVar2 = FUN_0043c914(piVar4);
      uVar3 = FUN_006767e4(local_8);
      FUN_00672cc0(uVar3,uVar2);
      uVar2 = FUN_0067236c();
      uVar2 = FUN_0043cf44(uVar2,iVar6);
      local_10 = FUN_00405cbc(uVar2,&PTR_FUN_0066c650);
      uVar2 = FUN_00674d24(param_2,iVar6);
      FUN_00674340(local_10,uVar2);
      FUN_006745e4(local_10,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x40) + 0x6c) + 0x28));
      iVar6 = iVar6 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  (**(code **)(*(int *)piVar4[0x11] + 0xf8))();
  (**(code **)(*piVar4 + 0x2c))(piVar4,1);
  iVar5 = FUN_00673fd0(piVar4);
  if (iVar5 == 0) {
    cVar1 = FUN_00672334(piVar4);
    if (cVar1 != '\0') {
      FUN_0067236c(piVar4);
      iVar5 = FUN_00673010();
      if (0 < iVar5) goto LAB_00676f7d;
    }
    uVar2 = 0;
  }
  else {
LAB_00676f7d:
    uVar2 = 1;
  }
  (**(code **)(*(int *)piVar4[0x11] + 0x74))((int *)piVar4[0x11],uVar2);
  return;
}
