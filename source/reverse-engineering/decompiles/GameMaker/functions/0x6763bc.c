// rea decompile_all
// name: FUN_006763bc
// address: 0x6763bc
// body: available
// range: 0x6763bc-0x6765bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006763bc(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_2c [8];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;

  puVar6 = &stack0xfffffffc;
  local_8 = param_1;
  uVar2 = FUN_004f4014(param_1,param_2,1,0,0);
  cVar1 = FUN_00405c98(uVar2,&PTR_FUN_0066ebd4);
  local_c = uVar2;
  if (cVar1 == '\0') {
    local_c = 0;
    local_10 = 0x7fffffff;
    local_18 = FUN_00676320(param_2);
    local_1c = (**(code **)(*local_8 + 0x130))(local_8,*local_8,puVar6);
    if (-1 < local_1c + -1) {
      iVar5 = 0;
      do {
        uVar2 = FUN_006767e4(local_8);
        iVar3 = FUN_00672cc0(uVar2,iVar5);
        if (*(int *)(iVar3 + 0x44) != 0) {
          uVar2 = FUN_006767e4(local_8);
          iVar3 = FUN_00672cc0(uVar2,iVar5);
          if (*(char *)(*(int *)(iVar3 + 0x44) + 0x59) != '\0') {
            uVar2 = FUN_006767e4(local_8);
            iVar3 = FUN_00672cc0(uVar2,iVar5);
            FUN_004edf30(*(undefined4 *)(iVar3 + 0x44),local_2c);
            iVar3 = FUN_00676320(local_2c);
            if (iVar3 == local_18) {
              iVar3 = *param_2;
              local_14 = param_2[1];
              uVar2 = FUN_006767e4(local_8);
              iVar4 = FUN_00672cc0(uVar2,iVar5);
              if (*param_2 < *(int *)(*(int *)(iVar4 + 0x44) + 0x40)) {
                uVar2 = FUN_006767e4(local_8);
                iVar3 = FUN_00672cc0(uVar2,iVar5);
                iVar3 = *(int *)(*(int *)(iVar3 + 0x44) + 0x40);
              }
              uVar2 = FUN_006767e4(local_8);
              iVar4 = FUN_00672cc0(uVar2,iVar5);
              if (param_2[1] < *(int *)(*(int *)(iVar4 + 0x44) + 0x44)) {
                uVar2 = FUN_006767e4(local_8);
                iVar4 = FUN_00672cc0(uVar2,iVar5);
                local_14 = *(int *)(*(int *)(iVar4 + 0x44) + 0x44);
              }
              uVar2 = FUN_006767e4(local_8);
              iVar4 = FUN_00672cc0(uVar2,iVar5);
              FUN_004edf30(*(undefined4 *)(iVar4 + 0x44),local_2c);
              if (local_24 < *param_2) {
                uVar2 = FUN_006767e4(local_8);
                iVar3 = FUN_00672cc0(uVar2,iVar5);
                FUN_004edf30(*(undefined4 *)(iVar3 + 0x44),local_2c);
                iVar3 = local_24;
              }
              uVar2 = FUN_006767e4(local_8);
              iVar4 = FUN_00672cc0(uVar2,iVar5);
              FUN_004edf30(*(undefined4 *)(iVar4 + 0x44),local_2c);
              if (local_20 < param_2[1]) {
                uVar2 = FUN_006767e4(local_8);
                iVar4 = FUN_00672cc0(uVar2,iVar5);
                FUN_004edf30(*(undefined4 *)(iVar4 + 0x44),local_2c);
                local_14 = local_20;
              }
              iVar3 = (*param_2 - iVar3) * (*param_2 - iVar3) +
                      (param_2[1] - local_14) * (param_2[1] - local_14);
              if (iVar3 < local_10) {
                local_10 = iVar3;
                uVar2 = FUN_006767e4(local_8);
                iVar3 = FUN_00672cc0(uVar2,iVar5);
                local_c = *(undefined4 *)(iVar3 + 0x44);
              }
            }
          }
        }
        iVar5 = iVar5 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  return local_c;
}
